#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	char *s = "sso";



	printf("%0-i\n", 8);
	ft_printf("%0-i\n", 8);
puts("=======get crazy====");

	printf("or: %d\n", printf("[%05.%]\n"));
	printf("ft: %d\n", ft_printf("[%05.%]\n"));

	printf("or: %d\n", printf("[%020.0%]\n"));
	printf("ft: %d\n", ft_printf("[%020.0%]\n"));

	printf("or: %d\n", printf("[%20.5%]\n"));
	printf("ft: %d\n", ft_printf("[%20.5%]\n"));


	ft_printf("ft: [%0*.*d]\n", 1, 0, 0);
	printf("or: [%0*.*d]\n", 1, 0, 0);

	ft_printf("ft: [%0*.*d]\n", 2, 0, 1);
	printf("or: [%0*.*d]\n", 2, 0, 1);

	ft_printf("ft: [%0*.*d]\n", 7, 0, 1);
	printf("or: [%0*.*d]\n", 7, 0, 1);

	ft_printf("ft: [%0*.*u]\n", 1, 0, 0);
	printf("or: [%0*.*u]\n", 1, 0, 0);

	printf("%01.0d\n", 0);
	ft_printf("%01.0d\n", 0);

	printf("%020d\n", 123);
	ft_printf("%020d\n", 123);

puts("========");
	printf("%020s\n", "hello");
	ft_printf("%020s\n", "hello");


	printf("%dhello%s %x\n", 1, "node", 12);
	ft_printf("%dhello%s %x\n", 1, "node", 12);

	printf("-->|%-16p|<-- \n", (void*)0x1900);
	ft_printf("-->|%-16p|<-- \n", (void*)0x1900);

	printf("[%-5.p]\n", 0);
	ft_printf("[%-5.p]\n", 0);
	ft_printf("[%-5.2p]\n", 0);
	ft_printf("[%-5.2p]\n", 0);

	printf("[%-3p]\n", 0);
	ft_printf("[%-3p]\n", 0);
	printf("[%p]\n", 0);
	ft_printf("[%p]\n", 0);
puts("=====%x========");
	printf("-->|%-16x|<-- \n", (void*)0x1900);
	ft_printf("-->|%-16x|<-- \n", (void*)0x1900);

	printf("[%-5.x]\n", 0);
	ft_printf("[%-5.x]\n", 0);
	ft_printf("[%-5.2x]\n", 0);
	ft_printf("[%-5.2x]\n", 0);

	printf("[%-3x]\n", 0);
	ft_printf("[%-3x]\n", 0);
	printf("[%x]\n", 0);
	ft_printf("[%x]\n", 0);

	puts("=====%X========");
	printf("-->|%-16X|<-- \n", (void*)0x1900);
	ft_printf("-->|%-16X|<-- \n", (void*)0x1900);

	printf("[%-5.X]\n", 0);
	ft_printf("[%-5.X]\n", 0);
	ft_printf("[%-5.2X]\n", 0);
	ft_printf("[%-5.2X]\n", 0);

	printf("[%-3X]\n", 0);
	ft_printf("[%-3X]\n", 0);
	printf("[%X]\n", 0);
	ft_printf("[%X]\n", 0);

	puts("=====%U========");
	printf("-->|%-16u|<-- \n", (void*)0x1900);
	ft_printf("-->|%-16u|<-- \n", (void*)0x1900);

	printf("[%-5.u]\n", 0);
	ft_printf("[%-5.u]\n", 0);
	ft_printf("[%-5.2u]\n", 0);
	ft_printf("[%-5.2u]\n", 0);

	printf("[%-3u]\n", 0);
	ft_printf("[%-3u]\n", 0);
	printf("[%u]\n", 0);
	ft_printf("[%u]\n", 0);


	puts("============");
	printf("[%-3.5%]\n");
	ft_printf("[%-3.5%]\n");
	puts("============");
	printf("[%-3.5c]\n", 'a');
	ft_printf("[%-3.5c]\n", 'a');





printf("[%8.5d]\n", 0);
ft_printf("[%8.5d]\n", 0);
puts("============");
	printf("this %i number\n", 0);
	ft_printf("this %i number\n", 0);
puts("===========");
	printf("[%.0i]\n", 0);
	ft_printf("[%.0i]\n", 0);
puts("===========");
	printf("this %d number\n", 0);
	ft_printf("this %d number\n", 0);
puts("===========");
	printf("[%3i]\n", 0);
	ft_printf("[%3i]\n", 0);
puts("===========");
	printf("[%-3i]\n", 0);
	ft_printf("[%-3i]\n", 0);
puts("===========");
	printf("[%03i]\n", 0);
	ft_printf("[%03i]\n", 0);
puts("===========");



	printf("[%5.0i]\n", 0);
	ft_printf("[%5.0i]\n", 0);
puts("===========");
	printf("[%5.i]\n", 0);
	ft_printf("[%5.i]\n", 0);
puts("===========");
	printf("[%-5.i]\n", 0);
	ft_printf("[%-5.i]\n", 0);



puts("===========");
	printf("[%i]\n", 0);
	ft_printf("[%i]\n", 0);
puts("===========");
	printf("[%3d]\n", 0);
	ft_printf("[%3d]\n", 0);
puts("===========");
	printf("[%-3d]\n", 0);
	ft_printf("[%-3d]\n", 0);
puts("===========");
	printf("[%03d]\n", 0);
	ft_printf("[%03d]\n", 0);



puts("===========");
	printf("[%3.0d]\n", 0);
	ft_printf("[%3.0d]\n", 0);
puts("===========");
	printf("[%3.d]\n", 0);
	ft_printf("[%3.d]\n", 0);


puts("part1");
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
	printf("[%-10.c]\n", 'a');
	ft_printf("[%-10.c]\n", 'a');
	printf("this %x number\n", 0);
	ft_printf("this %x number\n", 0);
	puts("===============");



	printf("[%3x]\n", 0);
	ft_printf("[%3x]\n", 0);
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



		char *a = "hello world";
		int   b = 2136412312;
		unsigned int c = 4294967295;

printf("%x\n", 12345);
ft_printf("%x\n", 12345);






puts("=======================%i or d=======================");
    printf("ret: %d\n", printf("%7.3i", b));
	printf("ret: %d\n", ft_printf("%7.3i", b));
    puts("");

    printf("ret: %d\n", printf("%-7.3i", b));
    printf("ret: %d\n", ft_printf("%-7.3i", b));

    puts("");

    printf("ret: %d\n", printf("%20.30i", b));
    printf("ret: %d\n", ft_printf("%20.30i", b));

    puts("");

    printf("%-20.30i\n", b);
    ft_printf("%-20.30i\n", b);

    puts("");

    printf("%08.5i\n", -216);
    ft_printf("%08.5i\n", -216);

    puts("");

    printf("%-20.3i\n", b);
    ft_printf("%-20.3i\n", b);
    puts("");

    printf("[%20.13i]\n", b);
    ft_printf("[%20.13i]\n", b);

    puts("");
    printf("[%-20.13i]\n", b);
    ft_printf("[%-20.13i]\n", b);

    puts("");

    printf("%20i\n", b);
    ft_printf("%20i\n", b);

	puts("");


    puts("");

    printf("%020i\n", b);
    ft_printf("%020i\n", b);

	puts("");


puts("=======================%unsigned int=======================");
	printf("%7.3u\n", c);
	ft_printf("%7.3u\n", c);

    puts("");

    printf("%-7.3u\n", c);
    ft_printf("%-7.3u\n", c);

    puts("");

    printf("%20.30u\n", c);
    ft_printf("%20.30u\n", c);

    puts("");

    printf("%-20.30u\n", c);
    ft_printf("%-20.30u\n", c);

    puts("");

    printf("%20.3u\n", c);
    ft_printf("%20.3u\n", c);

    puts("");

    printf("%-20.3u\n", c);
    ft_printf("%-20.3u\n", c);
    puts("");

    printf("[%20.13u]\n", c);
    ft_printf("[%20.13u]\n", c);

    puts("");
    printf("[%-20.13u]\n", c);
    ft_printf("[%-20.13u]\n", c);

    puts("");

    printf("%020u\n", c);
    ft_printf("%020u\n", c);

	puts("");
puts("=======================%string=======================");
    puts("");
    printf("[%s]\n", a);
	ft_printf("[%s]\n", a);
    puts("");
	printf("[%3.7s]\n", a);
	ft_printf("[%3.7s]\n", a);

	puts("");
	printf("[%-3.7s]\n", a);
    ft_printf("[%-3.7s]\n", a);

    puts("");

    printf("[%7.3s]\n", a);
    ft_printf("[%7.3s]\n", a);

	puts("");

	printf("[%-7.3s]\n", a);
    ft_printf("[%-7.3s]\n", a);

    puts("");

    printf("[%20.30s]\n", a);
    ft_printf("[%20.30s]\n", a);

	puts("");

	printf("[%-20.30s]\n", a);
    ft_printf("[%-20.30s]\n", a);

    puts("");

    printf("[%20.3s]\n", a);
    ft_printf("[%20.3s]\n", a);

	puts("");

	printf("[%-20.3s]\n", a);
    ft_printf("[%-20.3s]\n", a);

    puts("");

    printf("[%2.13s]\n", a);
    ft_printf("[%2.13s]\n", a);

puts("");

    printf("[%-20.13s]\n", a);
    ft_printf("[%-20.13s]\n", a);

puts("");

    printf("[%10.s]\n", a);
    ft_printf("[%10.s]\n", a);
puts("");

    printf("[%.0s]\n", "hello");
    ft_printf("[%.0s]\n", "hello");

puts("");

    printf("[hello%s]\n", NULL);
    ft_printf("[hello%s]\n", NULL);

   puts("");

    printf("[%s]\n", NULL);
    ft_printf("[%s]\n", NULL);

   puts("");

    printf("[%32s]\n", NULL);
    ft_printf("[%32s]\n", NULL);

   puts("");

    printf("[%-2s]\n", NULL);
    ft_printf("[%-2s]\n", NULL);

   puts("");

    printf("[%-2s]\n", NULL);
    ft_printf("[%-2s]\n", NULL);

      puts("");

    printf("[%.s]\n", "NULL");
    ft_printf("[%.s]\n", "NULL");

      puts("");

    printf("[%.0s]\n", NULL);
    ft_printf("[%.0s]\n", NULL);


puts("=======================%char=======================");
	printf("[%3c]\n", a[0]);
	ft_printf("[%3c]\n", a[0]);

	puts("");
	printf("[%-3c]\n", a[0]);
    ft_printf("[%-3c]\n", a[0]);

    puts("");

    printf("[%7c]\n", a[0]);
    ft_printf("[%7c]\n",a[0]);

	puts("");

    	printf("[%3c]\n", a[0]);
	ft_printf("[%3c]\n", a[0]);

	puts("");
	printf("[%-3c]\n", a[0]);
    ft_printf("[%-3c]\n", a[0]);

    puts("");

    printf("[%7c]\n", a[0]);
    ft_printf("[%7c]\n",a[0]);

	puts("");

	printf("[%-7c]\n", a[0]);
    ft_printf("[%-7c]\n", a[0]);

    puts("");

    printf("[%20c]\n", a[0]);
    ft_printf("[%20c]\n", a[0]);

	puts("");

	printf("[%-20c]\n", a[0]);
    ft_printf("[%-20c]\n", a[0]);

    puts("");

    printf("[%20c]\n", a[0]);
    ft_printf("[%20c]\n", a[0]);

	puts("");

	printf("[%-20c]\n", a[0]);
    ft_printf("[%-20c]\n", a[0]);

    puts("");

    printf("[%2c]\n", a[0]);
    ft_printf("[%2c]\n", a[0]);

puts("");

    printf("[%-20c]\n", a[0]);
    ft_printf("[%-20c]\n", a[0]);

puts("");

    printf("[%20c]\n", a[0]);
    ft_printf("[%20c]\n", a[0]);



puts("=======================%small hex=======================");
    printf("[%x]\n", b);
	ft_printf("[%x]\n", b);

    puts("");
    printf("[%7.3x]\n", b);
	ft_printf("[%7.3x]\n", b);

    puts("");

    printf("[%-7.3x]\n", b);
    ft_printf("[%-7.3x]\n", b);

    puts("");

    printf("[%20.30x]\n", b);
    ft_printf("[%20.30x]\n", b);

    puts("");

    printf("[%-20.30x]\n", b);
    ft_printf("[%-20.30x]\n", b);

    puts("");

    printf("[%20.3x]\n", b);
    ft_printf("[%20.3x]\n", b);

    puts("");

    printf("[%-20.3x]\n", b);
    ft_printf("[%-20.3x]\n", b);
    puts("");

    printf("[%20.13x]\n", b);
    ft_printf("[%20.13x]\n", b);

    puts("");
    printf("[%-20.13x]\n", b);
    ft_printf("[%-20.13x]\n", b);

    puts("");

    printf("[%020x]\n", b);
    ft_printf("[%020x]\n", b);

	puts("");
puts("=======================%large hex=======================");
    printf("[%x]\n", b);
    ft_printf("[%x]\n", b);
    puts("");

    printf("[%7.3X]\n", b);
	ft_printf("[%7.3X]\n", b);

    puts("");

    printf("[%-7.3X]\n", b);
    ft_printf("[%-7.3X]\n", b);

    puts("");

    printf("[%20.30X]\n", b);
    ft_printf("[%20.30X]\n", b);

    puts("");

    printf("[%-20.30X]\n", b);
    ft_printf("[%-20.30X]\n", b);

    puts("");

    printf("[%20.3X]\n", b);
    ft_printf("[%20.3X]\n", b);

    puts("");

    printf("[%-20.3X]\n", b);
    ft_printf("[%-20.3X]\n", b);
    puts("");

    printf("[%20.13X]\n", b);
    ft_printf("[%20.13X]\n", b);

    puts("");
    printf("[%-20.13i]\n", b);
    ft_printf("[%-20.13i]\n", b);

    puts("");

    printf("[%020X]\n", b);
    ft_printf("[%020X]\n", b);

	puts("");


puts("=======================%pointer=======================");


    printf("[%p]\n", &b);
    ft_printf("[%p]\n", &b);
    printf("[%p]\n", &a);
    ft_printf("[%p]\n", &a);
    printf("[%p]\n", &c);
    ft_printf("[%p]\n", &c);
puts("=======================%%=======================");

	printf("ret:%d\n", printf("[%-7%]\n"));
    printf("ret:%d\n", ft_printf("[%-7%]\n"));

    puts("");

    printf("ret:%d\n", printf("[%20%]\n"));
    printf("ret:%d\n", ft_printf("[%20%]\n"));

	puts("");

	printf("ret:%d\n", printf("[%-20%]\n"));
    printf("ret:%d\n", ft_printf("[%-20%]\n"));

    puts("");

    printf("ret:%d\n", printf("[%20%]\n"));
    printf("ret:%d\n", ft_printf("[%20%]\n"));

	puts("");

	printf("ret:%d\n", printf("[%-20%]\n"));
    printf("ret:%d\n", ft_printf("[%-20%]\n"));

    puts("");

    printf("ret:%d\n", printf("[%2%]\n"));
    printf("ret:%d\n", ft_printf("[%2%]\n"));

puts("");

    printf("ret:%d\n", printf("[%-5%]\n"));
    printf("ret:%d\n", ft_printf("[%-5%]\n"));

puts("");

    printf("ret:%d\n", printf("[%-2%]\n"));
    printf("ret:%d\n", ft_printf("[%-2%]\n"));

    printf("ret:%d\n", printf("[%05%]\n"));
    printf("ret:%d\n", printf("[%05%]\n"));

puts("");
    printf("ret:%d\n", printf("[%-05%]\n"));
    printf("ret:%d\n", ft_printf("[%-05%]\n"));





    printf("%d\n", 0);
    ft_printf("%d\n", 0);


    printf("%c\n", 0);
    ft_printf("%c\n", 0);

    printf("%s\n", 0);
    ft_printf("%s\n", 0);

    printf("%u\n", 0);
    ft_printf("%u\n", 0);

    printf("%x\n", 0);
    ft_printf("%x\n", 0);

    printf("%X\n", 0);
    ft_printf("%X\n", 0);

    printf("%p\n", 0);
    ft_printf("%p\n", 0);

    printf("%%\n");
    ft_printf("%%\n");




}