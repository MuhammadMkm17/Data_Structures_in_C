#include<stdio.h>
int i, size, temp;

void heapify();
void heap_sort();

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
		
	heap_sort(a, size);	
	
	switch(ch)
	{
		case 1:
			printf("               Sorted array: ");
			for(i=0;i<size;i++)
				printf("%d ", a[i]);	
			break;	
		case 2:
			printf("               Sorted array: ");
			for(i=size-1;i>=0;i--)
				printf("%d ", a[i]);
			break;		
	}
}

void heapify(int arr[], int size, int i)
{
	int largest = i; int left = 2*i + 1; int right = 2*i + 2;
	if(left<size && arr[left] > arr[largest])
		largest = left;
	if(right<size && arr[right] > arr[largest])
		largest = right;
		
	if(largest != i)
	{
		temp = arr[i];  
		arr[i]= arr[largest];   
		arr[largest] = temp;  
		heapify(arr, size, largest);  
	}	
}

void heap_sort(int arr[], int size)
{
	for (i = (size/2)-1; i >= 0; i--)  
		heapify(arr, size, i);
	for (i=size-1; i>=0; i--)  
	{  
		temp = arr[0];  
		arr[0]= arr[i];   
		arr[i] = temp;  
		heapify(arr, i, 0);  
	}	
}