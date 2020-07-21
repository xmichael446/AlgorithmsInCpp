#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void print_array(int array[], int size) {
	int i;
	for (i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

int partition(int array[], int low, int high) {
	int pivot = array[high];
	int i = (low - 1);

	for (int j = low; j < high; j++) {
		if (array[j] <= pivot) {
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

void quick_sort(int array[], int low, int high) {
	if (low < high) {
		int pi = partition(array, low, high);

		quick_sort(array, low, pi - 1);

		quick_sort(array, pi + 1, high);
	}
}

int main() {
	int data[] = {8, 7, 6, 1, 0, 9, 2};
	int n = sizeof(data) / sizeof(data[0]);
	quick_sort(data, 0, n - 1);
	print_array(data, n);
}
