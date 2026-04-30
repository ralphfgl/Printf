#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// normal string
int i1 =	ft_printf("test\n");
	// NULL pointer
int i2 =	ft_printf("%p, %s\n", NULL, NULL);
	// string
int i3 =	ft_printf("%s\n", "je fais des test");
	// integer and decimal
int i4 =	ft_printf("int %i, dec %d\n", 5, 5);
	// unsigned
int i5 =	ft_printf("unsinged %u\n", -10);
	// hexadecimal
int i6 =	ft_printf("hexa %x, HEXA %X\n", 42, 42);
	// addresses
int i7 =	ft_printf("addr %p\n", &"test");
	// %sign
int i8 =	ft_printf("%%\n");
	printf("%d %d %d %d %d %d %d %d\n", i1, i2, i3, i4, i5, i6, i7, i8);
}
