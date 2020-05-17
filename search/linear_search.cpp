#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int x) {
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] == x) {
			return i;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << linear_search(arr, n, 7) << endl;
	return 0;
}