/*
** EPITECH PROJECT, 2018
** matchstick.c
** File description:
** lol
*/

#include "my.h"
#include <unistd.h>

int matchstick(int *array, int line, param_t param, int matches)
{
	array[line - 1] -= matches;
	print_sentence(0, matches, line);
	print_array(array, param.size);
	if (last_turn(array, param.size) == 0)
		return (2);
	ia_random(array, param, &line, &matches);
	array[line - 1] -= matches;
	print_sentence(1, matches, line);
	print_array(array, param.size);
	if (last_turn(array, param.size) == 0)
		return (1);
	my_putstr("\nYour turn:\n");
	return (0);
}
