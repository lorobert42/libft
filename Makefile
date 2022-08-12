# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorobert <lorobert@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 10:00:10 by lorobert          #+#    #+#              #
#    Updated: 2022/08/12 16:11:15 by lorobert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

SRCS	:= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_memccpy.c ft_memcpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlcpy.c ft_strlcat.c \
	ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
OBJS	:= $(SRCS:.c=.o)

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

RM		:= rm -f

ifeq (test,$(firstword $(MAKECMDGOALS)))
  # use the rest as arguments for "test"
  TEST_ARG := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  # ...and turn them into do-nothing targets
  $(eval $(TEST_ARG):;@:)
endif

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

test: $(NAME)
	$(CC) $(CFLAGS) -I. ./munit/munit.c ./tests/test_$(TEST_ARG).c -L. -lft

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) -c $(SRCS)
	$(CC) -nostartfiles -shared -o libft.so $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all test clean fclean re
