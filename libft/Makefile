# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/06 06:04:09 by ttshivhu          #+#    #+#              #
#    Updated: 2017/09/21 08:02:07 by ttshivhu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	  ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
	  ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
	  ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	  ft_isascii.c ft_isprint.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c \
	  ft_strclr.c ft_striter.c ft_striteri.c ft_toupper.c ft_putchar.c ft_putstr.c \
	  ft_putendl.c  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_strdel.c ft_strmap.c ft_strequ.c ft_strnequ.c ft_strjoin.c ft_lstnew.c ft_freestrarr.c\
	  ft_strsub.c ft_strjoin.c ft_lstadd.c ft_strmapi.c ft_putnbr.c ft_realloc.c\
	  ft_lstdelone.c ft_itoa.c ft_lstiter.c ft_strsplit.c ft_strtrim.c ft_lstmap.c\
	  ft_splitcounter.c ft_first_word.c ft_lstdel.c ft_is_blank.c ft_isprint_str.c ft_strstartswith.c\
	  ft_strendswith.c ft_strjoinfr.c ft_isemptystr.c\

OBJ = $(SRC:.c=.o)

HEADER = ./libft.h

FLAGS = -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC)
	@ar rc libft.a $(OBJ) $(HEADER)
	@ranlib libft.a

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
