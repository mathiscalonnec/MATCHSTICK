/*
** EPITECH PROJECT, 2018
** print_array.c
** File description:
** lol
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>

void print_array(int *array, int nbr_line)
{
	int largeur = 1 + ((nbr_line - 1) * 2);
	int i = 0;

	star_line(largeur);
	while (i < nbr_line)
	{
		star();
		space((largeur / 2) - i);
		n_pipe(array[i]);
		space((largeur / 2) - i + ((i * 2 + 1) - array[i]));
		star();
		my_putstr("\n");
		i++;
	}
	star_line(largeur);
}

void star_line(int len)
{
	int i = 0;

	len++;
	while (i <= len) {
		star();
		i++;
	}
	my_putstr("\n");
}
void space(int a)
{
	int i = 0;

	while (i < a) {
		my_putstr(" ");
		i++;
	}

}

void star(void)
{
	my_putstr("*");
}

void n_pipe(int a)
{
	int i = 0;

	while (i < a) {
		my_putstr("|");
		i++;
	}
}
