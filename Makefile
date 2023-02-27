# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorobert <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 14:40:57 by lorobert          #+#    #+#              #
#    Updated: 2023/02/27 14:26:27 by lorobert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libft.a

SRC_DIR		:=	src
SRCS		:=	ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_strchr.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strrchr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memset.c \
				ft_strdup.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strnstr.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_itoa_hex.c \
				ft_itoa_ptr.c \
				ft_itoa_unsigned.c \
				ft_printf.c \
				ft_printf_char.c \
				ft_printf_hex.c \
				ft_printf_int.c \
				ft_printf_ptr.c \
				ft_printf_string.c \
				ft_printf_uint.c \
				get_next_line.c
SRCS		:=	$(SRCS:%=$(SRC_DIR)/%)

BUILD_DIR	:=	.build
OBJS		:=	$(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS		:=	$(OBJS:.o=.d)

CC			:=	gcc
CFLAGS		:=	-Wall -Wextra -Werror
CPPFLAGS	:=	-MMD -MP -I include
AR			:=	ar
ARFLAGS		:=	-r -c -s

RM			:=	rm -f
MAKEFLAGS	+=	--no-print-directory
DIR_DUP		=	mkdir -p $(@D)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(info CREATED $(NAME))

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(info CREATED $@)

-include $(DEPS)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re
.SILENT:
