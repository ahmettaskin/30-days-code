#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	double meatCost;
	int tipPercent, taxPercent;

	cin >> meatCost >> tipPercent >> taxPercent;
	
	auto tip = meatCost * tipPercent / 100;
	auto tax = meatCost * taxPercent / 100;

	auto totalcost = meatCost + tip + tax;
	
	cout << "The total meal cost is " << round(totalcost) << " dollars." << endl;

	return 0;
}