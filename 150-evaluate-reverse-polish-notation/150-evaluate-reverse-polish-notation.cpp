class Solution {
public:
     bool isOperator(string c)
    {
        if(c=="*" or c=="-" or c=="+" or c=="/")
        {
            return true;
        }
        return false;
    }
    int evalRPN(vector<string>& tokens) {
        stack<string>s;
        for(int i=0;i<tokens.size();i++)
        {
            if(!isOperator(tokens[i]))
            {
                s.push(tokens[i]);
            }
            else
            {
                int op2 = stoi(s.top());
                s.pop();
                int op1 = stoi(s.top());
                s.pop();
                int ans;
                if( tokens[i]=="*")
                        ans = op1*op2;
                if(tokens[i]=="+")
                        ans=op1+op2;
                 if(tokens[i]=="-")
                        ans=op1-op2;
                 if(tokens[i]=="/")
                        ans=op1/op2;
                s.push(to_string(ans));
                }
            }
        return stoi(s.top());
        }
};