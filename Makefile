# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jereligi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 09:22:47 by jereligi          #+#    #+#              #
#    Updated: 2019/11/01 13:58:22 by jereligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c 

SRCBONUS = ft_lstnew_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \
		ft_lstlast_bonus.c 	

PATH = ./src/

_SRC = $(addprefix $(PATH), $(SRC))

_SRCBONUS = $(addprefix $(PATH), $(SRC))

OBJ = $(_SRC:.c=.o)

OBJBONUS = $(_SRCBONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)
	
	
$(NAME) : $(OBJ) $(HEADER_DIR)
	ar rc $(NAME) $(OBJ)

bonus : $(OBJBONUS) $(OBJ)
	ar rc $(NAME) $(OBJ) $(OBJBONUS)

clean :
	rm -f $(OBJ) $(OBJBONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all
