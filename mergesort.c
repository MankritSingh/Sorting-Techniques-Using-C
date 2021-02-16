//merge sort
#include <stdio.h>
#include <stdlib.h>

void merge(int[],int,int,int);
void mergesort(int[],int,int);

int main()
{ 
	int count;
	int arr[5]={0,6,1,2,4};
	int arr_size = sizeof(arr) / sizeof(arr[0]); 

	mergesort(arr,0,arr_size-1); //(arrayName,start,end)

	printf("the sorted array is \n ");
	for(count=0;count<arr_size;count++)
		printf("%d\t",arr[count]);

    return 0;
}

void mergesort(int arr[],int start,int end)
{
	if(start<end)
	{
		int mid=start+(end-start)/2;//improve for overflow

		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}

void merge(int arr[],int start,int mid,int end)
{
	int i,j,k;
	int temp[5]; //temp array to store the sorted array.
	i=start;    //start of first half
	j=mid+1;    //start of second half
	k=start;    //start of the temp array.it has value start because it cooresponds to the start of the sub array we are sorting
	while(i<=mid && j<=end)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
		}
	k++; //common for both
	}

	while(i<=mid)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=end)
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	
	for(int count=start;count<=end;count++)
	    arr[count]=temp[count];
	
}
