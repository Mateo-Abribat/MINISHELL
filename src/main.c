/*
** EPITECH PROJECT, 2021
** Minishell2
** File description:
** main.c
*/

#include <stdlib.h>
#include "minishell.h"

int main(int ac, char **av, char **env)
{
    (void)av;
    if (ac != 1 || env[0] == NULL)
        return 84;
    if (minishell(env) == -1)
        return (84);
    return (0);
}