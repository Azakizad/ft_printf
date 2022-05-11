# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 14:03:44 by azakizad          #+#    #+#              #
#    Updated: 2022/05/06 01:45:38 by azakizad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

LIBFT	=	./libft/
INCLUDE	=	./includes/
SRCDIR	=	./src/
OBJDIR	=	./objs

SOURCES	=	ft_printf.c ft_print_precent.c ft_printhex.c ft_printnbru.c ft_printptr.c ft_printstr.c ft_putchar.c ft_putnbr.c 

SRCS	=	$(addprefix $(SRCDIR)/, $(SOURCES))
OBJS	=	$(addprefix $(OBJDIR)/, $(SOURCES:.c=.o))



all: $(NAME)

bonus: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCLUDE)/ft_printf.h
	mkdir -p $(OBJDIR)
	$(CC) -I $(INCLUDE) -o $@ -c $<

clean:
	rm -rf $(OBJS)
	rm -rf $(OBJDIR)
	make clean -C $(LIBFT)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
