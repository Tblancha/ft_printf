#include <stdio.h>
#include "ft_printf.h"

int main()
{
	t_struct	*stprintf;
	int i;

	stprintf = malloc(sizeof(t_struct));
	stprintf->str = malloc(sizeof(char) * 50);
	stprintf->str = "0123%-789.400056s";
	stprintf->cut[0] = 0;
	i = 0;
	while (i < 255)
	{
		stprintf->iflag[i] = 0;
		i++;
	}
	stprintf->token = parsing(stprintf);
	printf("%s\n", stprintf->str);
	printf("cut[0] = %d\ncut[1] = %d\n", stprintf->cut[0], stprintf->cut[1]);
	printf("%% = %d\n", stprintf->iflag[(int)'%']);
	printf("c = %d\n", stprintf->iflag[(int)'c']);
	printf("s = %d\n", stprintf->iflag[(int)'s']);
	printf("p = %d\n", stprintf->iflag[(int)'p']);
	printf("d = %d\n", stprintf->iflag[(int)'d']);
	printf("i = %d\n", stprintf->iflag[(int)'i']);
	printf("o = %d\n", stprintf->iflag[(int)'o']);
	printf("u = %d\n", stprintf->iflag[(int)'u']);
	printf("x = %d\n", stprintf->iflag[(int)'x']);
	printf("X = %d\n", stprintf->iflag[(int)'X']);

	printf("# = %d\n", stprintf->iflag[(int)'#']);
	printf("+ = %d\n", stprintf->iflag[(int)'+']);
	printf("- = %d\n", stprintf->iflag[(int)'-']);
	printf(". = %d\n", stprintf->iflag[(int)'.']);
	printf("  = %d\n", stprintf->iflag[(int)' ']);
	printf("L = %d\n", stprintf->iflag[(int)'L']);
	printf("h = %d\n", stprintf->iflag[(int)'h']);
	printf("l = %d\n", stprintf->iflag[(int)'l']);
	printf("0 = %d\n", stprintf->iflag[(int)'0']);
	return (0);
}
