#include <iostream>

using namespace std;

int factorial(int n) {
	auto res = 1;
	while (n>1) {
		res = res*n;
		n--;
	}
	return res;
}

int main() {
	int n;
	cin >> n;
	int result = factorial(n);
	cout << result << endl;
	int g;
	return 0;
}
