#include <iostream>
#include <string>
#include <stack>
#include <queue>


using namespace std;


class Solution {
public:
		
	stack<char> s;
	queue<char> q;
	// stack
	void pushCharacter(char c) {
		s.push(c);
	}
	char popCharacter() {
		char tmp = s.top();
		s.pop();
		return tmp;
	}
	// queueu
	void enqueueCharacter(char c) {	
		q.push(c);
	}
	
	char dequeueCharacter() {
		char tmp = q.front();
		q.pop();
		return tmp;
	}
};


int main() {
	// read the string s.
	string s = "racecar";

	// create the Solution class object p.
	Solution obj;

	// push/enqueue all the characters of string s to stack.
	for (int i = 0; i < s.length(); i++) {
		obj.pushCharacter(s[i]);
		obj.enqueueCharacter(s[i]);
	}

	bool isPalindrome = true;

	// pop the top character from stack.
	// dequeue the first character from queue.
	// compare both the characters.
	for (int i = 0; i < s.length() / 2; i++) {
		if (obj.popCharacter() != obj.dequeueCharacter()) {
			isPalindrome = false;

			break;
		}
	}

	// finally print whether string s is palindrome or not.
	if (isPalindrome) {
		cout << "The word, " << s << ", is a palindrome.";
	}
	else {
		cout << "The word, " << s << ", is not a palindrome.";
	}

	return 0;
}