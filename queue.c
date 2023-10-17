#include<stdio.h>
#include<stdlib.h>

int menu();
void enqueue();
void display();
void dequeue();

int n,choice,front=-1,rear=-1,i,queue[100],ele;
int main()
{
	printf("\n Enter the size of queue: ");
	scanf("%d",&n);
	menu();	
}

int menu(){
	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
	printf("\n Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:enqueue();
		break;
	case 2:dequeue();
		break;
	case 3:display();
		break;
	case 4:
		exit(1);
	}
}

void enqueue()
{
	if(rear!=n-1)
	{
		printf("Enter element to be inserted : ");
		scanf("%d",&ele);
		front=0;
		rear=rear+1;
		queue[rear]=ele;
		printf("Insertion Successfull\n");
	}
	else{
		printf("Queue is Full!!!\n");
	}
	menu();
}



void display()
{
	 if(rear==-1||front==-1)
	 {
	 	printf("Queue is empty\n");
	 }
	 else{
	 	for(i=front;i<=rear;i++){
	 		printf("%d\t",queue[i]);
	 	}
	 }
	 menu();
}

void dequeue()
{
	if(rear==-1||front==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		queue[front]=ele;
		front=front+1;
		printf("Deleted successfully!!!\n");
	}
	menu();
}	
