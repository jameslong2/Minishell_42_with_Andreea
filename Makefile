NAME = minishell
EXP_NAME = FINAL_EXPORT
UNS_NAME = FINAL_UNSET
CD_NAME = FINAL_CD
PWD_NAME = FINAL_PWD
ECHO_NAME = our_echo
CC = cc

OG_ROUTE = "$(shell pwd)/"
EXP_ROUTE = "$(OG_ROUTE)FINAL_EXPORT $$""@"""
UNSET_ROUTE = "$(OG_ROUTE)FINAL_UNSET $$""@"""
CD_ROUTE = "$(OG_ROUTE)FINAL_CD $$""@"""
PWD_ROUTE = "$(OG_ROUTE)FINAL_PWD $$""@"""
EXEC_ROUTE = "$(OG_ROUTE)EXEC"
ECHO_ROUTE = "$(OG_ROUTE)our_echo"

ENVS_ROUTE = "$(OG_ROUTE)env_vars"
CD_PWD_ROUTE = "$(OG_ROUTE)cd_directory"

EXP_R_S = "$(OG_ROUTE)export_script.sh"
UNS_R_S = "$(OG_ROUTE)unset_script.sh"
CD_R_S = "$(OG_ROUTE)cd_script.sh"
PWD_R_S = "$(OG_ROUTE)pwd_script.sh"

CFLAGS = -DEXP_S=\"$(EXP_ROUTE)\" \
			-DUNS_S=\"$(UNSET_ROUTE)\" \
			-DCD_S=\"$(CD_ROUTE)\" \
			-DPWD_S=\"$(PWD_ROUTE)\" \
			-DOG_R=\"$(OG_ROUTE)\" \
			-DEXP_R_S=\"$(EXP_R_S)\" \
			-DUNS_R_S=\"$(UNS_R_S)\" \
			-DCD_R_S=\"$(CD_R_S)\" \
			-DPWD_R_S=\"$(PWD_R_S)\" \
			-DEXEC_R_S=\"$(EXEC_ROUTE)\" \
			-DENVS_R=\"$(ENVS_ROUTE)\" \
			-DCD_PWD_R=\"$(CD_PWD_ROUTE)\" \
			-DECHO_R=\"$(ECHO_ROUTE)\" \
			-fsanitize=address \
			#-Wall -Werror -Wextra -fsanitize=thread
SRC = minishell.c file_creator.c \
	executer.c \
	envs_treater.c file_delete.c \
	parse_builtins.c \
	handler_cd_pwd.c file_cd_pwd.c \
	parse_command.c \
	signals_handler.c create_array.c \
	ft_putstrfd.c signal_extra.c
OBJ = $(SRC:.c=.o)
DEP = $(SRC:.c=.d)

EXP_SRC = built_in_export.c \
		  ft_putstrfd.c
EXP_OBJ = $(EXP_SRC:.c=.o)
EXP_DEP = $(EXP_SRC:.c=.d)

UNS_SRC = built_in_unset.c \
		  ft_putstrfd.c
UNS_OBJ = $(UNS_SRC:.c=.o)
UNS_DEP = $(UNS_SRC:.c=.d)

CD_SRC = built_in_cd.c
CD_OBJ = $(CD_SRC:.c=.o)
CD_DEP = $(CD_SRC:.c=.d)

PWD_SRC = built_in_pwd.c
PWD_OBJ = $(PWD_SRC:.c=.o)
PWD_DEP = $(PWD_SRC:.c=.d)

ECHO_SRC = built_in_echo.c
ECHO_OBJ = $(ECHO_SRC:.c=.o)
ECHO_DEP = $(ECHO_SRC:.c=.d)

%.o : %.c Makefile #minishell.h
	$(CC) $(CFLAGS) -MMD -c $< -o $@ -lreadline

all: make_libs $(NAME) $(EXP_NAME) $(UNS_NAME) $(CD_NAME) $(PWD_NAME) $(ECHO_NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o minishell -lreadline -lft -L ./libft
$(EXP_NAME): $(EXP_OBJ)
	$(CC) $(CFLAGS) $(EXP_OBJ) -o FINAL_EXPORT -lreadline -lft -L ./libft
$(UNS_NAME): $(UNS_OBJ)
	$(CC) $(CFLAGS) $(UNS_OBJ) -o FINAL_UNSET -lreadline -lft -L ./libft
$(CD_NAME): $(CD_OBJ)
	$(CC) $(CFLAGS) $(CD_OBJ) -o FINAL_CD -lreadline -lft -L ./libft
$(PWD_NAME): $(PWD_OBJ)
	$(CC) $(CFLAGS) $(PWD_OBJ) -o FINAL_PWD -lreadline -lft -L ./libft
$(ECHO_NAME): $(ECHO_OBJ)
	$(CC) $(CFLAGS) $(ECHO_OBJ) -o our_echo -lreadline -lft -L ./libft
make_libs:
	make -C ./libft
clean:
	rm -f $(OBJ) $(DEP)
	rm -f $(EXP_OBJ) $(EXP_DEP)
	rm -f $(UNS_OBJ) $(UNS_DEP)
	rm -f $(CD_OBJ) $(CD_DEP)
	rm -f $(PWD_OBJ) $(PWD_DEP)
	rm -f $(ECHO_OBJ) $(ECHO_DEP)
	make fclean -C ./libft

fclean: clean
	rm -f $(NAME)
	rm -f $(EXP_NAME)
	rm -f $(UNS_NAME)
	rm -f $(CD_NAME)
	rm -f $(PWD_NAME)
	rm -f $(ECHO_NAME)

re: fclean $(NAME) $(EXP_NAME) $(UNS_NAME) $(CD_NAME) $(PWD_NAME) $(ECHO_NAME)
	make

-include $(DEP)

.PHONY : all fclean clean re

