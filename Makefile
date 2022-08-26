FILES	=	ft_isalpha.c ft_tolower.c ft_toupper.c ft_isdigit.c ft_isalnum.c \
			ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_strcmp.c

BFILES =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
			ft_lstiter.c ft_lstmap.c

BOBJS = ${BFILES:.c=.o}
OBJS = ${FILES:.c=.o}
CC = gcc
FLAGS = -Werror -Wall -Wextra
NAME = libft.a
BONUS = libft_bonus.a

# Colors
L_CYAN = \33[1;36m
L_BLUE = \33[1;34m
L_GREEN = \33[1;92m
L_PURPLE = \33[1;35m
NC = \033[0m

all: ${NAME}

%.o:%.c
	 @ echo "Compiling: $<"
	 @ ${CC} ${FLAGS} -c -o $@ $^

bonus: ${BONUS}


${NAME}: ${OBJS}
		@ ar rc -o $@ $^
		@ echo "${L_GREEN}Libft Successfully compiled!${NC}"

${BONUS}: ${BOBJS} ${OBJS}
		@ ar rc -o ${BONUS} ${BOBJS} ${OBJS}
		@ echo "${L_PURPLE}Libft_bonus Successfully compiled!${NC}"

clean: 
		@ rm -f ${OBJS} ${BOBJS}
		@ echo "${L_CYAN}Objects deleted!${NC}"

fclean: clean
		@ rm -f ${NAME} && rm -f ${NAME} ${BONUS}
		@ echo "${L_BLUE}Libft deleted!${NC}"

norma:
		@ norminette ${FILES} libft.h ${BFILES}

re: fclean all

.PHONY: re clean fclean all norma
