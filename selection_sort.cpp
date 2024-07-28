#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
	for (int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void selectionsort(int arr[], int size)
	{
		for (int i=0; i<(size-1); i++)
		{
			int min = i;
			
			for (int j=i+1; j<size; j++)
			{
				if (arr[j]<arr[min])
				
				min = j;
			}
			
			int temp = arr[i];
			arr[i]	= arr[min];
			arr[min] = temp;
			
		}
			
	}

int main()
{
	int arr[5] = {4,1,2,5,3};
	int size = sizeof(arr) / sizeof(int);
	
	selectionsort(arr, size);
	
	printarray(arr, size);
	
 return 0;
}

