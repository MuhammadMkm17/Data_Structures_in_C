#include<stdio.h>
int size, i, j;
void bubble_sort();

void main()
{
	int ch;
	printf("In which order do you want to sort?\n    1.Ascending  2.Descending\nEnter your choice(number): ");
	scanf("%d", &ch);	
	printf("Enter the size of array: ");
	scanf("%d", &size);
	printf("Enter the elements of array: ");
	int a[size];
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
	bubble_sort(a);	
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

void bubble_sort(int arr[])
{
	int temp;
	for(i=0;i<size;i++)
		for(j=0;j<(size-1-i);j++)
			if(arr[j] > arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;	
				}	
}