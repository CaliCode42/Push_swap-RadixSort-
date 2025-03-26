NAME = push_swap

#Directories
SRC_DIR = src
OPS_DIR = operations
SORT_DIR = sorting
LIBFT_DIR = libft
INCLUDES = includes

#Source files
SRC_FILES = \
	$(SRC_DIR)/errors.c \
	$(SRC_DIR)/main.c \
	$(SRC_DIR)/nodes_management.c \
	$(SRC_DIR)/stdin_to_str.c \
	$(SRC_DIR)/identify_order.c \
	$(SRC_DIR)/find_max_bits.c \
	$(SRC_DIR)/test.c \
	$(SRC_DIR)/ft_free_list.c \
	$(SRC_DIR)/free_stack.c \
	$(OPS_DIR)/swap.c \
	$(OPS_DIR)/push.c \
	$(OPS_DIR)/rotate.c \
	$(OPS_DIR)/reverse_rotate.c \
	$(SORT_DIR)/is_sorted.c \
	$(SORT_DIR)/find_min_lst.c \
	$(SORT_DIR)/find_max_lst.c \
	$(SORT_DIR)/mini_sort.c \
	$(SORT_DIR)/radix_sort.c \

#B_SOURCES = \ >>to complete

#Objects
OBJ_FILES = $(SRC_FILES:.c=.o)
#B_OBJ_FILES = >>to complete

#Compilation
CC = gcc -g
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES) -I$(LIBFT_DIR)

#Library
LIBFT = $(LIBFT_DIR)/libft.a

#Rules
all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR) fclean
	make -C $(LIBFT_DIR) bonus

$(NAME): $(OBJ_FILES) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_FILES) -L$(LIBFT_DIR) -lft -o $(NAME) 

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJ_FILES)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

#bonus: $(OBJECTS) $(B_OBJECTS)
#	to complete

.PHONY: all clean fclean re
