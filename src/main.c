/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "my.h"
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	param_t	param;
	param_t	user;
	game_t	game;
	int	a;

	if (char_to_int(ac, av, &param.size, &param.match) == 0)
		return (84);
	game.array = init_tab(param.size);
	print_array(game.array, param.size);
	my_putstr("\nYour turn:\n");
	a = main_loop(param, user, game);
	if (a != -1)
		return (a);
	return (0);
}

int main_loop(param_t param, param_t user, game_t game)
{
	while (1) {
		game.read_p = read_part(game.array, param, &user);
		if (game.read_p == 1)
			game.end_game = matchstick(game.array,
			user.size, param, user.match);
		else if (game.read_p == -1)
			return (0);
		if (game.end_game == 1) {
			my_putstr(IA_LOST);
			return (1);
		}
		if (game.end_game == 2) {
			my_putstr("You lost, too bad...\n");
			return (2);
		}
	}
	return (-1);
}
