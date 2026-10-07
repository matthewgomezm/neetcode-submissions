#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(auto c: s)
        {
            if(c == '(' || c == '[' || c == '{')
                stack.push(c);
            
            else
            {
                // a closing bracket with nothing stack is a fail
                if (stack.empty()) {
                    return false;
                }
                // take the most recent unclosed bracket off the stack
                char top = stack.top();
                stack.pop();
                // has to be same bracket 
                if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{'))
                    return false;
                
            }
        }

        // anything open never got closed
        return stack.empty();
    }
};
