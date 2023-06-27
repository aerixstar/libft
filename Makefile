# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheng <aheng@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 20:33:58 by aheng             #+#    #+#              #
#    Updated: 2023/06/25 21:48:39 by aheng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
		ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_toupper.c ft_tolower.c
		
OBJS = $(SRCS:.c =.o)

CC	= cc
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o : %.c
	gcc $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJS)
			ar rcs $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: clean
		rm $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus