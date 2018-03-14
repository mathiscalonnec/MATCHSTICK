/*
** EPITECH PROJECT, 2018
** read_line.c
** File description:
** lol
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *read_line(void)
{
	char res[1024] = {0};
	char buffer[1] = {0};
	char *line;
	int size = 0;
	int i = 0;

	while ((size = read(STDIN_FILENO, buffer, 1)) && buffer[0] != '\n') {
		res[i] = buffer[0];
		if (size == 0 && res[0] == '\0')
			break;
		i++;
	}
	res[i] = '\0';
	i = 0;
	line = malloc(sizeof(char) * (my_strlen(res) + 1));
	while (res[i] != '\0') {
		line[i] = res[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}
