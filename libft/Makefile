# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chruhin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 14:21:02 by chruhin           #+#    #+#              #
#    Updated: 2022/12/10 14:12:07 by chruhin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libft.a

SRC			=		ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
					ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
					ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
					ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
					ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
					ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
					ft_toupper.c

SRCB		=		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
					ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \

OBJ			=		$(SRC:.c=.o)

OBJB		=		$(SRCB:.c=.o)

CFLAGS		=		-Wall -Wextra -Wuninitialized -Wno-unused-parameter -Werror

RM			=		rm -f

AR			=		ar -rcs

.PHONY:				all bonus clean fclean re

all:				$(NAME)

$(NAME):			$(OBJ)
					$(AR) $(NAME) $(OBJ)

bonus:				$(OBJ) $(OBJB)
					@cc $(CFLAGS) -c $(SRC) $(SRCB)
					$(AR) $(NAME) $(OBJ) $(OBJB)
clean:
					@$(RM) $(OBJ) $(OBJB)

fclean:				clean
					@$(RM) $(NAME)

re:					fclean all
