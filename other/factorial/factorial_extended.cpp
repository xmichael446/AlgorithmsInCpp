#include <iostream>
using namespace std;

int fact(int x, int n) {
	if (x <= n) 
		return x;
	else {
		return x * fact(x - n, n);
	}
}

int main()
{
	cout << fact(10, 3) << endl;
	return 0;
}