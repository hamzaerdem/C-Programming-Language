#include <stdio.h>

void print_array(int* array, int size);
int delete_element(int* array, int size, int a);

int main()
{
    int array[]={1,2,3,4,5}; 
    
	int SIZE=sizeof(array) / sizeof(int);

	printf("Array: ");
	print_array(array, SIZE);
	
	SIZE=delete_element(array, SIZE, 3);	
	
	printf("An element deleted from array: ");		
	print_array(array, SIZE);	
}

void print_array(int* array, int size)
{
	int i=0;
	
	for(i=0; i<size; i++)
	{
		printf("%d", array[i]);
	}
	
	printf("\n");
}

int delete_element(int* array, int size, int a)
{
	int i=0;
	int found;

	for(i=0; i<size; i++)
	{
		if(array[i]==a)
		{
			for(i; i<size; i++)
			{
				array[i]=array[i+1];	
			}
			break;							
		}		
	}
    
	size=size-1;

	return size;
}
