#include <iostream>
using namespace std;

int Euklid(int a, int b) {
	if(a == b) {
		return a;
	} else if(a > b) {
		return Euklid(a - b, b);
	} else {
		return Euklid(a, b - a);
	}
}

int main() {
	int result = Euklid(12, 36);
	cout << result << endl;
	return 0;
}