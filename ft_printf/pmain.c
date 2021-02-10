#include "ft_printf.h"

int		main(void)
{

	printf("[%5p]\n", NULL);
	ft_printf("[%5p]\n", NULL);
	puts("");
	// printf("[%3.5p]\n", NULL);
	// ft_printf("[%3.5p]\n", NULL);
puts("");
	printf("-->|%-16p|<-- \n", (void*)0x1900);
	ft_printf("-->|%-16p|<-- \n", (void*)0x1900);

	printf("[%-5.p]\n", NULL);
	ft_printf("[%-5.p]\n", NULL);
	// printf("[%-5.2p]\n", NULL);
	// ft_printf("[%-5.2p]\n", NULL);

	printf("[%-3p]\n", NULL);
	ft_printf("[%-3p]\n", NULL);
	printf("[%p]\n", NULL);
	ft_printf("[%p]\n", NULL);
printf("[%.p]\n", NULL);
	ft_printf("[%.p]\n", NULL);
puts("==========");
	printf("%p\n", NULL);
	ft_printf("%p\n", NULL);


char *s = "sso";
		char *a = "hello world";
		int   b = 2136412312;
		unsigned int c = 4294967295;

	printf("%.p\n", s);
	ft_printf("%.p\n", s);

	printf("%p\n", s);
	ft_printf("%p\n", s);

	printf("%.p\n", (void *)100);
	ft_printf("%.p\n", (void *)100);

	printf("%p\n", (void *)100);
	ft_printf("%p\n", (void *)100);



    printf("[%p]\n", &b);
    ft_printf("[%p]\n", &b);
    printf("[%p]\n", &a);
    ft_printf("[%p]\n", &a);
    printf("[%p]\n", &c);
    ft_printf("[%p]\n", &c);

}