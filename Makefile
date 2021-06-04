# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 17:12:33 by kyuki             #+#    #+#              #
#    Updated: 2021/06/04 19:07:39 by kyuki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libft.a

CC	= gcc

CFLAGS	= -Wall	-Wextra	-Werror

RM		=	rm -f

INCDIR	=	./libft

SRCDIR	=	./

SRCNAME	=	ft_bzero.c \
ft_atoi.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memccpy.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strcat.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdup.c \
ft_strlen.c \
ft_strncat.c \
ft_strncmp.c \
ft_strncpy.c \
ft_strstr.c \
ft_tolower.c \
ft_toupper.c \
ft_memchr.c \
ft_strnstr.c \
ft_strrchr.c \
ft_memcmp.c \
ft_strchr.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strjoin.c \
ft_split.c \
ft_itoa.c \
ft_calloc.c \
ft_substr.c \
ft_strtrim.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putnbr.c \
ft_strmapi.c \
ft_free_char.c \
ft_putchar.c \
ft_putstr.c \
ft_malloc_p.c \
ft_malloc_pp.c \
ft_haschar.c \
ft_isspace.c \
ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstclear.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstmap.c \
ft_lstnew.c \
ft_lstsize.c \
ft_putnbr_base_int.c \
ft_putnbr_base_unsigned_int.c \
ft_sqrt.c \
ft_lstlast.c \
ft_swap.c \
ft_lstcpy.c \
ft_free_int.c \
ft_quick_sort.c \
ft_lstputnbr.c \
ft_spaceskip.c


BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRCS	=	$(addprefix $(SRCDIR), $(SRCNAME))

OBJS	=	$(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS:.c=.o)

.c.o:
			$(CC) $(CFLAGS)	-I $(INCDIR) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar	rcs	$(NAME)	$(OBJS)

all:		$(NAME)


clean:
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

bonus:		$(BONUS_OBJS)
			ar rcs $(NAME) $(BONUS_OBJS)

.PHONY:	all clean fclean re
