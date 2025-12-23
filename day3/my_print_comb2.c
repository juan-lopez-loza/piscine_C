void my_putchar(char c);

int my_print_comb(void)
{
    int n1 = 0;
    int n2;

    while (n1 <= 98){
        n2 = n1 + 1;
        while (n2 <= 99){
            if (n1 >= 1) {
                n2 = 99;
            }
            my_putchar((n1 / 10) + '0');
            my_putchar((n1 % 10) + '0');
            my_putchar(' ');
            my_putchar((n2 / 10) + '0');
            my_putchar((n2 % 10) + '0');
            if (n1 != 98 || n2 != 99){
                my_putchar(',');
                my_putchar(' ');
            }
            n2++;
        }
        n1++;
    }
    return (0);
}