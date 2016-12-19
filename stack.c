#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5

typedef struct {
	int data[SIZE];
	int top;
	int max;
}stack;

int initialize(stack *s);
int push(stack* s, int push_data);
int pop(stack *s);
int printStack(stack *s);

int main()
{
	stack s;
	initialize(&s);
	//INSERTING DATA INTO THE STACK
	push(&s,5);
	push(&s,9);
	printStack(&s);
	//DELETING DATA FROM THE STACK

	pop(&s);
	printStack(&s);
}

int initialize(stack *s)
{
	s->top=0;
	s->max=SIZE;
	memset(s->data,0, SIZE*sizeof(int));
}

int push(stack* s, int push_data)
{
	if(s->top <= s->max)
	{
		s->data[s->top++] = push_data;	
		return s->top;
	}

	else
	{
		printf("\nStack is full. Could not insert data!");
		return -1;
	}
}

int pop(stack* s)
{
	if(s->top > 0)
	{
		return s->data[s->top--];	
	}
}

int printStack(stack* s)
{
	for(int i=0; i<s->top; i++)
	{
		printf("%d\n", s->data[i]);
	}		
}
