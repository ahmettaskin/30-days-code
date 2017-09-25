#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int> map;



	for (int i = 0; i < n; i++) {
		string s;
		int n;
		cin >> s;
		cin >> n;
		map.insert(std::pair<string,int>(s, n));
	}


	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		if (map[s]) {
			cout << "Not found" << endl;
		}
		else {
			cout << s << "=" << map.at(s) << endl;
		}
	}

	return 0;
}