#include<stdio.h>
#include<stdlib.h>

int menu();
void push();
void pop();
void display();
void peek();

int i,top=-1,stack[50],choice,ele,n;
int main()
{
	printf("\n Enter the size of stack: ");
	scanf("%d",&n);
	menu();	
}
int menu(){
	printf("1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit");
	printf("\n Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:push();
		break;
	case 2:pop();
		break;
	case 3:display();
		break;
	case 4:peek();
		break;
	case 5:
		exit(1);
	}
}

void push()
{
	if(top!=n-1)
	{
		printf("Enter element to be pushed\n");
		scanf("%d",&ele);
		top=top+1;
		stack[top]=ele;
		printf("Insertion succesfull!!!\n");
	}
	else{
		printf("Stack is full!!!\n");
	}
	menu();
}

void pop()
{
	if(top==-1)
	{
		printf("Stack is underflow!!!\n");
	}
	else{
		stack[top]=ele;
		printf("Deletion successfull\n");
		top=top-1;
	}
	menu();
}

void display()
{
	if(top==-1)
	{
		printf("Stack is underflow!!!\n");
	}
	else{
		for(i=top;i>-1;i--)
		{
			printf("%d\t\n",stack[i]);
		}
	}
	menu();
}

void peek()
{
	if(top==-1)
	{
		printf("Stack is underflow!!!\n");
	}
	else{
	printf("Top most element is %d\n",stack[top]);
	}
	menu();
}
