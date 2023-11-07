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

void enqueue(){
	if(rear==n-1){
		printf("Queue is full");
		}
	else
	{
	
	front=0; 
	rear=(rear+1)%n; 
	printf("\nEnter element:"); 
	scanf("%d",&ele);
	queue[rear]=ele;
	printf("\nInserted element is %d",ele);
	}
	menu();
}

void dequeue()
{
 
	if((front==-1)&&(rear==-1))  
	{  
		printf("\nQueue is underflow..");  
	}  
	else if(front==rear)  
	{  
		printf("\nThe dequeued element is %d",queue[front]);  
		front=-1;  
		rear=-1;  
	}   
	else  
	{  
		printf("\nThe dequeued element is %d",queue[front]);  
		front=(front+1)%n;  
	}  
	menu();
}
void display() 
{  
	int i=front;  
	if((front==-1)&&(rear==-1))  
	{  
		printf("\n Queue is empty..");  
	}  
	else  
	{  
		printf("\nElements in a Queue are :");  
		while(i<=rear)  
		{  
			printf("\n%d",queue[i]);  
			i=(i+1)%n;  
        	}  
    	}  
    	menu();
}

