#include <stdio.h>
#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>

int main (void)
{
	// int i = -1;
	// unsigned int u = 2457472;
	// //char a = 'a';
	// int ret = 0;

	// printf("printf:	%d; %u;\n", i, i);
	// ft_printf("ft_printf: %d; %u;\n", i, i);

	// printf("\n");
	// ret = printf("oldprintf:	%d; %d;\n", i, i);
	// printf("%i\n", ret);
	// ret = ft_printf("ft_printf:	%d; %d;\n", i, i);
	// printf("%i\n\n", ret);

	// ret = printf("oldprintf:	%p; %d;\n", &i, u);
	// printf("%i\n", ret);
	// ret = ft_printf("ft_printf:	%p; %d;\n", &i, u);
	// printf("%i\n\n", ret);

	// ret = printf("oldprintf:	%p; %x;\n", &i, u);
	// printf("%i\n", ret);
	// ret = ft_printf("ft_printf:	%p; %x;\n", &i, u);
	// printf("%i\n\n", ret);

	// ret = printf("oldprintf:	%p; %i;\n", &i, i);
	// printf("%i\n", ret);
	// ret = ft_printf("ft_printf:	%p; %i;\n", &i, i);
	// printf("%i\n\n", ret);
	printf(" NULL %s NULL\n", NULL);
	ft_printf(" NULL %s NULL\n ", NULL);
	printf(" %p %p \n", (void*)LONG_MIN, (void*)LONG_MAX);
	printf(" %p %p \n", (void*)INT_MIN, (void*)INT_MAX);
	printf(" %p %p \n", (void*)ULONG_MAX, (void*)-ULONG_MAX);

	ft_printf("own version \n");
	ft_printf(" %p %p \n", (void*)LONG_MIN, (void*)LONG_MAX);
	ft_printf(" %p %p \n", (void*)INT_MIN, (void*)INT_MAX);
	ft_printf(" %p %p \n", (void*)ULONG_MAX, (void*)-ULONG_MAX);
	ft_printf(" %s\n", "this is just some unnecessarily enlonged sentence to create a somewhat extended string here, of course this is not according to norme anymore!");
	//ft_printf()

}
