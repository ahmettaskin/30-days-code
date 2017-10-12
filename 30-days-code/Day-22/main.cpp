#include <iostream>

using namespace std;

#include <iostream>
#include <cstddef>

using namespace std;

class Node {
public:
	int data;
	Node *left;
	Node *right;
	Node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};
class Solution {
public:
	Node* insert(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		}
		else {
			Node* cur;
			if (data <= root->data) {
				cur = insert(root->left, data);
				root->left = cur;
			}
			else {
				cur = insert(root->right, data);
				root->right = cur;
			}

			return root;
		}
	}
	int getLongestHight(Node* right, Node* left, int currMax)
	{
		if (right == NULL) {
			currMax;
		}
		else {
			return getLongestHight(right->right, right->left,currMax);
		}
		if (left == NULL) {
			return currMax;
		}
		else {
			return getLongestHight(left->right, left->left, currMax);
		}
	}
	int getHeight(Node* root) {
		//Write your code here
		if (!root) { return -1; }
		int right_height = getHeight(root->right);
		int left_height = getHeight(root->left);
		if (right_height > left_height) { return (right_height + 1); }
		return (left_height + 1);
	}
}; //End of Solution

int main() {
	Solution myTree;
	Node* root = NULL;
	int t;
	int data;

	cin >> t;

	while (t-- > 0) {
		cin >> data;
		root = myTree.insert(root, data);
	}
	int height = myTree.getHeight(root);
	cout << height;

	return 0;
}