/*
** EPITECH PROJECT, 2018
** error_message.c
** File description:
** lol
*/

#include "my.h"
#include <unistd.h>

int error_message(int *array, param_t param, int *lines, int *matches)
{
	if (*lines - 1 > param.size || *lines == 0) {
		my_putstr("Error: this line is out of range\n");
		return (0);
	}
	if (*matches > param.match) {
		my_putstr("Error: yon cannot remove more than ");
		my_put_nbr(param.match);
		my_putstr(" matches per turn\n");
		return (0);
	}
	if (*matches == 0) {
		my_putstr("Error: you have to remove at least one match\n");
		return (0);
	}
	if (*matches > array[*lines - 1]) {
		my_putstr("Error: not enough matches on this line\n");
		return (0);
	}
		return (1);
}
