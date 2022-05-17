#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 }; //  elements in the array 

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ',';
	}
	cout << endl << endl;

	// stepping through for every element array
	for (int i = 0; i < 10; i++)
	{
		int min = arr[i];
		int minIndex = i;

		for (int j = i; j < 10; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ',';
	}
	cout << endl << endl;


	return 0;
}