#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clboutry <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/28 18:18:58 by clboutry          #+#    #+#              #
#    Updated: 2019/10/13 22:59:13 by clboutry         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libft.a

FUN		=	ft_atoi.c ft_bzero.c ft_factorialnb.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c \
			ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
			ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			ft_memdel.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c \
			ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c ft_qstr.c \
			ft_putstr_fd.c ft_putstr.c ft_rotnb.c ft_sqrtrd.c ft_strcat.c \
			ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_putnbri.c \
			ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
			ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
			ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c \
			ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c \
			ft_tolower.c ft_toupper.c ft_calc.c ft_replchar.c ft_putarstr.c \
			ft_nbrlen.c get_next_line.c ft_dblhex.c ft_itoabase.c ft_strdel.c \
			ft_prfdbl.c ft_prfnbr.c ft_prfoper.c ft_printf.c ft_joinfree.c \
			ft_unicode.c

FUNDIR	=	./srcs/

GFLG	=	gcc -Wall -Werror -Wextra -c

HD		=	$(addprefix -I, ./Includes/)

OBJDIR	=	./obj/

OBJS	=	$(FUN:.c=.o)

OBJ		=	$(addprefix $(OBJDIR), $(OBJS))

all: $(NAME)

$(NAME): ./Includes/libft.h $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo $(NAME) "ready"

$(OBJDIR)%.o: $(FUNDIR)%.c
	@mkdir -p $(OBJDIR)
	@$(GFLG) $(HD) -o $@ $<

clean:
	@rm -rf $(OBJDIR)
	@echo "Objects deleted"

fclean: clean
	@rm -f $(NAME)
	@echo $(NAME) "deleted"

re: fclean all

.PHONY: clean fclean re all
