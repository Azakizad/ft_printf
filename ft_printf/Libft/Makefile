# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 23:09:36 by azakizad          #+#    #+#              #
#    Updated: 2022/04/28 02:10:44 by azakizad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a



SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strmapi.c ft_strjoin.c\
			ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_memcpy.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_atoi.c ft_putendl_fd.c ft_substr.c ft_striteri.c ft_itoa.c\
			ft_strtrim.c ft_split.c \

OBJ = ${SRC:.c=.o}

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

BOBJ = ${BSRC:.c=.o}

CC = cc
CC_FLAGS = -Wall -Werror -Wextra

.PHONY: all bonus
all: ${NAME}

${NAME}: ${SRC}
	${CC} ${CC_FLAGS} -c -g ${SRC}
	ar -rc libft.a ${OBJ}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

bonus: ${BSRC}
	${CC} ${CC_FLAGS} -c -g ${SRC}
	${CC} ${CC_FLAGS} -c -g ${BSRC}
	ar -rc libft.a ${OBJ} ${BOBJ}

re: fclean all
.PHONY: all clean fclean re test
