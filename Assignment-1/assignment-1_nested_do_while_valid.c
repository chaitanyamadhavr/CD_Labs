#include <stdio.h>

int main()
{
	int a;
	int b=6; // initialization within declaration
	a = 5 + 3;
	b = !(a || 8); // logical operators
	b = 0;
	do
	{
		a = 5;
		do
		{
			int k = 123 + 456 * 123;
			a = a + b;
		}
		while(a < b);
	}
	while (a<1); // do while loop
	
}
