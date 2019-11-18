# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mvan-hou <mvan-hou@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/09/07 15:50:57 by mvan-hou       #+#    #+#                 #
#    Updated: 2019/09/22 19:11:48 by mvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME	= libftprintf.a
LIBFT	= libft/libft.a

CC		= gcc -Wall -Wextra -Werror

RED		= \033[0;31m
GREEN	= \033[0;32m
NC		= \033[0m

SRC		=	ft_math.c \
			ft_buf.c \
			ft_flags.c \
			ft_float.c \
			ft_initialize.c \
			ft_integer.c \
			ft_itoa_base.c \
			ft_order.c \
			ft_perc.c \
			ft_printf.c \
			ft_string.c \
			ft_width.c \
			ft_xotoa_base.c \
			ft_numbers.c \
			ft_massive_floats.c \
			ft_inf_nan.c \
			ft_dioux.c \
			ft_cspf.c \
			ft_format.c \
			ft_binary.c \
			ft_time.c \
			ft_time2.c \
			ft_time3.c

OBJ		= $(SRC:%.c=%.o)

INCL	= libft

all:	$(NAME)

$(LIBFT):
	$(MAKE) -C libft

$(NAME):	$(OBJ) $(LIBFT)
	@echo "${GREEN}Making libftprintf.a${NC}"
	@cp libft/libft.a $(NAME)
	@ar crs $(NAME) $(OBJ)


.PHONY: clean

clean:
	@rm -f $(OBJ)
	@echo "${RED}Cleaning object files${NC}"
	@$(MAKE) clean -C libft

lldb: re
	gcc -g main.c -L. -lftprintf

fclean:	clean
	@rm -f $(NAME)
	@$(MAKE) fclean -C libft

re:	fclean all