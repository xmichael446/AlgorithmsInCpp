#include <iostream>
using namespace std;

int fact(int x) {
	if (x == 1) 
		return x;
	else {
		return x * fact(x - 1);
	}
}

int main()
{
	cout << fact(5) << endl;
	return 0;
}