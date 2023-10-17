#include<stdio.h>
int m,n,a[100],b[100],i,c[100],temp,j;
void merge();
int main()
{
	
	printf("Enter size of array1 : ");
	scanf("%d",&m);
	printf("\nEnter Elements of array1 : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nElements of array1 in sorted order: ");
	for (i=0;i<m;++i){
		for (j=i+1;j<m;j++){
	        	if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
	      }
	   }
	}
	for(i=0;i<m;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nEnter size of array2 : ");
	scanf("%d",&n);
	printf("\nEnter Elements of array2 : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nElements of array2 in sorted order : ");
	for(i=0;i<n;++i){
		for(j=i+1;j<n;j++){
	        	if(b[i]>b[j]){
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
	      }
	   }
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",b[i]);
	}
	merge();
}
void merge()
{
	int i,j,k;
	i=0,j=0,k=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=b[j++];
		}
	}
	while(i<m)
	{
		c[k++]=a[i++];
	}
	while(j<n)
	{
		c[k++]=b[j++];
	}
	printf("\narray after merging");
	for(i=0;i<m+n;i++)
	{
		printf("\n%d",c[i]);
	}
}	
	
