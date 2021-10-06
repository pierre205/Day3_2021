/*
** EPITECH PROJECT, 2021
** Day3_2021
** File description:
** my_print_digits
*/

void my_putchar(char c);

int my_print_digits(void)
{
    for (int a = '0'; a <= '9' ; a++) {
        my_putchar(a);
    }
    return (0);
}