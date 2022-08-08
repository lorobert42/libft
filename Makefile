# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorobert <lorobert@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 10:00:10 by lorobert          #+#    #+#              #
#    Updated: 2022/08/08 14:46:44 by lorobert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

SRCS	:= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_memccpy.c ft_memcpy.c
OBJS	:= $(SRCS:.c=.o)

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

RM		:= rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) -c $(SRCS)
	$(CC) -nostartfiles -shared -o libft.so $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
