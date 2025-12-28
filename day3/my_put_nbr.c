void my_putchar(char c);

int my_put_nbr(int nb){
    if (nb < 0) {
        my_putchar('-');
		nb = -nb;
    }
	if (nb >= 10){
		my_put_nbr(nb / 10);
	}
	my_putchar((nb % 10) + '0');
    return (0);
}


//#include <unistd.h>

//void my_putchar(char c) {
//	write(1, &c, 1);
//}
//int main(void)
//{
//	my_put_nbr(-2147483648);
//{