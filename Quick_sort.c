#include<stdio.h>
int size, i, j;

void quick_sort();

void main()
{
	int ch;
	printf("In which order do you wanna sort?\n    1.Ascending  2.Descending\nEnter your choice(number): ");
	scanf("%d", &ch);
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int a[size];
	printf("Enter the elements of array: ");
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);		
		
	quick_sort(a, 0, size-1);	
	
	switch(ch)
	{
		case 1:
			printf("               Sorted array: ");
			for(i=0; i<size; i++)
				printf("%d ", a[i]);	
			break;	
		case 2:
			printf("               Sorted array: ");
			for(i=size-1; i>=0; i--)
				printf("%d ", a[i]);
			break;		
	}
}

void quick_sort(int arr[],int first,int last)
{
   int pivot, temp;

   if(first<last)
   {
      pivot=first;
      i=first;
      j=last;

      while(i<j)
	  {
         while(arr[i]<=arr[pivot] && i<last)
            i++;
         while(arr[j]>arr[pivot])
            j--;
			
         if(i<j)
		 {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp = arr[pivot];
      arr[pivot] = arr[j];
      arr[j] = temp;
	  
      quick_sort(arr, first, j-1);
      quick_sort(arr, j+1, last);

   }
}
