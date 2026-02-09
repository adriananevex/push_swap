NAME  = libft.a

INC      = inc/
SRC_DIR  = src/
OBJ_DIR  = obj/

CC        = gcc
CFLAGS    = -Wall -Wextra -Werror -I
RM        = rm -f
AR        = ar rcs

FT_DIR    =  $(SRC_DIR)ft/ft_isalnum.c \
            $(SRC_DIR)ft/ft_isalpha.c \
            $(SRC_DIR)ft/ft_isascii.c \
            $(SRC_DIR)ft/ft_isdigit.c \
            $(SRC_DIR)ft/ft_isprint.c \
            $(SRC_DIR)ft/ft_bzero.c \
            $(SRC_DIR)ft/ft_calloc.c \
            $(SRC_DIR)ft/ft_memchr.c \
            $(SRC_DIR)ft/ft_memcmp.c \
            $(SRC_DIR)ft/ft_memmove.c \
            $(SRC_DIR)ft/ft_memset.c \
            $(SRC_DIR)ft/ft_putchar_fd.c \
            $(SRC_DIR)ft/ft_putendl_fd.c \
            $(SRC_DIR)ft/ft_putnbr_fd.c \
            $(SRC_DIR)ft/ft_putstr_fd.c \
            $(SRC_DIR)ft/ft_atoi.c \
            $(SRC_DIR)ft/ft_itoa.c \
            $(SRC_DIR)ft/ft_tolower.c \
            $(SRC_DIR)ft/ft_toupper.c \
            $(SRC_DIR)ft/ft_split.c \
            $(SRC_DIR)ft/ft_strchr.c \
            $(SRC_DIR)ft/ft_strdup.c \
            $(SRC_DIR)ft/ft_striteri.c \
            $(SRC_DIR)ft/ft_strjoin.c \
            $(SRC_DIR)ft/ft_strlcat.c \
            $(SRC_DIR)ft/ft_strlcpy.c \
            $(SRC_DIR)ft/ft_strlen.c \
            $(SRC_DIR)ft/ft_strmapi.c \
            $(SRC_DIR)ft/ft_strncmp.c \
            $(SRC_DIR)ft/ft_strncpy.c \
            $(SRC_DIR)ft/ft_strnstr.c \
            $(SRC_DIR)ft/ft_strrchr.c \
            $(SRC_DIR)ft/ft_strtrim.c \
            $(SRC_DIR)ft/ft_substr.c

FTLST_DIR  = $(SRC_DIR)ft_lst/ft_lstadd_back.c \
            $(SRC_DIR)ft_lst/ft_lstadd_front.c \
            $(SRC_DIR)ft_lst/ft_lstclear.c \
            $(SRC_DIR)ft_lst/ft_lstdelone.c \
            $(SRC_DIR)ft_lst/ft_lstiter.c \
            $(SRC_DIR)ft_lst/ft_lstlast.c \
            $(SRC_DIR)ft_lst/ft_lstmap.c \
            $(SRC_DIR)ft_lst/ft_lstnew.c \
            $(SRC_DIR)ft_lst/ft_lstsize.c

FTPRINTF_DIR  =  $(SRC_DIR)ft_printf/ft_printf.c \
                $(SRC_DIR)ft_printf/ft_print_char.c \
                $(SRC_DIR)ft_printf/ft_print_hex.c \
                $(SRC_DIR)ft_printf/ft_print_number.c \
                $(SRC_DIR)ft_printf/ft_print_pointer.c \
                $(SRC_DIR)ft_printf/ft_print_string.c \
                $(SRC_DIR)ft_printf/ft_print_unsigned.c \
                $(SRC_DIR)ft_printf/ft_type.c

SRC        =  $(FT_DIR) $(FTLST_DIR) $(FTPRINTF_DIR)

OBJ        =  $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC))

all:       $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@$(RM) -r $(OBJ_DIR)
	@$(RM) .cache_exists

fclean: clean
	@$(RM) $(NAME)

re:            fclean all

.PHONY:        all clean fclean re













