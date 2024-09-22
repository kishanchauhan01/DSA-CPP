// https://www.naukri.com/code360/problems/sort-a-stack_985275


#include <bits/stdc++.h>

void sortedInsert(stack<int> &s, int temp) {
	//base case
	if(s.empty() || s.top() < temp) {
		s.push(temp);
		return;
	}

	int num = s.top();
	s.pop();

	//recursive call
	sortedInsert(s, temp);

	s.push(num);

}

void sortStack(stack<int> &stack)
{
	//base case
	if(stack.empty()) {
		return;
	}

	int temp = stack.top();
	stack.pop();

	//recursive call
	sortStack(stack);

	sortedInsert(stack, temp);

}