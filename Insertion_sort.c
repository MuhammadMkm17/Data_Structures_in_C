#include<stdio.h>
int i, j, k, size;


void insertion_sort();

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
	insertion_sort(a);	
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

void insertion_sort(int arr[])
{
	int temp;
	for(k=1;k<size;k++)
	{
		temp = arr[k];
		j = k-1;
		while(temp<= arr[j] && j>=0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}
