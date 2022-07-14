class Solution {
public:
    bool isValid(string s) {
        if(s.length()<=1)
        {
            return false;
        }
        if(s[0]==')' or s[0]==']' or s[0]=='}')
        {
            return false;
        }
        if(s[s.length()-1]=='(' or s[s.length()-1]=='[' or s[s.length()-1]=='{')
        {
            return false;
        }
        stack<int>stk;
        for(int i =0;i<s.length();i++)
        {
            if(s[i]=='(' or s[i]=='[' or s[i]=='{')
            {
                stk.push(s[i]);
            }
            if(stk.size()>0)
            {
            if(s[i]==')' and stk.top()=='(')
            {
                stk.pop();
                continue;
            }
            else if(s[i]==')' and stk.top()!='(')
            {
                return false;
            }
            if(s[i]==']' and stk.top()=='[')
            {
                stk.pop();
                continue;
            }
            else if(s[i]==']' and stk.top()!='[')
            {
                return false;
            }
            if(s[i]=='}' and stk.top()=='{')
            {
                stk.pop();
                continue;
            }
            else if(s[i]=='}' and stk.top()!='{')
            {
                return false;
            }
            }
            else
            {
                return false;
            }
        }
        return (stk.empty())?true:false;
    }
};