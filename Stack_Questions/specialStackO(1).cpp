//https://www.naukri.com/code360/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465

//https://leetcode.com/problems/min-stack/description/

#include<stack>
class SpecialStack {
    stack<int> s;
    int mini = INT_MAX;
    public:
        
    void push(int data) {
        //for first element
        if(s.empty()) {
            s.push(data);
            mini = data;
        }
        else {
            if(data < mini) {
                s.push(2LL*data-mini);
                mini = data;
            }
            else {
                s.push(data);
            }
        }
    }

    void pop() {
        if(s.empty()) {
            // return -1;
        }

        int curr = s.top();
        s.pop();

        if(curr > mini) {
            // return curr;
        }
        else {
            int prevMini = mini;
            int val = 2LL*mini - curr;
            mini = val;
            // return prevMini;
        }
    }

    int top() {
        if(s.empty()) {
            return -1;
        }

        int curr = s.top();
        if(curr < mini) {
            return mini;
        }
        else{
            return curr;
        }
    }

    int getMin() {
        if(s.empty()) {
            return -1;
        }
        return mini;
    }  
};