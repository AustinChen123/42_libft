# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 17:33:21 by chunchen          #+#    #+#              #
#    Updated: 2025/03/12 09:35:09 by chunchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c  ft_isdigit.c \
		ft_isprint.c  ft_memcpy.c  ft_memmove.c ft_memset.c  ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c  ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c
OBJS = $(SRCS:%.c=%.o)
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY = all clean fclean re
