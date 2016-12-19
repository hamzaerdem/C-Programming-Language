#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 5

int* allocateArray(int size);
int* resizeArray(int* a, int size);

int main()
{
	//AllocatingArray
	int* array = allocateArray(SIZE); 	

	//ResizingArray
	array = resizeArray(array, SIZE*2);	
}

int* allocateArray(int size)
{
	int* a = (int*)calloc(size, sizeof(int));
	return a;
}

int* resizeArray(int* a, int size)
{
	int* a_resized= realloc(a, size);
	return a_resized;
}
