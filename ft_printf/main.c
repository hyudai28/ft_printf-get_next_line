#include "ft_printf.h"


int		main(void)
{

	printf("[%.20s]\n", "hello");
	ft_printf("[%.20s]\n", "hello");
	printf("[%-05%]\n");
	ft_printf("[%-05%]\n");
puts("");
/*
	printf("[%-09s]\n", "hi low");
	ft_printf("[%-09s]\n", "hi low");
puts("");
*/

	printf("[%5x]\n", 0);
	ft_printf("[%5x]\n", 0);

	printf("[%5.0x]\n", 0);
	ft_printf("[%5.0x]\n", 0);
puts("");

	printf("[%-5.0x]\n", 0);
	ft_printf("[%-5.0x]\n", 0);
puts("");


	printf("[%.0x]\n", 0);
	ft_printf("[%.0x]\n", 0);
puts("");



	printf("[%2.9x]\n", 1234);
	ft_printf("[%2.9x]\n", 1234);
puts("");
/*

	printf("[%.5p]\n", 0);
	ft_printf("[%.5p]\n", 0);
puts("");


	printf("[%5x]\n", 0);
	ft_printf("[%5x]\n", 0);
	*/
puts("");


	printf("[%*s]\n", -14, "abc");
	ft_printf("[%*s]\n", -14, "abc");
puts("");
	printf("[%*i]\n", -14, 94827);
	ft_printf("[%*i]\n", -14, 94827);

}