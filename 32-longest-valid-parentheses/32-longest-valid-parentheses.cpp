class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.length()<=1)
        {
            return 0;
        }
        stack<int>p;
        p.push(-1);
        int count=0;
        for(int i = 0 ; i < s.length();i++)
        {
            if(s[i]=='(')
            {
                p.push(i);
            }
            else
            {
                if(!p.empty())
                {
                    p.pop();
                }
                if(!p.empty())
                {
                    count = max(i-p.top(),count);
                }
                else
                {
                    p.push(i);
                }
            }
        }
        return count;
    }
};