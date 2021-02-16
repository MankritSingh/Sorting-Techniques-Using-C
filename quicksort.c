#include <stdio.h>

    void printarr(int [],int);
    void quickSort(int [],int,int);
    int partion(int arr[],int start,int end);

    int main(void) {
    	int arr[10];
    	int len;
    	printf("\n Enter the number of elements");
    	scanf("%d",&len);
    	for(int k=0;k<len;k++)
    	    scanf("%d",&arr[k]);
    	printf("\nThe array is :");
    printarr(arr,len);
    quickSort(arr,0,len-1);
    printf("\nThe Sorted array is :");
    printarr(arr,len);
    	return 0;
    }

    void quickSort(int arr[],int start,int end)
    {
    int pivotPoint;
    if(start<end)
    {
    pivotPoint=partion(arr,start,end);
    quickSort(arr,start,pivotPoint-1);
    quickSort(arr,pivotPoint+1,end);
    }
    }
    int partion(int arr[],int left,int right)
    {
     int i,j,temp;//i=current element j=last swapped element
     int pivot=arr[right];
     j=left-1; // j=left-1
     for(i=left;i<right;i++) //i<right
     {
     if(arr[i]<=pivot)
     {
         j++;
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
      // Move it to top, before storing arr[i] in temp
     }
     }
     
     temp=arr[j+1]; //change to j+1
     arr[j+1]=arr[right]; //change to j+1
     arr[right]=temp;
     
     return j+1; // Change to j+1
    }

    void printarr(int arr[],int length)
    {
    for(int i=0;i<length;i++)
    printf("\n%d",arr[i]);
    }

