NAME = libft.a

FLAGS = -Wall -Wextra -Werror


funct = ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_isalpha.c ft_isalnum.c ft_isascii.c  ft_isdigit.c  ft_isprint.c \
		ft_tolower.c  ft_toupper.c \
		ft_strchr.c   ft_strlcat.c  ft_strlen.c   ft_strnstr.c \
		ft_strdup.c   ft_strlcpy.c  ft_strncmp.c  ft_strrchr.c \
		ft_memchr.c   ft_memcmp.c   ft_memcpy.c   ft_memmove.c  ft_memset.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c \
		ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

funct_b = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c


obj = ${funct:.c=.o}

obj_b = ${funct_b:.c=.o} 


%.o:%.c	libft.h Makefile
	cc $(FLAGS) -c $< -o $@


all: ${NAME}

${NAME}: ${obj}
	ar -crs ${NAME} ${obj}

bonus: ${obj_b} ${obj}
	ar -crs ${NAME} ${obj_b} ${obj}


#${obj}: ${funct}
#	cc $(FLAGS) -c ${funct} -o $@

clean:
	rm -f ${obj} ${obj_b}

fclean: clean
	rm -f ${NAME}

re: fclean all


.PHONY: all clean fclean re

