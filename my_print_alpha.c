/*
** EPITECH PROJECT, 2021
** Day3_2021
** File description:
** my_print_alpha
*/

void my_putchar (char c);

int my_print_alpha (void)
{
    for (int a = 97; a <= 122; a++)
        my_putchar(a);
    return (0);
}