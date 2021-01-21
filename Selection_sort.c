#include<stdio.h>
int i,j, k, pos, size;

int smallest();
void selection_sort();

void main()
{
	int ch;
	printf("In which order do you wanna sort?\n    1.Ascending  2.Descending\n Enter your choice(number): ");
	scanf("%d", &ch);
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int a[size];
	printf("Enter the elements of array: ");
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);
		
	selection_sort(a);	
	
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

int smallest(int arr[], int k, int pos)
{
	int small = arr[k];
	pos = k;
	for(j=k+1; j<size; j++)
		if(small > arr[j])
		{
			small = arr[j];
			pos = j;			
		}
	return pos;	
	
}

void selection_sort(int arr[])
{
	int temp;
	for(k=0; k<size-1;  k++)
	{
		pos = smallest(arr, k, pos);
		temp = arr[k];
		arr[k] = arr[pos];
		arr[pos] = temp;
	}
}

