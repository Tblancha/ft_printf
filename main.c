/* int	main(int ac, char **av) */
/* { */
/* 	int	*list; */
/* 	t_token token_utils; */
    
/* 	if (ac != 2) */
/* 		return (0); */
/* 	if (!(list = (int *)malloc(sizeof(int) * 4096))) */
/* 		return (-1); */
/* 	token_utils.list = recognize_tokens(/\*str_splitted,*\/&av[1], &*list); */
/* 	token_utils.index = 0; */
/* 	/\*	convert_tokens(str_splitted, list); *\/ */
/* 	ft_putstr_fd("====================================================\n", 1); */
/* 	ft_putstr_fd("================= STATE_MACHINA OUTPUT =============\n", 1); */
/* 	ft_putstr_fd("====================================================\n", 1); */
/* 	print_list(list); */
/* 	ft_putstr_fd("====================================================\n", 1); */
/*     ft_putstr_fd("=============== STATE MACHINA END OUTPUT ===========\n", 1); */
/* 	ft_putstr_fd("====================================================\n", 1); */
/* 	ft_putstr_fd("====================================================\n", 1); */
/* 	ft_putstr_fd("=============== DISPATCHER SYSTEM OUTPUT ===========\n", 1); */
/* 	ft_putstr_fd("====================================================\n", 1); */
/* 	dispatcher(token_utils., ) */
/* 	ft_putchar_fd('\n', 1); */
/* 	free(list); */
/* 	return (0); */
/* } */

#include <assert.h>
#include <float.h>
#include <stdio.h>
#include "state_machina.h"

int main()
{
	long long int yo = 34567890123456789;
	unsigned int lala = 130000000;
	char	*s = "LILALILALOUM";
//	ft_printf("%f\n", (float)1.3);
//	printf("%f\n", (float)1.3);
/*	ft_putnbr(ft_printf("Yo! %lld, %.4i!%.d", yo, 33, 0));
	ft_putnbr(printf("Yo! %lld, %.4i!%.d", yo, 33, 0));
	ft_putnbr(ft_printf("\n%6.4d", -33));
	ft_putnbr(ft_printf("\n%6.4d", 33));
	ft_putnbr(ft_printf("\n% .4d", 33));
	printf("\n\n\n\n");

*/
int a;
int b;
	
a = ft_printf("%10s|", "");
printf("\n");
b = printf("%10s|", "");
printf("\nme   = %d\nreal = %d\n", a, b);
//	ft_printf("%-100y\n");
/*	ft_printf("%-100y\n");
	
	ft_printf("%06.d\n", 36);
	printf("%06.d\n", 36);
	ft_printf("%06.d\n", 123456789);
	printf("%06.d\n", 123456789);
	ft_printf("%#20.15X\n", lala);
	printf("%#20.15X\n", lala);
	ft_printf("%#20.15o\n", lala);
	printf("%#20.15o\n", lala);
	ft_printf("%#.15o\n", lala);
	printf("%#.15o\n", lala);
	ft_printf("%#20o\n", lala);
	printf("%#20o\n", lala);
	ft_printf("%o\n", lala);
	printf("%o\n", lala);
	ft_printf("%#o\n", 0);
	printf("%#o\n", 0);
	ft_printf("%#X\n", 1);
	printf("%#X\n", 1);
	ft_printf("%#.0o\n", 0);
	printf("%#.0o\n", 0);
	ft_printf("%#.0X\n", 0);
	printf("%#.0X\n", 0);
	ft_printf("%#.4X\n", 0);
	printf("%#.4X\n", 0);
	ft_printf("%cyo\n", '/');
	printf("%cyo\n", '/');
	ft_printf("%10cyo\n", '/');
	printf("%10cyo\n", '/');
	ft_printf("%-10cyo\n", '/');
	printf("%-10cyo\n", '/');
	ft_printf("%.3cyo\n", '/');
	printf("%.3cyo\n", '/');

	// sssssssssssssssssssssssssssssssssssssssssssss
	printf("________________________ %%s ________________________\n\n");
	ft_printf("%s yo\n", s);
	printf("%s yo\n", s);
	ft_printf("%.30s yo\n", s);
	printf("%.30s yo\n", s);
	ft_printf("%-.30s yo\n", s);
	printf("%-.30s yo\n", s);
	ft_printf("%46.30s yo\n", s);
	printf("%46.30s yo\n", s);
	ft_printf("%-46.30s yo\n", s);
	printf("%-46.30s yo\n", s);
	ft_printf("%4.3s yo\n", s);
	printf("%4.3s yo\n", s);
	ft_printf("%.3s yo\n", s);
	printf("%.3s yo\n", s);

	// ppppppppppppppppppppppppppppppppppppppppppppp
	printf("_______________________ %%p __________________________\n\n");
	ft_printf("%p yo\n", s);
	printf("%p yo\n", s);
	ft_printf("%.30p yo\n", s);
	printf("%.30p yo\n", s);
	ft_printf("%-.30p yo\n", s);
	printf("%-.30p yo\n", s);
	ft_printf("%46.30p yo\n", s);
	printf("%46.30p yo\n", s);
	ft_printf("%-46.30p yo\n", s);
	printf("%-46.30p yo\n", s);
	ft_printf("%4.3p yo\n", s);
	printf("%4.3p yo\n", s);
	ft_printf("%.3p yo\n", s);
	printf("%.3p yo\n", s);
	ft_printf("%p\n", 0);
	printf("%p\n", 0);

	// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	printf("_______________________ %%x __________________________\n\n");
	ft_printf("#x = 1 >\t%#x\n", 1);
	printf("#x = 1 >\t%#x\n", 1);
	ft_printf("#x = 0 >\t%#x\n", 0);
	printf("#x = 0 >\t%#x\n", 0);

	// ppppppppppppppppppppppppppppppppppppppppppppp
	printf("_______________________ %%p __________________________\n\n");
	ft_printf("%.10p\n", 0);
	printf("%.10p\n", 0);
	ft_printf("%0.10p\n", 0);
	printf("%0.10p\n", 0);
	ft_printf("\n\nTEs#T : %p", NULL - 1);
	printf("\n\nTEs#T : %p", NULL - 1);
	printf("\n\n\n");
	ft_printf("LA: %hhd\n", 0);
	printf("LA: %hhd\n", 0);
	int me = 0;
	int rl = 0;
	////////////////////////////
	printf("-------------------------------PART1-----------------------------\n\n");
	//////////////////////////// ---------------------------------- d ----------------------------------------
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-10d % d %+d %010d %hhd]\n", 3, 3, 3, 1, 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%-10d % d %+d %010d %hhd]\n", 3, 3, 3, 1, 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%llda]\n", 18446744065119617025LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%llda]\n", 18446744065119617025LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%10.8lld]\n", 100LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%10.8lld]\n", 100LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33m8888>\t\033[0m[%#25.22llda]\n", -1LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%#25.22llda]\n", -1LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n1\033[0;33mYOUR>\t\033[0m[%#-+ 08.5llda]\n", 100LL);
	rl = printf("02\033[0;31mREAL>\t\033[0m[%#-+ 08.5llda]\n", 100LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[% .40d]\n", 1);
	rl = printf("\033[0;31mREAL>\t\033[0m[% .40d]\n", 1);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[% 10.40d]\n", 10);
	rl = printf("\033[0;31mREAL>\t\033[0m[% 10.40d]\n", 10);
	printf ("[%d] [%d]\n", me, rl);
	///////////////////////////////////// 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[% 10.15d]\n", -10);
	rl = printf("\033[0;31mREAL>\t\033[0m[% 10.15d]\n", -10);
	printf ("[%d] [%d]\n", me, rl);

	// ------------------------------------------TOKEN TYPE NONE (j) --------------------------------------
//	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[0%+010.jd]\n", 10);
//	rl = printf("\033[0;31mREAL>\t\033[0m[0%+010.jd]\n", 10);
//	printf ("[%d] [%d]\n", me, rl);
	// ------------------------------------------- d ------------------------------------------------------
	me = ft_printf("\nii\033[0;33mYOUR>\t\033[0m[%10.0d]\n", -10);
	rl = printf("\033[0;31mREAL>\t\033[0m[%10.0d]\n", -10);
	//
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%+010.d]\n", -10);
	rl = printf("\033[0;31mREAL>\t\033[0m[%+010.d]\n", -10);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[1%10.0d]\n", 10);
	rl = printf("\033[0;31mREAL>\t\033[0m[1%10.0d]\n", 10);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%+ 010.d]\n", 10);
	rl = printf("\033[0;31mREAL>\t\033[0m[%+ 010.d]\n", 10);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[% 10.0d]\n", -10);
	rl = printf("\033[0;31mREAL>\t\033[0m[% 10.0d]\n", -10);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%+ 010.d]\n", -10);
	rl = printf("\033[0;31mREAL>\t\033[0m[%+ 010.d]\n", -10);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[% 10.0d]\n", 10);
	rl = printf("\033[0;31mREAL>\t\033[0m[% 10.0d]\n", 10);
	printf ("[%d] [%d]\n", me, rl);

	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[% 10.40d]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[% 10.40d]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[% 10.40d]\n", -0);
	rl = printf("\033[0;31mREAL>\t\033[0m[% 10.40d]\n", -0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%+010.d]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%+010.d]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%10.0d]\n", -0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%10.0d]\n", -0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%+010.d]\n", -0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%+010.d]\n", -0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%10.0d]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%10.0d]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%+ 010.d]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%+ 010.d]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	////////////////////////////
	printf("\n-------------------------------PART2-----------------------------\n\n");
	////////////////////////////
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[% 10.0d]\n", -0);
	rl = printf("\033[0;31mREAL>\t\033[0m[% 10.0d]\n", -0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%+ 010.d]\n", -0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%+ 010.d]\n", -0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[% 10.0d]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[% 10.0d]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%4.5d]\n", 42);
	rl = printf("\033[0;31mREAL>\t\033[0m[%4.5d]\n", 42);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.4d]\n", 42);
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.4d]\n", 42);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%4.5d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%4.5d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.4d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.4d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%4.5d]\n", -42U);
	rl = printf("\033[0;31mREAL>\t\033[0m[%4.5d]\n", -42U);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.4d]\n", -42U);
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.4d]\n", -42U);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.4d]\n", 42U);
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.4d]\n", 42U);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%54d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%54d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%54.d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%54.d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[% 0-54.2d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[% 0-54.2d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[5% 054d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[5% 054d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%- 0.2d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%- 0.2d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%2.2d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%2.2d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%2.3d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%2.3d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%2.1d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%2.1d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.1d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.1d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.2d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.2d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.3d]\n", 42LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.3d]\n", 42LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.3d]\n", 4242LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.3d]\n", 4242LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.3d]\n", 424LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.3d]\n", 424LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.3d]\n", 424LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.3d]\n", 424LL);
	printf ("[%d] [%d]\n", me, rl);
	////////////////////////////
	printf("-------------------------------PART3-----------------------------\n\n");
	////////////////////////////
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-+5.3d]\n", 424LL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%-+5.3d]\n", 424LL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%d %d %d %d %d %d %d %d]\n", 0, 1, 9, 10, 11, 9999, 10000, 100001);
	rl = printf("\033[0;31mREAL>\t\033[0m[%d %d %d %d %d %d %d %d]\n", 0, 1, 9, 10, 11, 9999, 10000, 100001);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%d]\n", -258733);
	rl = printf("\033[0;31mREAL>\t\033[0m[%d]\n", -258733);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%d hello %d]\n", 2147483647, -2147483648);
	rl = printf("\033[0;31mREAL>\t\033[0m[%d hello %d]\n", 2147483647, -2147483648);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[-%.4d-%.4d-%.d-%.0d-]\n", 7, 12345, 1, 9);
	rl = printf("\033[0;31mREAL>\t\033[0m[-%.4d-%.4d-%.d-%.0d-]\n", 7, 12345, 1, 9);
	printf ("[%d] [%d]\n", me, rl);
//LUI
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%d %hd %d]\n", 123456, 123456, 123456);
	rl = printf("\033[0;31mREAL>\t\033[0m[%d %hd %d]\n", 123456, 123456, 123456);
//LUI
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%d %ld %d]\n", 123456, 123456, 123456);
	rl = printf("\033[0;31mREAL>\t\033[0m[%d %ld %d]\n", 123456, 123456, 123456);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n8888\033[0;33mYOUR>\t\033[0m[-%d-%.0d-%.8d-%8.0d-%8.8d-]\n", 0, 0, 0, 0, 0);
	rl = printf("88888\033[0;31mREAL>\t\033[0m[-%d-%.0d-%.8d-%8.0d-%8.8d-]\n", 0, 0, 0, 0, 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%d %d %+d %+d % d % d %+ d %+ d % +d % +d]\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7);
	rl = printf("\033[0;31mREAL>\t\033[0m[%d %d %+d %+d % d % d %+ d %+ d % +d % +d]\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['%-d']\n", 5);
	rl = printf("\033[0;31mREAL>\t\033[0m['%-d']\n", 5);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['%-+d']\n", 5);
	rl = printf("\033[0;31mREAL>\t\033[0m['%-+d']\n", 5);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['%+-d']\n", 5);
	rl = printf("\033[0;31mREAL>\t\033[0m['%+-d']\n", 5);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['%+d']\n", -5);
	rl = printf("\033[0;31mREAL>\t\033[0m['%+d']\n", -5);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['% d']\n", -5);
	rl = printf("\033[0;31mREAL>\t\033[0m['% d']\n", -5);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['% d']\n", 5);
	rl = printf("\033[0;31mREAL>\t\033[0m['% d']\n", 5);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['% .0d']\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m['% .0d']\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['% +d']\n", 5);
	rl = printf("\033[0;31mREAL>\t\033[0m['% +d']\n", 5);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['%03d']\n", 5);
	rl = printf("\033[0;31mREAL>\t\033[0m['%03d']\n", 5);
	printf ("[%d] [%d]\n", me, rl);
	////////////////
	ft_printf("\n\033[0;33mYOUR>\t\033[0m['\%-03d']\n", -5);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['%-03d']\n", -5);
	rl = printf("\033[0;31mREAL>\t\033[0m['%-03d']\n", -5);
	///////////////
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['%03d']\n", -5);
	rl = printf("\033[0;31mREAL>\t\033[0m['%03d']\n", -5);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['%-+0003d']\n", -5);
	rl = printf("\033[0;31mREAL>\t\033[0m['%-+0003d']\n", -5);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m['%0+ 3d']\n", -5U);
	rl = printf("\033[0;31mREAL>\t\033[0m['%0+ 3d']\n", -5U);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n1\033[0;33mYOUR>\t\033[0m[-%.4d-%.4d-%.d-%.0d-]\n", 7, 12345, 1, 9);
	rl = printf("02\033[0;31mREAL>\t\033[0m[-%.4d-%.4d-%.d-%.0d-]\n", 7, 12345, 1, 9);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%d %d %d]\n", 123456, 123456, 123456);
	rl = printf("\033[0;31mREAL>\t\033[0m[%d %d %jd]\n", 123456, 123456, 123456);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%d %d %d]\n", 123456, 123456, 123456);
	rl = printf("\033[0;31mREAL>\t\033[0m[%d %d %d]\n", 123456, 123456, 123456);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[-%d-%.0d-%.8d-%8.0d-%8.8d-]\n", 0, 0, 0, 0, 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[-%d-%.0d-%.8d-%8.0d-%8.8d-]\n", 0, 0, 0, 0, 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%d %d %+d %+d % d % d %+ d %+ d % +d % +d]\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7);
	rl = printf("\033[0;31mREAL>\t\033[0m[%d %d %+d %+d % d % d %+ d %+ d % +d % +d]\n", 7, -7, 7, -7, 7, -7, 7, -7, 7, -7);
	printf ("[%d] [%d]\n", me, rl);
	////////////////////////////
	printf("-------------------------------PART4-----------------------------\n\n");
	////////////////////////////
//LUI
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%s]\n", NULL); //////////////// SEGFAULT SUR NULL!!!!!!!!!!!!!!!!!
	rl = printf("\033[0;31mREAL>\t\033[0m[%s]\n", NULL);
//LUI
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[-%4s-%4s-]\n", "A", "ABCDEF");
	rl = printf("\033[0;31mREAL>\t\033[0m[-%4s-%4s-]\n", "A", "ABCDEF");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[-%04s-%04s-]\n", "A", "ABCDEF");
	rl = printf("\033[0;31mREAL>\t\033[0m[-%04s-%04s-]\n", "A", "ABCDEF");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[-%.4s-%.4s-%.s-]\n", "2", "ABCDEF", "[][");
	rl = printf("\033[0;31mREAL>\t\033[0m[-%.4s-%.4s-%.s-]\n", "2", "ABCDEF", "[][");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[-%6.4s-%4.6s-]\n", "ABCDE", "ABCDE");
	rl = printf("\033[0;31mREAL>\t\033[0m[-%6.4s-%4.6s-]\n", "ABCDE", "ABCDE");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%#s %0s]\n", "ABC", "ABC");
	rl = printf("\033[0;31mREAL>\t\033[0m[%#s %0s]\n", "ABC", "ABC");
	printf ("[%d] [%d]\n", me, rl);
	//
	printf("\n\n\nYOOOOOOOOOOOOOO");
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%+s %0-s]\n", "ABC", "ABC");
	rl = printf("\033[0;31mREAL>\t\033[0m[%+s %0-s]\n", "ABC", "ABC");
	printf ("[%d] [%d]\n", me, rl);
	//
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5.5sa]\n", "Salut tout le monde");
	rl = printf("\033[0;31mREAL>\t\033[0m[%5.5sa]\n", "Salut tout le monde");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5sa]\n", "Salut tout le monde");
	rl = printf("\033[0;31mREAL>\t\033[0m[%5sa]\n", "Salut tout le monde");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%.5sa]\n", "Salut tout le monde");
	rl = printf("\033[0;31mREAL>\t\033[0m[%.5sa]\n", "Salut tout le monde");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%.6sa]\n", "abc");
	rl = printf("\033[0;31mREAL>\t\033[0m[%.6sa]\n", "abc");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-5sa]\n", "abc");
	rl = printf("\033[0;31mREAL>\t\033[0m[%-5sa]\n", "abc");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%5sa]\n", "abc");
	rl = printf("\033[0;31mREAL>\t\033[0m[%5sa]\n", "abc");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6.2sa]\n", "abc");
	rl = printf("\033[0;31mREAL>\t\033[0m[%6.2sa]\n", "abc");
	printf ("[%d] [%d]\n", me, rl);

printf("%s\n", "JE SUIS ICI ////////////////////////////////////////////////");

	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6.2ca]\n", 'a');
	rl = printf("\033[0;31mREAL>\t\033[0m[%6.2ca]\n", 'a');
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6ca]\n", 'a');
	rl = printf("\033[0;31mREAL>\t\033[0m[%6ca]\n", 'a');
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%.2ca]\n", 'a');
	rl = printf("\033[0;31mREAL>\t\033[0m[%.2ca]\n", 'a');
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6.2ca]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%6.2ca]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6ca]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%6ca]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%.2ca]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%.2ca]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6.2ca]\n", 400);
	rl = printf("\033[0;31mREAL>\t\033[0m[%6.2ca]\n", 400);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6ca]\n", -42);
	rl = printf("\033[0;31mREAL>\t\033[0m[%6ca]\n", -42);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%.2ca]\n", NULL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%.2ca]\n", NULL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06.2cb]\n", 'a');
	rl = printf("\033[0;31mREAL>\t\033[0m[%06.2cb]\n", 'a');
	printf ("[%d] [%d]\n", me, rl);
	////////////////////////////
	printf("-------------------------------PART5-----------------------------\n\n");
	////////////////////////////
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06ca]\n", 'a');
	rl = printf("\033[0;31mREAL>\t\033[0m[%06ca]\n", 'a');
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%0.2ca]\n", 'a');
	rl = printf("\033[0;31mREAL>\t\033[0m[%0.2ca]\n", 'a');
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06.2ca]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%06.2ca]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06ca]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%06ca]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%0.2ca]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%0.2ca]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06.2ca]\n", 400);
	rl = printf("\033[0;31mREAL>\t\033[0m[%06.2ca]\n", 400);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06ca]\n", -42);
	rl = printf("\033[0;31mREAL>\t\033[0m[%06ca]\n", -42);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%0.2ca]\n", NULL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%0.2ca]\n", NULL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6.2ca]\n", 'a');
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6.2ca]\n", 'a');
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6ca]\n", 'a');
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6ca]\n", 'a');
	printf ("[%d] [%d]\n", me, rl);
	// 10
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-.2ca]\n", 'a');
	rl = printf("\033[0;31mREAL>\t\033[0m[%-.2ca]\n", 'a');
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6.2ca]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6.2ca]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6ca]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6ca]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-.2ca]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%-.2ca]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6.2ca]\n", 400);
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6.2ca]\n", 400);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n1\033[0;33mYOUR>\t\033[0m[%-6ca]\n", -42);
	rl = printf("02\033[0;31mREAL>\t\033[0m[%-6ca]\n", -42);
	printf ("[%d] [%d]\n", me, rl);

*/

	/////////////
/*	me = ft_printf("\nYO\033[0;33mYOUR>\t\033[0m[%-.2ca]\n", NULL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%-.2ca]\n", NULL);
	/////////////////
	printf ("[%d] [%d]\n", me, rl);
//LUI
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%6.2%a\n");
//LUI ET TOUT CEUX APRES
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%6%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%6.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%6%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%6.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%6%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%06.2%b\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%06%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%0.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%0.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%06.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	////////////////////////////
	printf("-------------------------------PART6-----------------------------\n\n");
*/	////////////////////////////
/*	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%06%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%0.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%0.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%06.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%06%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%06%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%0.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%0.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%-.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%-.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-6%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%-6%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%-.2%a\n");
	rl = printf("\033[0;31mREAL>\t\033[0m[%-.2%a\n");
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%p]\n", NULL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%p]\n", NULL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%p]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%p]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%p]\n", 0x123);
	rl = printf("\033[0;31mREAL>\t\033[0m[%p]\n", 0x123);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%pa]\n", main);
	rl = printf("\033[0;31mREAL>\t\033[0m[%pa]\n", main);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6pa]\n", NULL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%6pa]\n", NULL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6.pa]\n", NULL);
	rl = printf("\033[0;31mREAL>\t\033[0m[%6.pa]\n", NULL);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%0pa]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[%0pa]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%# -pa]\n", 0x123);
	rl = printf("\033[0;31mREAL>\t\033[0m[%# -pa]\n", 0x123);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%.5pa]\n", main);
	rl = printf("\033[0;31mREAL>\t\033[0m[%.5pa]\n", main);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%+040.2i]\n", -2097948570);
	rl = printf("\033[0;31mREAL>\t\033[0m[%+040.2i]\n", -2097948570);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%040.2i]\n", -2097948570);
	rl = printf("\033[0;31mREAL>\t\033[0m[%040.2i]\n", -2097948570);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[!%+012.2ji!]\n", 0);
	rl = printf("\033[0;31mREAL>\t\033[0m[!%+012.2ji!]\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t\033[0m[%0+32.2i]\n", -1046073861);
	rl = printf("\033[0;31mREAL>\t\033[0m[%0+32.2i]\n", -1046073861);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[%#0+ 01.X]\033[0m\n", -65498);
	rl = printf("\033[0;31mREAL>\t\[%#0+ 01.X]\033[0m\n", -65498);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[%#0+ 01X]\033[0m\n", -65498);
	rl = printf("\033[0;31mREAL>\t\[%#0+ 01X]\033[0m\n", -65498);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[%#0+ 51.5X]\033[0m\n", -65498);
	rl = printf("\033[0;31mREAL>\t\[%#0+ 51.5X]\033[0m\n", -65498);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[!%0#8.2hhX!]\033[0m\n", -1426800127);
	rl = printf("\033[0;31mREAL>\t\[!%0#8.2hhX!]\033[0m\n", -1426800127);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[!%#40.4zo!]\033[0m\n", 0);
	rl = printf("\033[0;31mREAL>\t\[!%#40.4zo!]\033[0m\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[42%#28.28zo42]\033[0m\n", 2147452292);
	rl = printf("\033[0;31mREAL>\t\[42%#28.28zo42]\033[0m\n", 2147452292);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[42%#20.2zo42]\033[0m\n", 144491672);
	rl = printf("\033[0;31mREAL>\t\[42%#20.2zo42]\033[0m\n", 144491672);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[\\!/%#31zo\\!/]\033[0m\n", 0);
	rl = printf("\033[0;31mREAL>\t\[\\!/%#31zo\\!/]\033[0m\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[!%#24.8hho!]\033[0m\n", 2004675854);
	rl = printf("\033[0;31mREAL>\t[!%#24.8hho!]\033[0m\n", 2004675854);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[42%#42.10zo42]\033[0m\n", -140307224);
	rl = printf("\033[0;31mREAL>\t[42%#42.10zo42]\033[0m\n", -140307224);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[>------------<%#14.36zo>------------<]\033[0m\n", 0);
	rl = printf("\033[0;31mREAL>\t[>------------<%#14.36zo>------------<]\033[0m\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[42%2.44zo42]\033[0m\n", 0);
	rl = printf("\033[0;31mREAL>\t[42%2.44zo42]\033[0m\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[^.^/%-#37.30zo^.^/]\033[0m\n", 0);
	rl = printf("\033[0;31mREAL>\t[^.^/%-#37.30zo^.^/]\033[0m\n", 0);
	printf ("[%d] [%d]\n", me, rl);
	me = ft_printf("\n\033[0;33mYOUR>\t[\\!/%-#42.16zo\\!/]\033[0m\n", -1998712178);
	rl = printf("\033[0;31mREAL>\t[\\!/%-#42.16zo\\!/]\033[0m\n", -1998712178);
	printf ("[%d] [%d]\n", me, rl);
	
	ft_printf ("[yoloing%Cgbut in green%C0]\n\n");
	ft_printf ("[%.10Lf]\n\n", (long double)1/3);
	

	ft_printf ("[%f]\n", (float)1.3);
	printf ("[%f]\n", (float)1.3);
	ft_printf ("[%.40lf]\n", (double)1.3);
	printf ("[%.40lf]\n", (double)1.3);
	ft_printf ("[%Lf]\n", (long double)1.3);
	printf ("[%Lf]\n", (long double)1.3);
	ft_printf ("[%.100f]\n", (float)1.3);
	printf ("[%.100f]\n", (float)1.3);
	ft_printf ("[%.100lf]\n", (double)1.3);
	printf ("[%.100lf]\n", (double)1.3);
	ft_printf ("[%.15Lf]\n", (long double)1.3);
	printf ("[%.15Lf]\n", (long double)1.3);
	ft_printf ("[%.20Lf]\n", (long double)1.3);
	printf ("[%.20Lf]\n", (long double)1.3);
	ft_printf ("[%.20Lf]\n", (long double)1/3);
	printf ("[%.20Lf]\n", (long double)1/3);
	ft_printf ("[%.200Lf]\n", (long double)1/3);
	printf ("[%.200Lf]\n", (long double)1/3);
	ft_printf ("[%40.20Lf]\n", (long double)1/3);
	printf ("[%40.20Lf]\n", (long double)1/3);
	ft_printf ("[%20.20Lf]\n", (long double)1/3);
	printf ("[%20.20Lf]\n", (long double)1/3);
	ft_printf ("[%80.20f]\n", (float)1/3);
	printf ("[%80.20f]\n", (float)1/3);
	ft_printf ("[%-80.20f]\n", (float)1/3);
	printf ("[%-80.20f]\n", (float)1/3);
	ft_printf ("[%80.20f]\n", (float)0);
	printf ("[%80.20f]\n", (float)0);
	ft_printf ("[%-80.20Lf]\n", (long double)0);
	printf ("[%-80.20Lf]\n", (long double)0);
	ft_printf ("[%-80.0Lf]\n", (long double)0);
	printf ("[%-80.0Lf]\n", (long double)0);
	ft_printf ("[%-80.0Lf]\n", (long double)4/3);
	printf ("[%-80.0Lf]\n", (long double)4/3);
	ft_printf ("[%080Lf]\n", (long double)4/3);
	printf ("[%080Lf]\n", (long double)4/3);
	ft_printf ("[%-80.0Lf]\n", (long double)4/3);
	printf ("[%-80.0Lf]\n", (long double)4/3);
	ft_printf ("[%#080.0Lf]\n", (long double)4/3);
	printf ("[%#080.0Lf]\n", (long double)4/3);
	ft_printf ("[%#080Lf]\n", (long double)4/3);
	printf ("[%#080Lf]\n", (long double)4/3);
	ft_printf ("[%#-080Lf]\n", (long double)-4/3);
	printf ("[%#-080Lf]\n", (long double)-4/3);
	ft_printf ("[%#+80Lf]\n", (long double)4/3);
	printf ("[%#+80Lf]\n", (long double)4/3);
	ft_printf ("[%#+080Lf]\n", (long double)4/3);
	printf ("[%#+080Lf]\n", (long double)4/3);
	ft_printf ("[%#+-080Lf]\n", (long double)4/3);
	printf ("[%#+-080Lf]\n", (long double)4/3);
	ft_printf ("[%#+.80Lf]\n", (long double)4/3);
	printf ("[%#+.80Lf]\n", (long double)4/3);
	ft_printf ("[%#+80Lf]\n", (long double)4/3);
	printf ("[%#+80Lf]\n", (long double)4/3);
	ft_printf ("CE TEXTE EST%Cr ROUGE%C0 SUR FOND%CG VERT%C0 Thats it \n") == 10;
	ft_putnbr(ft_printf ("CE TEXTE EST%C1 CLIGNOTANT%C0 SUR FOND%CG VERT%C0 Thats it \n"));
	ft_putnbr(ft_printf ("CE TEXTE EST%CFr CLIGNOTANT%CFy SUR FOND%CFG VERT%C0 Thats it \n"));
	ft_putnbr(ft_printf ("CE TEXTE EST%CFv CLIGNOTANT%CFV SUR FOND%CFG VERT%C0 Thats it \n"));
	char * format = "I AM PRINTING THIS MEMORY : %B28B";
	ft_printf(format, format);
	ft_printf ("[%.80Lf]\n", (long double)1.1);
	ft_printf("YOLO%cYOLO\n", NULL);


	ft_printf("%.40f, %.40lf\n", (double)1.1,(double)1.1);
	printf("%.40f, %.40lf\n", (double)1.1,(double)1.1);




	ft_printf("now");
	ft_printf("%Lf\n\n", LDBL_MAX);
	ft_printf("now");
	ft_printf("now");
	ft_printf("%Lf\n\n", LDBL_MAX / 2);
	ft_printf("now");
	ft_printf("\n\n-->-0/0.0%Lf\n\n", -0/0.0);
	ft_printf("\n\n-->-0%Lf\n\n", -0);
	printf("%Lf\n", LDBL_MAX / 2);

	ft_printf("-->%*s]\n", "YOLO", 15);
	printf("-->%*s]\n", 15, "YOLO");
	ft_printf("-->%-.*p]\n", "YOLO", 40);
	printf("-->%-.*p]\n", 40, "YOLO");
	ft_printf("-->%*.*p]\n", "YOLO", 40, 60);
	printf("-->%*.*p]\n", 40, 60, "YOLO");
	ft_printf(format, format);
	long double l;
	l = (long double)LDBL_MAX;
	ft_printf("\n\n%B16B", &l);
	//ft_printf ("[%f]\n", (float)1954e-30 * 1.05);
	*/
}