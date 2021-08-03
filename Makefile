# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyuki <kyuki@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 17:12:33 by kyuki             #+#    #+#              #
#    Updated: 2021/08/03 20:57:45 by kyuki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#--------------ESCAPE CODE------------#
ifeq ($(shell uname), Linux)
	ESC_CLEAR_SCREEN		?=	\033[0;2J
	ESC_CLEAR_CURRENT_LINE	?=	\033[0;2K\r

	ESC_DEFAULT ?=	\033[0;0m
	ESC_BOLD	?=	\033[0;1m
	ESC_UNDER	?=	\033[0;4m
	ESC_REV		?=	\033[0;7m

	ESC_BLACK		?=	\033[0;30m
	ESC_RED			?=	\033[0;31m
	ESC_GREEN		?=	\033[0;32m
	ESC_YELLOW		?=	\033[0;33m
	ESC_BLUE		?=	\033[0;34m
	ESC_PURPLE		?=	\033[0;35m
	ESC_CYAN		?=	\033[0;36m
	ESC_WHITE		?=	\033[0;37m

	ESC_BACK_BLACK		?=	\033[0;40m
	ESC_BACK_RED		?=	\033[0;41m
	ESC_BACK_GREEN		?=	\033[0;42m
	ESC_BACK_YELLOW		?=	\033[0;43m
	ESC_BACK_BLUE		?=	\033[0;44m
	ESC_BACK_PURPLE		?=	\033[0;45m
	ESC_BACK_CYAN		?=	\033[0;46m
	ESC_BACK_GRAY		?=	\033[0;47m
else
	ESC_CLEAR_SCREEN		?=	\x1b[2J
	ESC_CLEAR_CURRENT_LINE	?=	\x1b[2K\r

	ESC_DEFAULT ?=	\x1b[0m
	ESC_BOLD	?=	\x1b[1m
	ESC_UNDER	?=	\x1b[4m
	ESC_REV		?=	\x1b[7m

	ESC_BLACK		?=	\x1b[30m
	ESC_RED			?=	\x1b[31m
	ESC_GREEN		?=	\x1b[32m
	ESC_YELLOW		?=	\x1b[33m
	ESC_BLUE		?=	\x1b[34m
	ESC_PURPLE		?=	\x1b[35m
	ESC_CYAN		?=	\x1b[36m
	ESC_WHITE		?=	\x1b[37m

	ESC_BACK_BLACK		?=	\x1b[40m
	ESC_BACK_RED		?=	\x1b[41m
	ESC_BACK_GREEN		?=	\x1b[42m
	ESC_BACK_YELLOW		?=	\x1b[43m
	ESC_BACK_BLUE		?=	\x1b[44m
	ESC_BACK_PURPLE		?=	\x1b[45m
	ESC_BACK_CYAN		?=	\x1b[46m
	ESC_BACK_GRAY		?=	\x1b[47m
endif

#-----------SET SRC INFO----------#
SRCNAME	?=	ft_bzero.c \
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
ft_spaceskip.c \
ft_arraylen.c \
ft_nbrlen.c

SRCDIR	?=
INCDIR	?=	-L./libft -lft
OBJDIR	?= ./obj

SRCS	?= $(addprefix $(SRCDIR), $(SRCNAME))

#-------------SET VARIEBLE-----------#

NAME	?=	libft.a

CC		?= gcc

CFLAGS	?= -Wall -Wextra -Werror -g

RM		:=	rm -rf

OBJS	?=	$(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))

DEPENDS	?= $(OBJS:.o=.d)
#-------------------------------------#

$(OBJDIR)/%.o: $(SRCDIR)%.c
	@-mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS)  -MMD -MP -MF obj/$(<:.c=.d) -c $< -o $@
	@printf "$(ESC_CLEAR_CURRENT_LINE) $(ESC_YELLOW) $< ⌛"

-include $(DEPENDS)

$(NAME):	$(OBJS)
			@printf "$(ESC_CLEAR_CURRENT_LINE) $(ESC_GREEN) All files compiled into '$(OBJDIR)'. $(ESC_DEFAULT)✅\n"
			@ar	rcs	$(NAME)	$(OBJS)
			@echo "$(ESC_GREEN) '$(NAME)' was created. $(ESC_DEFAULT)✅"

all:		$(NAME)

clean	: ## Remove object
			@$(RM) obj
			@echo "$(ESC_RED) '"$(OBJDIR)"' has been deleted. $(ESC_DEFAULT)🗑️"

fclean	:	clean ## Remove object and static
			@$(RM) $(NAME)
			@echo "$(ESC_RED) '"$(NAME)"' has been deleted. $(ESC_DEFAULT)🗑️"

re	:			fclean all ## Retry cmpiles

help	: ## Display this help
	@grep -E '^[a-zA-Z1-9_-]+	:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-20s\033[0m %s\n", $$1, $$2}'

.PHONY:	all clean fclean re help