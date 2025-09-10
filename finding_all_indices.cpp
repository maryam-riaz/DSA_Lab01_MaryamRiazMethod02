#include <iostream>
using namespace std;

void find_indices(int arr[], int size, int key);

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 3, 3, 8, 9, 10};
	int size = sizeof(arr) / sizeof(arr[0]);
	find_indices(arr, size, 11);
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
		cout << "key not found\n";
	cout << endl;
}