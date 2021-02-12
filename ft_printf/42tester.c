#include "ft_printf.c"

int		main(void)
{
	int a = 10000;


	printf("%x\n", a);
	ft_printf("%x\n", a);
	
	printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X, %s\n", a, a, a, a, a, "hello", 'v', a, a, a,a, "fin");
	ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X, %s\n", a, a, a, a, a, "hello", 'v', a, a, a,a, "fin");
}