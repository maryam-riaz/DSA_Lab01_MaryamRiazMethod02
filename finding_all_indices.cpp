#include <iostream>
using namespace std;

void find_indices(int arr[], int size, int key);

int main()
{
	int arr1[] = {1,2,9,4,5,6,7,9,9,10};
	int arr2[] = {};
	find_indices(arr1, 10, 9);		// multiple occurences test
	find_indices(arr1, 10, 3);		// key not present 
	find_indices(arr2, 0, 3);		// empty array test
	return 0;
}

void find_indices(int arr[], int size, int key)
{
	if (size == 0)
	{
		cout << "Array is empty\n";
		return;
	}
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			count++;
			if (count == 1)
				cout << "Indices: ";
			cout << i << '\t';
		}
	}
	if (count == 0)
		cout << "key not found";
	cout << endl;
}