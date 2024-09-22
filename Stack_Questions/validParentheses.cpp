// https://www.naukri.com/code360/problems/valid-parenthesis_795104


bool isValidParenthesis(string s)
{
    stack<char> str;

    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        if(ch == '{' || ch == '(' || ch == '[') {
            str.push(ch);
        }

        else {
            if(!str.empty()) {
                char top = str.top();

                if (ch == '}' && top == '{') {
                    str.pop();
                }
                else if(ch == ')' && top == '(') {
                    str.pop();
                }
                else if(ch == ']' && top == '[') {
                    str.pop();
                }
            }
            else{
                return false;
            }
        }
    }

    if(str.size() == 0)
        return true;
    return false;

}