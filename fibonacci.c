#include <stdio.h>

int f(int x)
{
	if(x==0 || x==1)
	{
		return 1;
	}		
	return f(x-1)+f(x-2);
}

int main()
{
	printf("%d\n", f(4));
}

