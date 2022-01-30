# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 19:02:23 by qnguyen           #+#    #+#              #
#    Updated: 2022/01/30 14:47:04 by qnguyen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_arrdel ft_atoi ft_bzero ft_calloc ft_countwords ft_d2b ft_d2h ft_diglen ft_isspace\
ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_itoa ft_isprint ft_linkdel \
ft_lstadd_back ft_lstadd ft_lstdel ft_lstdelone ft_lstiter ft_lstlast \
ft_lstmap ft_lstnew ft_lststrsplit ft_memalloc ft_memccpy ft_memchr ft_memcmp \
ft_memcpy ft_memdel ft_memmove ft_memset ft_pow ft_putchar_fd ft_putchar \
ft_putendl_fd ft_putendl ft_putnbr_fd ft_putnbr ft_putstr ft_putstr_fd ft_sqrt\
ft_strcat ft_strchr ft_strclr ft_strcmp ft_strcpy ft_strdel ft_strdup \
ft_strequ ft_striter ft_striteri ft_strjoin ft_strlcat ft_strlen ft_strmap \
ft_strmapi ft_strncat ft_strncmp ft_strncpy ft_strnequ ft_strnew ft_strnstr \
ft_strrchr ft_strsplit ft_strstr ft_strsub ft_strtrim ft_tolower ft_toupper
INCLUDE = includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(addprefix srcs/, $(addsuffix .c, $(SRCS))) includes/libft.h
	gcc $(FLAGS) -c $^ -I$(INCLUDE)
	ar -rcs $(NAME) $(addsuffix .o, $(SRCS))

clean:
	@/bin/rm -f $(wildcard *.o)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
