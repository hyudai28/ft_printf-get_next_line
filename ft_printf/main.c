#include "ft_printf.h"

int		main(void)
{
		char *a = "hello world";
		int   b = 21364;
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