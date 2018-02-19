# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/23 10:01:18 by grosnet-     #+#   ##    ##    #+#        #
#    Updated: 2018/02/15 07:33:33 by grosnet-    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isdigit.c ft_lstiter.c ft_memdel.c ft_putnbr_fd.c ft_strdel.c \
		ft_strmap.c ft_strrchr.c ft_toupper.c ft_isprint.c ft_lstmap.c \
		ft_memmove.c ft_putstr.c ft_strdup.c ft_strmapi.c ft_strrev.c \
		ft_atoi.c ft_isspace.c ft_lstnew.c ft_memset.c ft_putstr_fd.c \
		ft_strequ.c ft_strncat.c ft_strsplit.c ft_bzero.c ft_itoa.c \
		ft_memalloc.c ft_putchar.c ft_strcat.c ft_striter.c \
		ft_strncmp.c ft_strstr.c ft_is_sort.c ft_list_size.c ft_memccpy.c \
		ft_putchar_fd.c ft_strchr.c ft_striteri.c ft_strncpy.c ft_strsub.c \
		ft_isalnum.c ft_lstadd.c ft_memchr.c ft_putendl.c ft_strclr.c \
		ft_strjoin.c ft_strnequ.c ft_strtrim.c ft_isalpha.c ft_lstdel.c \
		ft_memcmp.c ft_putendl_fd.c ft_strcmp.c ft_strlcat.c ft_strnew.c \
		ft_swap.c ft_isascii.c ft_lstdelone.c ft_memcpy.c ft_putnbr.c \
		ft_strcpy.c ft_strlen.c ft_strnstr.c ft_tolower.c ft_realloc.c \
		ft_countwords.c ft_abs.c get_next_line.c ft_reallocc.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

./%.o: ./%.c
	gcc -Wall -Wextra -Werror -o $@ -c $<

clean :
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
