#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ori_ret;
	int	ft__ret;

printf("case : [\"%%x\",54321]\n");
ori_ret=printf("%x",54321);
printf("\n");
ft__ret=ft_printf("%x",54321);
printf("\n");printf("\n");
printf("case : [\"%%10x\",54321]\n");
ori_ret=printf("%10x",54321);
printf("\n");
ft__ret=ft_printf("%10x",54321);
printf("\n");printf("\n");
printf("case : [\"%%3x\",54321]\n");
ori_ret=printf("%3x",54321);
printf("\n");
ft__ret=ft_printf("%3x",54321);
printf("\n");printf("\n");
printf("case : [\"%%x\",-54321]\n");
ori_ret=printf("%x",-54321);
printf("\n");
ft__ret=ft_printf("%x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%10x\",-54321]\n");
ori_ret=printf("%10x",-54321);
printf("\n");
ft__ret=ft_printf("%10x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%3x\",-54321]\n");
ori_ret=printf("%3x",-54321);
printf("\n");
ft__ret=ft_printf("%3x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%0x\",54321]\n");
ori_ret=printf("%0x",54321);
printf("\n");
ft__ret=ft_printf("%0x",54321);
printf("\n");printf("\n");
printf("case : [\"%%010x\",54321]\n");
ori_ret=printf("%010x",54321);
printf("\n");
ft__ret=ft_printf("%010x",54321);
printf("\n");printf("\n");
printf("case : [\"%%03x\",54321]\n");
ori_ret=printf("%03x",54321);
printf("\n");
ft__ret=ft_printf("%03x",54321);
printf("\n");printf("\n");
printf("case : [\"%%0x\",-54321]\n");
ori_ret=printf("%0x",-54321);
printf("\n");
ft__ret=ft_printf("%0x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%010x\",-54321]\n");
ori_ret=printf("%010x",-54321);
printf("\n");
ft__ret=ft_printf("%010x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%03x\",-54321]\n");
ori_ret=printf("%03x",-54321);
printf("\n");
ft__ret=ft_printf("%03x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-x\",54321]\n");
ori_ret=printf("%-x",54321);
printf("\n");
ft__ret=ft_printf("%-x",54321);
printf("\n");printf("\n");
printf("case : [\"%%-10x\",54321]\n");
ori_ret=printf("%-10x",54321);
printf("\n");
ft__ret=ft_printf("%-10x",54321);
printf("\n");printf("\n");
printf("case : [\"%%-3x\",54321]\n");
ori_ret=printf("%-3x",54321);
printf("\n");
ft__ret=ft_printf("%-3x",54321);
printf("\n");printf("\n");
printf("case : [\"%%-x\",-54321]\n");
ori_ret=printf("%-x",-54321);
printf("\n");
ft__ret=ft_printf("%-x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-10x\",-54321]\n");
ori_ret=printf("%-10x",-54321);
printf("\n");
ft__ret=ft_printf("%-10x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-3x\",-54321]\n");
ori_ret=printf("%-3x",-54321);
printf("\n");
ft__ret=ft_printf("%-3x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%.x\",54321]\n");
ori_ret=printf("%.x",54321);
printf("\n");
ft__ret=ft_printf("%.x",54321);
printf("\n");printf("\n");
printf("case : [\"%%.10x\",54321]\n");
ori_ret=printf("%.10x",54321);
printf("\n");
ft__ret=ft_printf("%.10x",54321);
printf("\n");printf("\n");
printf("case : [\"%%.3x\",54321]\n");
ori_ret=printf("%.3x",54321);
printf("\n");
ft__ret=ft_printf("%.3x",54321);
printf("\n");printf("\n");
printf("case : [\"%%.x\",-54321]\n");
ori_ret=printf("%.x",-54321);
printf("\n");
ft__ret=ft_printf("%.x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%.10x\",-54321]\n");
ori_ret=printf("%.10x",-54321);
printf("\n");
ft__ret=ft_printf("%.10x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%.3x\",-54321]\n");
ori_ret=printf("%.3x",-54321);
printf("\n");
ft__ret=ft_printf("%.3x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%0.10x\",54321]\n");
ori_ret=printf("%0.10x",54321);
printf("\n");
ft__ret=ft_printf("%0.10x",54321);
printf("\n");printf("\n");
printf("case : [\"%%0.3x\",54321]\n");
ori_ret=printf("%0.3x",54321);
printf("\n");
ft__ret=ft_printf("%0.3x",54321);
printf("\n");printf("\n");
printf("case : [\"%%0.x\",-54321]\n");
ori_ret=printf("%0.x",-54321);
printf("\n");
ft__ret=ft_printf("%0.x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%0.10x\",-54321]\n");
ori_ret=printf("%0.10x",-54321);
printf("\n");
ft__ret=ft_printf("%0.10x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%0.3x\",-54321]\n");
ori_ret=printf("%0.3x",-54321);
printf("\n");
ft__ret=ft_printf("%0.3x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-.10x\",54321]\n");
ori_ret=printf("%-.10x",54321);
printf("\n");
ft__ret=ft_printf("%-.10x",54321);
printf("\n");printf("\n");
printf("case : [\"%%-.3x\",54321]\n");
ori_ret=printf("%-.3x",54321);
printf("\n");
ft__ret=ft_printf("%-.3x",54321);
printf("\n");printf("\n");
printf("case : [\"%%-.x\",-54321]\n");
ori_ret=printf("%-.x",-54321);
printf("\n");
ft__ret=ft_printf("%-.x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-.10x\",-54321]\n");
ori_ret=printf("%-.10x",-54321);
printf("\n");
ft__ret=ft_printf("%-.10x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-.3x\",-54321]\n");
ori_ret=printf("%-.3x",-54321);
printf("\n");
ft__ret=ft_printf("%-.3x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%10.3x\",54321]\n");
ori_ret=printf("%10.3x",54321);
printf("\n");
ft__ret=ft_printf("%10.3x",54321);
printf("\n");printf("\n");
printf("case : [\"%%3.10x\",54321]\n");
ori_ret=printf("%3.10x",54321);
printf("\n");
ft__ret=ft_printf("%3.10x",54321);
printf("\n");printf("\n");
printf("case : [\"%%10.3x\",-54321]\n");
ori_ret=printf("%10.3x",-54321);
printf("\n");
ft__ret=ft_printf("%10.3x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%3.10x\",-54321]\n");
ori_ret=printf("%3.10x",-54321);
printf("\n");
ft__ret=ft_printf("%3.10x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%010.3x\",54321]\n");
ori_ret=printf("%010.3x",54321);
printf("\n");
ft__ret=ft_printf("%010.3x",54321);
printf("\n");printf("\n");
printf("case : [\"%%03.10x\",54321]\n");
ori_ret=printf("%03.10x",54321);
printf("\n");
ft__ret=ft_printf("%03.10x",54321);
printf("\n");printf("\n");
printf("case : [\"%%010.3x\",-54321]\n");
ori_ret=printf("%010.3x",-54321);
printf("\n");
ft__ret=ft_printf("%010.3x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%03.10x\",-54321]\n");
ori_ret=printf("%03.10x",-54321);
printf("\n");
ft__ret=ft_printf("%03.10x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-10.3x\",54321]\n");
ori_ret=printf("%-10.3x",54321);
printf("\n");
ft__ret=ft_printf("%-10.3x",54321);
printf("\n");printf("\n");
printf("case : [\"%%-3.10x\",54321]\n");
ori_ret=printf("%-3.10x",54321);
printf("\n");
ft__ret=ft_printf("%-3.10x",54321);
printf("\n");printf("\n");
printf("case : [\"%%-10.3x\",-54321]\n");
ori_ret=printf("%-10.3x",-54321);
printf("\n");
ft__ret=ft_printf("%-10.3x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%-3.10x\",-54321]\n");
ori_ret=printf("%-3.10x",-54321);
printf("\n");
ft__ret=ft_printf("%-3.10x",-54321);
printf("\n");printf("\n");
printf("case : [\"%%*x\",3,54321]\n");
ori_ret=printf("%*x",3,54321);
printf("\n");
ft__ret=ft_printf("%*x",3,54321);
printf("\n");printf("\n");
printf("case : [\"%%*x\",-3,54321]\n");
ori_ret=printf("%*x",-3,54321);
printf("\n");
ft__ret=ft_printf("%*x",-3,54321);
printf("\n");printf("\n");
printf("case : [\"%%*x\",3,-54321]\n");
ori_ret=printf("%*x",3,-54321);
printf("\n");
ft__ret=ft_printf("%*x",3,-54321);
printf("\n");printf("\n");
printf("case : [\"%%*x\",-3,-54321]\n");
ori_ret=printf("%*x",-3,-54321);
printf("\n");
ft__ret=ft_printf("%*x",-3,-54321);
printf("\n");printf("\n");
printf("case : [\"%%*x\",10,54321]\n");
ori_ret=printf("%*x",10,54321);
printf("\n");
ft__ret=ft_printf("%*x",10,54321);
printf("\n");printf("\n");
printf("case : [\"%%*x\",-10,54321]\n");
ori_ret=printf("%*x",-10,54321);
printf("\n");
ft__ret=ft_printf("%*x",-10,54321);
printf("\n");printf("\n");
printf("case : [\"%%*x\",10,-54321]\n");
ori_ret=printf("%*x",10,-54321);
printf("\n");
ft__ret=ft_printf("%*x",10,-54321);
printf("\n");printf("\n");
printf("case : [\"%%*x\",-10,-54321]\n");
ori_ret=printf("%*x",-10,-54321);
printf("\n");
ft__ret=ft_printf("%*x",-10,-54321);
printf("\n");printf("\n");
printf("case : [\"%%*x\",0,54321]\n");
ori_ret=printf("%*x",0,54321);
printf("\n");
ft__ret=ft_printf("%*x",0,54321);
printf("\n");printf("\n");
printf("case : [\"%%*x\",0,-54321]\n");
ori_ret=printf("%*x",0,-54321);
printf("\n");
ft__ret=ft_printf("%*x",0,-54321);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",3,54321]\n");
ori_ret=printf("%.*x",3,54321);
printf("\n");
ft__ret=ft_printf("%.*x",3,54321);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",-3,54321]\n");
ori_ret=printf("%.*x",-3,54321);
printf("\n");
ft__ret=ft_printf("%.*x",-3,54321);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",3,-54321]\n");
ori_ret=printf("%.*x",3,-54321);
printf("\n");
ft__ret=ft_printf("%.*x",3,-54321);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",-3,-54321]\n");
ori_ret=printf("%.*x",-3,-54321);
printf("\n");
ft__ret=ft_printf("%.*x",-3,-54321);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",10,54321]\n");
ori_ret=printf("%.*x",10,54321);
printf("\n");
ft__ret=ft_printf("%.*x",10,54321);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",-10,54321]\n");
ori_ret=printf("%.*x",-10,54321);
printf("\n");
ft__ret=ft_printf("%.*x",-10,54321);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",10,-54321]\n");
ori_ret=printf("%.*x",10,-54321);
printf("\n");
ft__ret=ft_printf("%.*x",10,-54321);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",-10,-54321]\n");
ori_ret=printf("%.*x",-10,-54321);
printf("\n");
ft__ret=ft_printf("%.*x",-10,-54321);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",0,54321]\n");
ori_ret=printf("%.*x",0,54321);
printf("\n");
ft__ret=ft_printf("%.*x",0,54321);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",0,-54321]\n");
ori_ret=printf("%.*x",0,-54321);
printf("\n");
ft__ret=ft_printf("%.*x",0,-54321);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",10,3,54321]\n");
ori_ret=printf("%*.*x",10,3,54321);
printf("\n");
ft__ret=ft_printf("%*.*x",10,3,54321);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",10,-3,54321]\n");
ori_ret=printf("%*.*x",10,-3,54321);
printf("\n");
ft__ret=ft_printf("%*.*x",10,-3,54321);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",10,3,-54321]\n");
ori_ret=printf("%*.*x",10,3,-54321);
printf("\n");
ft__ret=ft_printf("%*.*x",10,3,-54321);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",10,-3,-54321]\n");
ori_ret=printf("%*.*x",10,-3,-54321);
printf("\n");
ft__ret=ft_printf("%*.*x",10,-3,-54321);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",3,10,54321]\n");
ori_ret=printf("%*.*x",3,10,54321);
printf("\n");
ft__ret=ft_printf("%*.*x",3,10,54321);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",3,-10,54321]\n");
ori_ret=printf("%*.*x",3,-10,54321);
printf("\n");
ft__ret=ft_printf("%*.*x",3,-10,54321);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",3,10,-54321]\n");
ori_ret=printf("%*.*x",3,10,-54321);
printf("\n");
ft__ret=ft_printf("%*.*x",3,10,-54321);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",3,-10,-54321]\n");
ori_ret=printf("%*.*x",3,-10,-54321);
printf("\n");
ft__ret=ft_printf("%*.*x",3,-10,-54321);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",0,0,54321]\n");
ori_ret=printf("%*.*x",0,0,54321);
printf("\n");
ft__ret=ft_printf("%*.*x",0,0,54321);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",0,0,-54321]\n");
ori_ret=printf("%*.*x",0,0,-54321);
printf("\n");
ft__ret=ft_printf("%*.*x",0,0,-54321);
printf("\n");printf("\n");
printf("case : [\"%%x\",0]\n");
ori_ret=printf("%x",0);
printf("\n");
ft__ret=ft_printf("%x",0);
printf("\n");printf("\n");
printf("case : [\"%%10x\",0]\n");
ori_ret=printf("%10x",0);
printf("\n");
ft__ret=ft_printf("%10x",0);
printf("\n");printf("\n");
printf("case : [\"%%3x\",0]\n");
ori_ret=printf("%3x",0);
printf("\n");
ft__ret=ft_printf("%3x",0);
printf("\n");printf("\n");
printf("case : [\"%%0x\",0]\n");
ori_ret=printf("%0x",0);
printf("\n");
ft__ret=ft_printf("%0x",0);
printf("\n");printf("\n");
printf("case : [\"%%010x\",0]\n");
ori_ret=printf("%010x",0);
printf("\n");
ft__ret=ft_printf("%010x",0);
printf("\n");printf("\n");
printf("case : [\"%%03x\",0]\n");
ori_ret=printf("%03x",0);
printf("\n");
ft__ret=ft_printf("%03x",0);
printf("\n");printf("\n");
printf("case : [\"%%-x\",0]\n");
ori_ret=printf("%-x",0);
printf("\n");
ft__ret=ft_printf("%-x",0);
printf("\n");printf("\n");
printf("case : [\"%%-10x\",0]\n");
ori_ret=printf("%-10x",0);
printf("\n");
ft__ret=ft_printf("%-10x",0);
printf("\n");printf("\n");
printf("case : [\"%%-3x\",0]\n");
ori_ret=printf("%-3x",0);
printf("\n");
ft__ret=ft_printf("%-3x",0);
printf("\n");printf("\n");
printf("case : [\"%%.x\",0]\n");
ori_ret=printf("%.x",0);
printf("\n");
ft__ret=ft_printf("%.x",0);
printf("\n");printf("\n");
printf("case : [\"%%.10x\",0]\n");
ori_ret=printf("%.10x",0);
printf("\n");
ft__ret=ft_printf("%.10x",0);
printf("\n");printf("\n");
printf("case : [\"%%.3x\",0]\n");
ori_ret=printf("%.3x",0);
printf("\n");
ft__ret=ft_printf("%.3x",0);
printf("\n");printf("\n");
printf("case : [\"%%0.10x\",0]\n");
ori_ret=printf("%0.10x",0);
printf("\n");
ft__ret=ft_printf("%0.10x",0);
printf("\n");printf("\n");
printf("case : [\"%%0.3x\",0]\n");
ori_ret=printf("%0.3x",0);
printf("\n");
ft__ret=ft_printf("%0.3x",0);
printf("\n");printf("\n");
printf("case : [\"%%0.x\",0]\n");
ori_ret=printf("%0.x",0);
printf("\n");
ft__ret=ft_printf("%0.x",0);
printf("\n");printf("\n");
printf("case : [\"%%-.10x\",0]\n");
ori_ret=printf("%-.10x",0);
printf("\n");
ft__ret=ft_printf("%-.10x",0);
printf("\n");printf("\n");
printf("case : [\"%%-.3x\",0]\n");
ori_ret=printf("%-.3x",0);
printf("\n");
ft__ret=ft_printf("%-.3x",0);
printf("\n");printf("\n");
printf("case : [\"%%-.x\",0]\n");
ori_ret=printf("%-.x",0);
printf("\n");
ft__ret=ft_printf("%-.x",0);
printf("\n");printf("\n");
printf("case : [\"%%10.3x\",0]\n");
ori_ret=printf("%10.3x",0);
printf("\n");
ft__ret=ft_printf("%10.3x",0);
printf("\n");printf("\n");
printf("case : [\"%%3.10x\",0]\n");
ori_ret=printf("%3.10x",0);
printf("\n");
ft__ret=ft_printf("%3.10x",0);
printf("\n");printf("\n");
printf("case : [\"%%010.3x\",0]\n");
ori_ret=printf("%010.3x",0);
printf("\n");
ft__ret=ft_printf("%010.3x",0);
printf("\n");printf("\n");
printf("case : [\"%%03.10x\",0]\n");
ori_ret=printf("%03.10x",0);
printf("\n");
ft__ret=ft_printf("%03.10x",0);
printf("\n");printf("\n");
printf("case : [\"%%-10.3x\",0]\n");
ori_ret=printf("%-10.3x",0);
printf("\n");
ft__ret=ft_printf("%-10.3x",0);
printf("\n");printf("\n");
printf("case : [\"%%-3.10x\",0]\n");
ori_ret=printf("%-3.10x",0);
printf("\n");
ft__ret=ft_printf("%-3.10x",0);
printf("\n");printf("\n");
printf("case : [\"%%*x\",3,0]\n");
ori_ret=printf("%*x",3,0);
printf("\n");
ft__ret=ft_printf("%*x",3,0);
printf("\n");printf("\n");
printf("case : [\"%%*x\",-3,0]\n");
ori_ret=printf("%*x",-3,0);
printf("\n");
ft__ret=ft_printf("%*x",-3,0);
printf("\n");printf("\n");
printf("case : [\"%%*x\",10,0]\n");
ori_ret=printf("%*x",10,0);
printf("\n");
ft__ret=ft_printf("%*x",10,0);
printf("\n");printf("\n");
printf("case : [\"%%*x\",-10,0]\n");
ori_ret=printf("%*x",-10,0);
printf("\n");
ft__ret=ft_printf("%*x",-10,0);
printf("\n");printf("\n");
printf("case : [\"%%*x\",0,0]\n");
ori_ret=printf("%*x",0,0);
printf("\n");
ft__ret=ft_printf("%*x",0,0);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",3,0]\n");
ori_ret=printf("%.*x",3,0);
printf("\n");
ft__ret=ft_printf("%.*x",3,0);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",-3,0]\n");
ori_ret=printf("%.*x",-3,0);
printf("\n");
ft__ret=ft_printf("%.*x",-3,0);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",10,0]\n");
ori_ret=printf("%.*x",10,0);
printf("\n");
ft__ret=ft_printf("%.*x",10,0);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",-10,0]\n");
ori_ret=printf("%.*x",-10,0);
printf("\n");
ft__ret=ft_printf("%.*x",-10,0);
printf("\n");printf("\n");
printf("case : [\"%%.*x\",0,0]\n");
ori_ret=printf("%.*x",0,0);
printf("\n");
ft__ret=ft_printf("%.*x",0,0);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",10,3,0]\n");
ori_ret=printf("%*.*x",10,3,0);
printf("\n");
ft__ret=ft_printf("%*.*x",10,3,0);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",10,-3,0]\n");
ori_ret=printf("%*.*x",10,-3,0);
printf("\n");
ft__ret=ft_printf("%*.*x",10,-3,0);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",3,10,0]\n");
ori_ret=printf("%*.*x",3,10,0);
printf("\n");
ft__ret=ft_printf("%*.*x",3,10,0);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",3,-10,0]\n");
ori_ret=printf("%*.*x",3,-10,0);
printf("\n");
ft__ret=ft_printf("%*.*x",3,-10,0);
printf("\n");printf("\n");
printf("case : [\"%%*.*x\",0,0,0]\n");
ori_ret=printf("%*.*x",0,0,0);
printf("\n");
ft__ret=ft_printf("%*.*x",0,0,0);
printf("\n");printf("\n");

return (0);
}