void my_putchar(char c);

int my_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    while (a <= '7') {
        b = a + 1;
        while (b <= '8') {
            c = b + 1;
            while (c <= '9') {
                my_putchar(a);
                my_putchar(b);
                my_putchar(c);
                if (a != '7' || b != '8' || c != '9') {
                    my_putchar(',');
                    my_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
    return (0);
}