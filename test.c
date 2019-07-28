#include <stdio.h>
#include "ft_printf.h"

int main()
{
	t_struct	*stprintf;

	stprintf = malloc(sizeof(t_struct));
	stprintf->str = malloc(sizeof(char) * 50);
	stprintf->str = "01234567%#    .123s         ";
	stprintf->cut[0] = 0;
	stprintf->token = parsing(stprintf);

	printf("cut[0] = %d\ncut[1] = %d\n", stprintf->cut[0], stprintf->cut[1]);
	printf("% = %d\n ", stprintf->
	return (0);
}
