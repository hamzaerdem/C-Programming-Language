#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
}*start=NULL;

void create();
void display();

int main()
{
	create();
	display();
}

void create()
{
	int i;

	do
	{
		struct node *new_node,*current;
		new_node=(struct node *)malloc(sizeof(struct node));

		printf("\nEnter the data : ");
		scanf("%d",&new_node->data);
		new_node->next=NULL;

		if(start==NULL)
		{
			start=new_node;
			current=new_node;
		}
		else
		{
			current->next=new_node;
			current=new_node;
		}

		printf("\n[Press 1 or 0] Do you want to create another: ");
		scanf("%d", &i);

	}while(i!=0);

}

void display()
{
	struct node *new_node;
	printf("\nThe Linked List : ");
	new_node=start;

	while(new_node!=NULL)
	{
		printf("%d--->",new_node->data);
		new_node=new_node->next;
	}
	printf("NULL\n");
}
