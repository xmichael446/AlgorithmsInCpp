// Find the index of the item you wanna search for, and then pass it as index of "values" array

#include <iostream>
using namespace std;

void hash_add(char new_key, int new_value, char keys_arr[], int values_arr[], unsigned int index) {

	keys_arr[index] = new_key;
	values_arr[index] = new_value;
}

void print_values(char *keys_arr, int *values_arr, unsigned int n) {

	for (int i = 0; i < n; ++i)
	{
		cout << keys_arr[i] << ": " << values_arr[i] << endl;
	}
}

int main()
{
	unsigned int predefined_size = 20;

	char keys[predefined_size] = {'a', 'b', 'c'};
	int values[predefined_size] = {1, 2, 3};

	cout << "Initial hash: " << endl;
	print_values(keys, values, 3);

	hash_add('d', 4, keys, values, 3);
	cout << endl;

	cout << "Updated hash" << endl;
	print_values(keys, values, 4);
	return 0;
}