/*
** EPITECH PROJECT, 2021
** Day3_2021
** File description:
** my_print_revalpha
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    for (int a = 122; a >= 97; a--)
        my_putchar(a);
    return(0);
}