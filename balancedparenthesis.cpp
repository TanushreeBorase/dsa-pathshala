// C++ program to check for balanced brackets.

#include <bits/stdc++.h>
using namespace std;

// Function to check if brackets are balanced
bool areBracketsBalanced(string expr)
{

	stack<char> temp;
	for (int i = 0; i < expr.length(); i++) {
		if (temp.empty()) {
			
    temp.push(expr[i]);
		}
		else if ((temp.top() == '(' && expr[i] == ')')
				|| (temp.top() == '{' && expr[i] == '}')
				|| (temp.top() == '[' && expr[i] == ']')) {
			
    emp.pop();
		}
		else {
			temp.push(expr[i]);
		}
	}
	if (temp.empty()) {
		
		// If stack is empty return true
		return true;
	}
	return false;
}

int main()
{
	string expr = "{()}[]";

	// Function call
	if (areBracketsBalanced(expr))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
