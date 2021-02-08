#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	char *s = "sso";

/*
	printf("%.0i\n", 0);
	ft_printf("%.0i\n", 0);
	puts("===============");

	printf("%.i\n", 0);
	ft_printf("%.i\n", 0);
	puts("=============");
	printf("%.0u\n", 0);
	ft_printf("%.0u\n", 0);
	puts("===============");

	printf("%.u\n", 0);
	ft_printf("%.u\n", 0);
	puts("===============");

	printf("%5.0u\n", 0);
	ft_printf("%5.0u\n", 0);
	puts("===============");

	printf("%5.u\n", 0);
	ft_printf("%5.u\n", 0);
	puts("===============");

	printf("%-5.0u\n", 0);
	ft_printf("%-5.0u\n", 0);
	puts("===============");

	printf("%-5.u\n", 0);
	ft_printf("%-5.u\n", 0);
	puts("===============");

	printf("%5.0i\n", 0);
	ft_printf("%.0i\n", 0);
	puts("===============");

	printf("%5.i\n", 0);
	ft_printf("%5.i\n", 0);
	puts("===============");

	printf("%-5.i\n", 0);
	ft_printf("%-5.i\n", 0);
	puts("===============");





	printf("%.0u\n", 0);
	ft_printf("%.0u\n", 0);
	puts("===============");

	printf("%.u\n", 0);
	ft_printf("%.u\n", 0);
	puts("===============");

	printf("%5.0u\n", 0);
	ft_printf("%5.0u\n", 0);
	puts("===============");

	printf("%5.u\n", 0);
	ft_printf("%5.u\n", 0);
	puts("===============");

	printf("%-5.0i\n", 0);
	ft_printf("%-5.0i\n", 0);
	puts("===============");
	printf("%-5.u\n", 0);
	ft_printf("%-5.u\n", 0);
	puts("===============");
*/
	printf("[%-10.c]\n", 'a');
	ft_printf("[%-10.c]\n", 'a');
	printf("this %x number\n", 0);
	ft_printf("this %x number\n", 0);
	puts("===============");



	printf("%3x\n", 0);
	ft_printf("%3x\n", 0);
	puts("===============");

	printf("%-3x\n", 0);
	ft_printf("%-3x\n", 0);
	puts("===============");


	printf("[%.p]\n", NULL);
	ft_printf("[%.p]\n", NULL);
puts("==========");
	printf("%p\n", NULL);
	ft_printf("%p\n", NULL);

	printf("%.p\n", s);
	ft_printf("%.p\n", s);

	printf("%p\n", s);
	ft_printf("%p\n", s);

	printf("%.p\n", (void *)100);
	ft_printf("%.p\n", (void *)100);

	printf("%p\n", (void *)100);
	ft_printf("%p\n", (void *)100);
}