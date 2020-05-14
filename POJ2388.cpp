#include <iostream>

using namespace std;

void insertionSort(int arr[], int n);
int main()
{
	int a;
	cin >> a;
	int* arr;
	arr = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}

	insertionSort(arr, a);
	cout << arr[a / 2];
	
	return 0;
}

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
