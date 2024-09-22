// https://www.naukri.com/code360/problems/redundant-brackets_975473


#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s) {

    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else {
            //ch ya to ')' ya koi lower case letter

            if(ch == ')') {
                bool isRedendent = true;
                while(st.top() != '(') {
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/') {
                        isRedendent = false;
                    }
                    st.pop();

                }

                if(isRedendent == true)
                    return true;
                
                st.pop();

            }

        }

    }

    return false;

}
