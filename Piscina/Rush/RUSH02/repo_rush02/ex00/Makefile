rush-02: compile

compile:
	cc -Wall -Werror -Wextra $(wildcard src/*.c) -o rush-02

check: compile -norm fclean

norm:
	norminette -R CheckForbiddenSourceHeader src/

fclean:
	rm -f rush-02