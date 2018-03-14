/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** lol
*/

#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_putstr(char const *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++) {
		my_putchar(str[i]);
	}

	return (0);
}
