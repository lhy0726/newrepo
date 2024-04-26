#include <stdio.h>

extern int add(int, int);
extern int sub(int, int);

int main() 
{
	add(0x7, 0x8);
	add(0x7, 0x8);
	sub(0xb, 0xa);
	add(0xb, 0xa);
	return 0;
}
