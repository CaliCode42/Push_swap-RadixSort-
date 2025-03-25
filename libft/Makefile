NAME = libft.a

#Directories
SRC_DIR = src
B_DIR = bonus_src
FT_PRINTF_DIR = ft_printf/src
INCLUDES = includes ../includes/ft_printf.h

#Sources
SRC_FILES = \
	$(SRC_DIR)/ft_isalpha.c \
	$(SRC_DIR)/ft_isdigit.c \
	$(SRC_DIR)/ft_isalnum.c \
	$(SRC_DIR)/ft_isascii.c \
	$(SRC_DIR)/ft_isprint.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_memset.c \
	$(SRC_DIR)/ft_bzero.c \
	$(SRC_DIR)/ft_memcpy.c \
	$(SRC_DIR)/ft_memchr.c \
	$(SRC_DIR)/ft_memmove.c \
	$(SRC_DIR)/ft_strlcpy.c \
	$(SRC_DIR)/ft_strlcat.c \
	$(SRC_DIR)/ft_toupper.c \
	$(SRC_DIR)/ft_tolower.c \
	$(SRC_DIR)/ft_strchr.c \
	$(SRC_DIR)/ft_strrchr.c \
	$(SRC_DIR)/ft_strncmp.c \
	$(SRC_DIR)/ft_memcmp.c \
	$(SRC_DIR)/ft_strnstr.c \
	$(SRC_DIR)/ft_atoi.c \
	$(SRC_DIR)/ft_calloc.c \
	$(SRC_DIR)/ft_strdup.c \
	$(SRC_DIR)/ft_substr.c \
	$(SRC_DIR)/ft_strjoin.c \
	$(SRC_DIR)/ft_strtrim.c \
	$(SRC_DIR)/ft_split.c \
	$(SRC_DIR)/ft_itoa.c \
	$(SRC_DIR)/ft_strmapi.c \
	$(SRC_DIR)/ft_striteri.c \
	$(SRC_DIR)/ft_putchar_fd.c \
	$(SRC_DIR)/ft_putstr_fd.c \
	$(SRC_DIR)/ft_putendl_fd.c \
	$(SRC_DIR)/ft_putnbr_fd.c \

#Bonus Sources
B_SRC = \
	$(B_DIR)/ft_lstnew.c \
	$(B_DIR)/ft_lstadd_front.c \
	$(B_DIR)/ft_lstsize.c \
	$(B_DIR)/ft_lstlast.c \
	$(B_DIR)/ft_lstadd_back.c \
	$(B_DIR)/ft_lstdelone.c \
	$(B_DIR)/ft_lstclear.c \
	$(B_DIR)/ft_lstiter.c \
	$(B_DIR)/ft_lstmap.c \

# Sources ft_printf
PRINTF_FILES = \
	$(FT_PRINTF_DIR)/ft_atoi_base.c \
	$(FT_PRINTF_DIR)/ft_check_precision.c \
	$(FT_PRINTF_DIR)/ft_check_width.c \
	$(FT_PRINTF_DIR)/ft_convert_nb.c \
	$(FT_PRINTF_DIR)/ft_fill_withzero.c \
	$(FT_PRINTF_DIR)/ft_itoa_base.c \
	$(FT_PRINTF_DIR)/ft_memset.c \
	$(FT_PRINTF_DIR)/ft_parse_format.c \
	$(FT_PRINTF_DIR)/ft_present.c \
	$(FT_PRINTF_DIR)/ft_printf.c \
	$(FT_PRINTF_DIR)/ft_putformat.c \
	$(FT_PRINTF_DIR)/ft_putstr.c \
	$(FT_PRINTF_DIR)/ft_render_format.c \
	$(FT_PRINTF_DIR)/ft_strcpy.c \
	$(FT_PRINTF_DIR)/ft_strjoin.c \
	$(FT_PRINTF_DIR)/ft_strlen_int.c \
	$(FT_PRINTF_DIR)/print_type.c \
	$(FT_PRINTF_DIR)/ft_free.c \
	$(FT_PRINTF_DIR)/ft_pickstr.c \

#Objects
OBJ_FILES = $(SRC_FILES:.c=.o) $(PRINTF_FILES:.c=.o)
B_OBJ_FILES = $(B_SRC:.c=.o)

#Compilation
CC = gcc
CFLAGS = -Wall -Wextra -Werror
#$(foreach dir,$(INCLUDES),-I$(dir))

#Rules
all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $@

$(FT_PRINTF_DIR)/%.o: $(FT_PRINTF_DIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $@

$(B_DIR)/%.o: $(B_DIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ_FILES) $(B_OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME) $(B_OBJ_FILES)
	ar rcs $(NAME) $(B_OBJ_FILES)

.PHONY: all clean fclean re