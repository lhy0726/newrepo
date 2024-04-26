#include <stdio.h>

int g_add = 0;

int add( int a, int b )
{
	g_add = a + b;
	return g_add;
}
