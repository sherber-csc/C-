#include <iostream>

using namespace std;

int main() {
	int a = 0b1;
	cout << (~a ) << endl;

	int b = 0b11111111111111111111111111111110;
	cout << (~b) << endl;

	return 0;
}