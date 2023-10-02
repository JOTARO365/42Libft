# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waon-in <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 19:50:19 by waon-in           #+#    #+#              #
#    Updated: 2023/10/02 20:35:31 by waon-in          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
SRCS += ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@

all : $(NAME)

clean : 
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) *.out

re :
	make fclean
	make

.PHONY : all clean fclean re
