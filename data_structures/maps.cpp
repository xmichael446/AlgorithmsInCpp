#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	map<int, int> squares;

	squares.insert(pair<int, int>(2, 4));
	squares.insert(pair<int, int>(3, 9));
	squares.insert(pair<int, int>(4, 16));
	squares.insert(pair<int, int>(5, 25));
	squares.insert(pair<int, int>(6, 36));

	map<int, int>::iterator i;

	cout << "Print all key&value pairs in squares map:\n";
	cout << "\tKEY\tELEMENT\n";
	for (i = squares.begin(); i != squares.end(); ++i)
	{
		cout << "\t" << i->first << "\t" << i->second << "\n";
	}
	return 0;
}