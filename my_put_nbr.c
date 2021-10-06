/*
** EPITECH PROJECT, 2021
** Day3_2021
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int mod;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb < 10) {
        my_putchar(48 + nb);
    }
    else if (nb >= 10) {
        mod = (nb % 10);
        nb = (nb - mod) / 10;
        my_put_nbr(nb);
        my_putchar(48 + mod);
    }
    return(0);
}