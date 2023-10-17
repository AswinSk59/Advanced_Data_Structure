#include<stdio.h>
#include<stdlib.h>

int menu();
void search();
void sort();
void insert();
void delete();
void display();

int choice,j,i=0,a[50],b[10],s;
void main()
{
	printf("\n Enter the size of array : ");
	scanf("%d",&s);
	printf("\n enter the element of an array : ");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	menu();
	
}

int menu()
{
	printf("\n 1.insert");
	printf("\n 2.delete");
	printf("\n 3.sort");
	printf("\n 4.search");
	printf("\n 5.display");
	printf("\n 6.exit");
	printf("\n Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:insert();
		break;
	case 2:delete();
		break;
	case 3:sort();
		break;
	case 4:search();
		break;
	case 5:display();
		break;
	case 6:
		exit(1);
	}
}	

void search()
{
	int ele,loc;
	printf("\n Enter element to be searched: ");
	scanf("%d",&ele);
	
	printf("\n Element found at :");
	for(i=0;i<s;i++)
	{
		if(ele==a[i]){
		printf("%d",i+1);
		}
		
	}
	
	
	
	menu();
}

void sort()
{
	printf("\n current array : ");
	for(i=0;i<s;i++)
		printf("\t %d",a[i]);
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		if(a[i]>a[j])
		{
			a[i]=a[i]+a[j];
			a[j]=a[i]-a[j];
			a[i]=a[i]-a[j];
		}
	}
	printf("\n Sorted array is: ");
	for(i=0;i<s;i++)
		printf("\t %d",a[i]);

	menu();
}

void insert()
{
	int loc,ele;
	printf("\n enter the location");
	scanf("%d",&loc);
	printf("\n enter element to be inserted: ");
	scanf("%d",&ele);
	for(i=s;i>loc-1;i--)
		a[i]=a[i-1];
		a[loc-1]=ele;
	printf("\n element inserted");
	printf("\n new array after insertion: ");
	s++;
	for(i=0;i<s;i++){
		printf("\t %d",a[i]);
	}
	menu();
}

void delete()
{
	int loc;
	printf("\n enter location: ");
	scanf("%d",&loc);
	for(i=loc-1;i<s-1;i++)
	{
		a[i]=a[i+1];
	}
	
	printf("\n element deleted: ");
	printf("\n New array after deletion: ");
	s--;
	for(i=0;i<s;i++)
		printf("\t %d",a[i]);
	
	menu();
}

void display()
{
	int i;
	if(s==0)
	{
		printf("No element to display!");
		return;
	}
	printf("\n Array elements are: ");
	for(i=0;i<s;i++)
	{
		printf("\t %d",a[i]);
	}
	
	menu();
} 
	
