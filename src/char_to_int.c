/*
** EPITECH PROJECT, 2018
** char_to_int.c
** File description:
** lol
*/

#include <stdlib.h>
#include "my.h"

int char_to_int(int ac, char **av, int *line, int *take)
{
	if (ac != 3)
		return (0);
	else if (my_strlen(av[1]) > 2)
		return (0);
	else if (my_strlen(av[1]) == 1 && av[1][0] == '1')
		return (0);
	else if (av[1][0] == '0' || av[2][0] == '0')
		return (0);
	else if (check_nbr_str(av[1]) == 0)
		return (0);
	else if (check_nbr_str(av[2]) == 0)
		return (0);

	*line = my_getnbr(av[1]);
	*take = my_getnbr(av[2]);

	return (1);
}

int check_nbr_str(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int *init_tab(int hauteur)
{
	int *array = malloc(sizeof(int) * hauteur);
	int i = 0;

	while (i < hauteur) {
		array[i] = 1 + (i * 2);
		i++;
	}

	return (array);
}
