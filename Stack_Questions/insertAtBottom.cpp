//https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166


#include <bits/stdc++.h>

void solve(stack<int>& s, int x) {
    //base case
    if(s.empty()) {
        s.push(x);
        return;
    }

    int temp = s.top();
    s.pop();

    //recursive call
    solve(s, x);

    s.push(temp);

}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}
