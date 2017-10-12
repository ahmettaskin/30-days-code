#include <iostream>
#include <math.h>
#include <vector>


using namespace std;




class Difference {
private:

	vector<int> elements;

public:
	int maximumDifference;
	
	Difference(vector<int> a) {
		this->elements = a;

	}

	void computeDifference() {
		int maxDiff = 0;
		int currDiff = 0;
		for (int i = 0; i<elements.size(); i++) {
			for (int j = 0; j<elements.size(); j++) {
				currDiff = abs(elements[i] - elements[j]);
				if (currDiff > maxDiff) {
					maxDiff = currDiff;
				}
			}
		}
		this->maximumDifference = maxDiff;
	}
};




int main() {
	int N;
	cin >> N;

	vector<int> a;
	
	for (int i = 0; i < N; i++) {
		int e;
		cin >> e;
		a.push_back(e);
	}


	Difference d(a);

	d.computeDifference();

	cout << d.maximumDifference;

	
	return 0;
}
