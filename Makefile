##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lol
##

SRC_DIR		=	src

INCLUDE_DIR	=	include/

SRC		=	$(SRC_DIR)/char_to_int.c	\
			$(SRC_DIR)/my_getnbr.c		\
			$(SRC_DIR)/my_put_nbr.c		\
			$(SRC_DIR)/my_strlen.c		\
			$(SRC_DIR)/print_array.c	\
			$(SRC_DIR)/print_sentence.c	\
			$(SRC_DIR)/matchstick.c		\
			$(SRC_DIR)/ia.c			\
			$(SRC_DIR)/read_part.c		\
			$(SRC_DIR)/error_message.c	\
			$(SRC_DIR)/read_line.c		\
			$(SRC_DIR)/my_putstr.c

SRC_MAIN	=	$(SRC_DIR)/main.c


SRC_UT		=	tests/tests.c

OBJ		=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

OBJ_UT		=	$(SRC_UT:.c=.o)

TESTS		=	unit

NAME		=	matchstick

CFLAGS		=	-Wall -Wextra -I./$(INCLUDE_DIR) -fdiagnostics-color

LDFLAGS		=	-lcriterion --coverage

all		:	$(NAME)


$(NAME)		:	$(OBJ) $(OBJ_MAIN)
			$(CC) -o $(NAME) $(OBJ_MAIN) $(OBJ)
			rm -f $(OBJ) rm -f $(OBJ_MAIN)

tests		:	$(OBJ_UT) $(OBJ)
			$(CC) -o $(TESTS) $(OBJ_UT) $(OBJ) $(LDFLAGS)
			rm -f $(OBJ) $(OBJ_UT)

debug		:
			@make re CC="gcc -g" -s

clean		:
			rm -f $(OBJ)

fclean		:	clean
			rm -f $(NAME) $(TESTS)

re		:	fclean all

.PHONY		:	all clean fclean
