#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[]={2,9,10,6,4,7,29,21}; 
	int n = sizeof(array) / sizeof(int); 
	int position, swap;

	for (int a = 0 ; a < ( n - 1 ) ; a++ )
	{
		position = a;
			 
		for ( int b = a + 1 ; b < n ; b++ )
		{
			if (array[position] > array[b])
			position = b;
		}

		if ( position != a )
		{
			swap = array[a];
			array[a] = array[position];
			array[position] = swap;
		}
	}
		 
	printf("\nSorted list in ascending order:\n\n");

	for (int a=0; a<n; a++)
	{	  
		printf("%d\t", array[a]);
	}	   
}
