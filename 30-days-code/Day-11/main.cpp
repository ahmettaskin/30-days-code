#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<vector<int>> v(6, vector<int>(6));


	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> v[i][j];
		}
	}

	auto max = -7 * 9;
	auto sum = 0;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j< 6; j++) {
			if (i + 2 < 6 && j + 2 < 6) {
				sum = v[i][j] + v[i][j + 1] + v[i][j + 2] + v[i + 1][j + 1] + v[i + 2][j] + v[i + 2][j + 1] + v[i + 2][j + 2];
				if (sum > max) {
					max = sum;
				}
			}
		}
	}

	cout << max;
	return 0;
}