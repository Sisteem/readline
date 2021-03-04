# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/28 10:25:34 by mel-idri          #+#    #+#              #
#    Updated: 2020/11/30 22:35:47 by mel-idri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = readline
LIBFT = libft/libft.a
CFLAGS = -Wall -Wextra -Werror
ifeq ($(DEBUG), true)
	CFLAGS = -g -Wall -Wextra
endif
CC = gcc
SRCS = $(wildcard *.c)
OBJS = $(addprefix  objs/, $(SRCS:.c=.o))
INCLUDES = readline.h readline_typedefs.h

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -ltermcap $(LIBFT)

objs/%.o : %.c | objs
	$(CC) $(CFLAGS) -c $< -o $@ 

$(OBJS) : $(INCLUDES)

$(LIBFT): force
	$(MAKE) -C libft/

objs:
	mkdir objs

clean:
	$(MAKE) -C libft/ clean
	rm -rf objs

fclean: clean
	$(MAKE) -C libft/ fclean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

force:

.PHONY: all fclean re clean force
