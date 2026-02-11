NAME 			=	RPN
CC 				=	c++
CFLAGS 			=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors #-fsanitize=address

SRC_FILES 		=	main.cpp \
					RPN.cpp

SRC_DIR			=	src/
SRC				=	$(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ_DIR			=	obj/
OBJ				=	$(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

$(OBJ_DIR)%.o	:	$(SRC_DIR)%.cpp
					$(CC) $(CFLAGS) -c $< -o $@

all				:	$(OBJ_DIR) $(NAME)

$(OBJ_DIR)		:
					mkdir -p $(OBJ_DIR)

$(NAME)			:	$(OBJ)
					$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
					# $(NAME) ready

clean			:
					rm -rf $(OBJ_DIR)

fclean			:	clean
					rm -f $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re
