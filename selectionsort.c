#include <stdio.h>
void selectionsort(int [],int);
int main()
{
	int arr[10];
	int size,i;
	printf("\nEnter the number of elements in array");
	scanf("%d",&size);
	printf("\nEnter the array elements\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	selectionsort(arr,size);
	printf("\nthe sorted array is \n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
}

void selectionsort(int arr[],int size)
{
	int i,j,min,temp;
	
	for(i=0;i<size;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{			
				temp=arr[min];
				arr[min]=arr[j];
				arr[j]=temp;
			}
		}
	}
}