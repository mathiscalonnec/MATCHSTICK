/*
** EPITECH PROJECT, 2018
** ia.c
** File description:
** lol
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void ia_random(int *array, param_t param, int *line, int *matches)
{
	my_putstr("\nAI's turn...\n");
	srandom(time(0));
	if (last_turn(array, param.size) > 1) {
		*line = random_line(array, param.size);
		*matches = random_match(array, param.match, line);
			}
	else if (last_turn(array, param.size) == 1) {
		*line = random_line(array, param.size);
		*matches = random_match(array, param.match, line);
		if (array[*line - 1] - *matches == 0 && array[*line - 1] != 1)
			     *matches = 1;
		}
}

int random_match(int *array, int match, int *line)
{
	int output;

	if (array[*line - 1] < match)
		output = random() % array[*line - 1] + 1;
	else
		output = random() % match + 1;
	return (output);
}
int random_line(int *array, int nbr_line)
{
	int line = random() % nbr_line + 1;

	while (array[line - 1] == 0) {
		line = random() % nbr_line + 1;
	}
	return (line);
}

int  last_turn(int *array, int nbr_line)
{
	int i = 0;
	int output = 0;

	while (i < nbr_line) {
		if (array[i] > 0)
			output++;
		i++;
	}
	return (output);
}
