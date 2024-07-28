#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
	{
		for (int i=1; i<n; i++)
		{
			bool swapp = false;
			
			for (int j=0; j<(n-i); j++)
			{
				if (arr[j]>arr[j+1])
				{
					swap(arr[j], arr[j+1]);
					
				}
				swapp = true;
			}
			
			if (swapp == false)
			{
				break;
			}
		}
	}

void printarray(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
 int arr[5] = {4,1,2,9,8};
 int size = sizeof(arr) / sizeof(int);
 
 bubblesort(arr, size);
 
 printarray(arr, size);
 
 
 return 0;
}

