# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mvan-hou <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/19 21:08:47 by mvan-hou      #+#    #+#                  #
#    Updated: 2019/11/18 13:45:18 by mvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = atoi bzero count_words count_wordsc isalnum isalpha isascii isdigit \
	  isprint isspace itoa lstadd lstdel lstdelone lstmap lstnew memalloc \
	  memccpy memchr memcmp memcpy memdel memmove memset putchar putchar_fd \
	  putendl putendl_fd putnbr putnbr_fd putstr putstr_fd strcat strchr \
	  strclr strcmp strcpy strdel strdup strequ striter striteri strjoin \
	  strlcat strlen strmap strmapi strncat strncmp strncpy strnequ strnew \
	  strnstr strrchr strrev strsplit strstr strsub strtrim tolower toupper \
	  lstiter get_next_line strndup strnjoin

HEADER = libft.h

FILEC = $(SRC:%=ft_%.c)

FILEO = $(SRC:%=ft_%.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror -I$(HEADER) $(FILEC)
	ar rc $(NAME) $(FILEO)
	ranlib $(NAME)

clean:
	/bin/rm -f $(FILEO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
