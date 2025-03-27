NAME = push_swap

#Directories
SRC_DIR = src
OPS_DIR = operations
SORT_DIR = sorting
OBJ_DIR = objects
LIBFT_DIR = libft
INCLUDES = includes

#Source files
SRC_FILES := \
	errors.c \
	main.c \
	create_add_node.c \
	split_to_nodes.c \
	stdin_to_str.c \
	find_max_bits.c \
	ft_free_list.c \
	free_stack.c \
	
OPS_FILES := \
	push.c \
	rotate.c \
	reverse_rotate.c \
	swap.c \

SORT_FILES := \
	is_sorted.c \
	find_min_lst.c \
	find_max_lst.c \
	identify_order.c \
	mini_sort.c \
	radix_sort.c \

#B_SOURCES = \ >>to complete

#Path for sources
VPATH = $(SRC_DIR) $(OPS_DIR) $(SORT_DIR)

#Objects
OBJ_FILES := $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o)) \
			 $(addprefix $(OBJ_DIR)/, $(OPS_FILES:.c=.o)) \
			 $(addprefix $(OBJ_DIR)/, $(SORT_FILES:.c=.o))

#B_OBJ_FILES = >>to complete

#Compilation
CC = gcc -g
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES) -I$(LIBFT_DIR)

#Library
LIBFT = $(LIBFT_DIR)/libft.a

#Objects directory
OBJDIRS := $(sort $(dir $(OBJ_FILES)))

#Rules
all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR) bonus

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJDIRS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(OPS_DIR)/%.c | $(OBJDIRS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SORT_DIR)/%.c | $(OBJDIRS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIRS):
	mkdir -p $@

$(NAME): $(OBJ_FILES) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_FILES) -L$(LIBFT_DIR) -lft -o $(NAME) 

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJ_DIR)/*.o

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

#bonus: $(OBJECTS) $(B_OBJECTS)
#	to complete

.PHONY: all clean fclean re
