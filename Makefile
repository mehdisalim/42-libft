# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 15:57:43 by esalim            #+#    #+#              #
#    Updated: 2022/10/01 15:13:27 by esalim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


BANIRY	= libft.a
CC		= gcc
AR		= ar rcs
INCDIRS = -I.
OPT		= -std=c99
CFLAGS	= -Wall -Wextra -Werror $(INCDIRS) $(OPT)

CFILES	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_memset.c
HFILES	= libft.h
OBJECTS	= $(CFILES:.c=.o)	

all: $(BANIRY)
	

$(BANIRY): $(OBJECTS)
	$(AR) $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJECTS)
fclean:
	rm -rf $(BANIRY) $(OBJECTS)
