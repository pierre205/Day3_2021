/*
** EPITECH PROJECT, 2021
** Day3_2021
** File description:
** my_print_comb2
*/
void my_putchar(char c);

int my_second(void)
{
    int b = 2;

    for (int a = 1; b != 99; b++) {
        if (a < 10)
            my_putchar('0');
        my_putchar(a);
        if (b < 10)
            my_putchar('0');
        my_putchar( a + 1);
        a = a + 1;
    }
}

int my_print_comb2(void)
{
    int b = 1;
    int c = 0;
    int d = 0;

    for (int a = 0; b != 98; b++) {
        if (b != 100) {
            my_putchar(c);
            my_putchar(d);
        }
        if (b < 10)
            my_putchar(a);
        my_putchar(b);
    }
    my_second();
    return (0);
}