# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 15:35:50 by tkitahar          #+#    #+#              #
#    Updated: 2024/10/10 15:55:54 by tkitahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER_NAME	:= server
CLIENT_NAME	:= client

LIBFT	:= libft/libft.a

SRC_DIR	:= .
OBJ_DIR	:= obj

CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror -Ilibft/includes
RM		:= rm -rf

SERVER_SRC	:= server.c
CLIENT_SRC	:= client.c
SERVER_OBJ	:= $(OBJ_DIR)/server.o
CLIENT_OBJ	:= $(OBJ_DIR)/client.o

all: $(SERVER_NAME) $(CLIENT_NAME)

$(SERVER_NAME):$(SERVER_OBJ) $(LIBFT) 
	$(CC) $(CFLAGS) -o $@ $^
 
$(CLIENT_NAME): $(CLIENT_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(LIBFT):
	make -C libft

clean:
	make -C libft clean
	$(RM) $(OBJ_DIR)

fclean: clean
	make -C libft fclean
	$(RM) $(SERVER_NAME) $(CLIENT_NAME)

re: fclean all

.PHONY: all clean fclean re
