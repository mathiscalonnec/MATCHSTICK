/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** lol
*/

#define IA_LOST  "I lost... snif... but I'll get you next time!!\n"

typedef struct param
{
	int size;
	int match;
}param_t;

typedef struct game
{
	int *array;
	int end_game;
	int read_p;
}game_t;

void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr(int nb);
int my_getnbr(char *str);
int my_strlen(char const *str);

int char_to_int(int ac, char **av,int *line, int *take);
int read_part(int *array, param_t param, param_t *user);
int check_nbr_str(char *str);
int error_message(int *array, param_t param, int *lines, int *matches);
int *init_tab(int hauteur);
void print_array(int *array, int nbr_line);
void print_sentence(int a, int match, int line);
void star_line(int len);
void star(void);
void space(int a);
void n_pipe(int a);
int  matchstick(int *array, int line, param_t param, int matches);

void ia_random(int *array, param_t param, int *line, int *matches);
int  last_turn(int *array, int nbr_line);
int  random_line(int *array, int nbr_line);
int  random_match(int *array, int match, int *line);
char *read_line(void);
int main_loop(param_t param, param_t user, game_t game);
