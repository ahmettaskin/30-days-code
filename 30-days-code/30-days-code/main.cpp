#include <iostream>
#include <string>

using namespace std;

int main() {
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";

	// Declare second integer, double, and String variables.
	int i_c;
	double d_c;
	string s_c;
	string tmp;
	// Read and savean integer, double, and String to your variables.

	getline(cin, tmp);
	i_c = stoi(tmp);
	getline(cin, tmp);
	d_c = stod(tmp);
	getline(cin, s_c);
	// Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

	// Print the sum of both integer variables on a new line.
	printf("%i\n", i + i_c);
	// Print the sum of the double variables on a new line.
	printf("%.1f\n", d + d_c);
	// Concatenate and print the String variables on a new line
	// The 's' variable above should be printed first.
	cout << s + s_c << endl;

	return 0;
}
