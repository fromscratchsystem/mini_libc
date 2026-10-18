NAME	= lib_tester

MINILIBC_DIR	= ./lib/
MINILIB_A	= libminilibc.a

INC_DIR		= ./include/
SRC_DIR		= ./src/
OBJ_DIR		= ./obj/
SRCS		= $(shell find $(SRC_DIR) -type f -name '*.c')
OBJS		= $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRCS:.c=.o))

RM		= rm -rf
CC		= cc
CFLAGS		= -Wall -Wextra -Werror -MMD -MP -g3
CDEBUG		= -Wall -Wextra -Werror -g3
IFLAGS		= -I$(INC_DIR) -I$(MINILIBC_DIR)/include
LFLAGS		= -L$(MINILIBC_DIR) -lminilibc

ifdef SAN
	CFLAGS += -fsanitize=address,undefined -fno-omit-frame-pointer
	LDFLAGS += -fsanitize=address,undefined
endif

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	mkdir -p $(dir $@)
	$(CC) $(CDEBUG) -c $< -o $@ $(IFLAGS)

$(NAME): $(OBJS)
	make -C $(MINILIBC_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LFLAGS)

clean:
	make clean -C $(MINILIBC_DIR)
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(OBJS:.o=.d)
.PHONY: all clean fclean re
