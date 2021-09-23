#include <stdio.h>
#include "ft_printf.h"

int main (void)
{
	long i = -214748364833;
	unsigned int u = 2457472;
	char a = 'a';
	int ret = 0;

	printf("printf:	%d; %d;\n", 1, 1);
	ft_printf("ft_printf: %d;\n", 1);

	printf("\n");
	ret = printf("oldprintf:	%d; %d;\n", i, u);
	printf("%i\n", ret);
	ret = ft_printf("ft_printf:	%d; %d;\n", i, u);
	printf("%i\n\n", ret);

	ret = printf("oldprintf:	%p; %d;\n", &i, u);
	printf("%i\n", ret);
	ret = ft_printf("ft_printf:	%p; %d;\n", &i, u);
	printf("%i\n\n", ret);

	ret = printf("oldprintf:	%p; %x;\n", &i, u);
	printf("%i\n", ret);
	ret = ft_printf("ft_printf:	%p; %x;\n", &i, u);
	printf("%i\n\n", ret);

	ret = printf("oldprintf:	%p; %i;\n", &i, i);
	printf("%i\n", ret);
	ret = ft_printf("ft_printf:	%p; %i;\n", &i, i);
	printf("%i\n\n", ret);

}