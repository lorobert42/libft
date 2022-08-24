# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorobert <lorobert@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 10:00:10 by lorobert          #+#    #+#              #
#    Updated: 2022/08/24 14:53:43 by lorobert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

SRCS	:= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_memccpy.c ft_memcpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_memset.c ft_strdup.c ft_strlcpy.c ft_strlcat.c \
	ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCSB	:= ft_lstnew.c $(SRCS)
OBJS	:= $(SRCS:.c=.o)
OBJSB	:= $(SRCSB:.c=.o)

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

RM		:= rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJSB)
	ar rc $(NAME) $(OBJSB)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all test clean fclean re
