#include<iostream>
using namespace std;

void printarray(int arr[], int size)
	{
		for (int i=0; i<size; i++)
		{
			cout<<arr[i]<<" ";
		}
	}

void insertion(int arr[], int size)
	{
		for (int i=1; i<size; i++)
		{
			int temp = arr[i];
			int j = i-1;
			
			while(arr[j]>temp && j>=0)
			{
				arr[j+1] = arr[j];
				j--;
			}
			arr[j+1] = temp;
		}	
	}
	
int main()
{
	int arr[5] = {4,2,1,5,9};
	
	int size = sizeof(arr) / sizeof(int);
	
	insertion(arr, size);
	
	printarray(arr,size);
	
 return 0;
}

