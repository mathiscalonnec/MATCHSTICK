/*
** EPITECH PROJECT, 2018
** read_part.c
** File description:
** lol
*/

#include "my.h"
#include <unistd.h>

int get_line_content(char **buffer, char *str)
{
	my_putstr(str);
	*buffer = read_line();
	if (*buffer == NULL)
		return (0);
	if (*buffer[0] == '\0')
		return (-1);
	if (check_nbr_str(*buffer) == 0) {
		my_putstr("Error: invalid input (positive number expected)\n");
		return (0);
	}
	return (1);
}

int read_part(int *array, param_t param, param_t *user)
{
	char *buffer;
	int a;

	if ((a = get_line_content(&buffer, "Line: ")) != 1)
		return (a);
	user->size = my_getnbr(buffer);
	user->match = -1;
	a = error_message(array, param, &user->size, &user->match);
	if (a == 0)
		return (0);
	if ((a = get_line_content(&buffer, "Matches: ")) != 1)
		return (a);
	user->match = my_getnbr(buffer);
	a = error_message(array, param, &user->size, &user->match);
	if (a == 0)
		return (0);
	else
		return (1);
}
