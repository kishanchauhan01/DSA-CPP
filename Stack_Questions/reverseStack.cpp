// https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875


void insertAtBottom(stack<int> &s, int x) {
    //base case
    if(s.empty()) {
        s.push(x);
        return;
    }

    int temp = s.top();
    s.pop();

    //recursive call
    insertAtBottom(s, x);

    s.push(temp);

}

void reverseStack(stack<int> &stack) {
    //base case
    if(stack.empty()) {
        return;
    }

    int temp = stack.top();
    stack.pop();

    //recursive call
    reverseStack(stack);
    insertAtBottom(stack, temp);

}