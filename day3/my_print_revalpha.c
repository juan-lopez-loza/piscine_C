void my_putchar(char c);

int my_print_revalpha(void)
{
    char c;

    c = 'z';
    while (c >= 'a') {
        my_putchar(c);
        c = c - 1;
    }
    return (0);
}
