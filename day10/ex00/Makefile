# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamateo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 13:49:44 by mamateo           #+#    #+#              #
#    Updated: 2018/07/03 17:43:33 by mamateo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADER_DIR = includes

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -I$(HEADER_DIR)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

# -=INFO TO KNOW=-
#  << KEY LEGEND >> 4.9, 9.5 are numbers to easily lookup from the REFERENCES below
#  4.9 Everything before a '=' are called TARGETS: "CC" = gcc, also known as rules
#  What's a  WILDCARD ?? >> The wildcard characters in make are ‘*’, ‘?’ and ‘[…]’, the same in shell
#  
#  10.3 CC is the macro for the C compiler to use
#  NAME is the name of where the lib was crreated or src of files
#  SRC is the source of files being pulled from
#  HEADER_DIR is just the name of the DIR of where the library is located in
#  9.7 SUMMARY OF OPTIONS: -I, -c, etc.
#  9.5 CFLAGS is the list of flags to pass to the compilation
#  9.2 all: makes all the top-level targets the makefile knows about.
#  2.7 clean: is the deletion of all files that are normally created by running make
#  fclean: does the equivalent of a make clean and also erases the binary created during the make.
#  re: does the equivalent of a make fclean followed by a make.
#
#  REFERENCES: http://www.gnu.org/software/make/manual/make.html

