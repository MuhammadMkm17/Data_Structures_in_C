#include<stdio.h>
int size, i, j, k;

void merge();
void merge_sort();

void main()
{
	int ch;
	printf("In which order do you wanna sort?\n    1.Ascending  2.Descending\nEnter your choice(number): ");
	scanf("%d", &ch);
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int a[size]; int b[size];
	printf("Enter the elements of array: ");
	for(i=0;i<size;i++)
		scanf("%d", &a[i]);		
		
	merge_sort(a, b, 0, size-1);	
	
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

void merge_sort(int arr1[], int arr2[], int first, int last)
{
	int middle;
	if(first<last)
	{
		middle = (first + last)/2;
		merge_sort(arr1, arr2, first, middle);
		merge_sort(arr1, arr2, middle+1, last);
		merge(arr1, arr2, first, middle, middle+1, last);
	}		
}

void merge(int a[], int b[], int first, int midleft, int midright, int last)
{	
	i = first; j = midright; k = first;
	while( i<=midleft && j<=last)
	{
		if(a[i] < a[j])
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
	}		
	
	while(i <= midleft)    
		b[k++] = a[i++];

    while(j <= last)   
		b[k++] = a[j++];
	  
	for(k=first; k<=last; k++)
		a[k] = b[k];
}
