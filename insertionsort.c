#include <stdio.h>
void insertionsort(int [],int);
int main()
{
	int arr[10];
	int size,i;
	printf("\nEnter the number of elements in array");
	scanf("%d",&size);
	printf("\nEnter the array elements\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	insertionsort(arr,size);
	printf("\nthe sorted array is \n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
}
void insertionsort(int arr[],int size)
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
		for(j=i;j>0;j--)
		{
			if(arr[j]<arr[j-1])
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
			else
				j=0;
		
		}
	}
}
		