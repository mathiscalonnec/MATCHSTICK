/*
** EPITECH PROJECT, 2018
** print_sentence.c
** File description:
** lol
*/

#include <unistd.h>
#include "my.h"

void print_sentence(int a, int match, int line)
{
	if (a == 0)
		my_putstr("Player ");
	else if (a == 1)
		my_putstr("AI ");
	my_putstr("removed ");
	my_put_nbr(match);
	my_putstr(" match(es) from line ");
	my_put_nbr(line);
	my_putstr("\n");
}
