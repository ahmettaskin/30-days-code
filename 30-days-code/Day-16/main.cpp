#include <iostream>
#include <string>

using namespace std;


int main() {

	string S;
	cin >> S;

	try 
	{
		auto i = stoi(S);
		cout << i;		
	}
	catch (...) 
	{
		cout << "Bad String";	
	}
	
	return 0;
}