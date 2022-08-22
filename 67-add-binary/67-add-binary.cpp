class Solution {
public:
    
    string addBinary(string a, string b) {
        string p = (a.length()>b.length())?a:b;
        string q = (a.length()>b.length())?b:a;
        while(q.length()<p.length())
        {
            q = "0"+q;
        }
        string ans = "";
        bool carry = false;
        for(int i=q.length()-1;i>=0;i--)
        {
            char add;
            if(q[i]=='1' and p[i]=='1')
            {
                if(carry) add = '1';
                else add='0';
                ans = add+ans;
                carry = true;
            }
            else if(q[i] =='1' or p[i]=='1')
            {
                if(carry) 
                {
                    add = '0';
                    carry = true;
                }
                else
                {
                    add='1';
                    carry = false;
                }
                ans = add+ans;
            }
            else{
                if(carry) add='1';
                else add='0';
                ans = add+ans;
                carry=false;
            }
        }
        if(carry) ans = "1"+ans;
        return ans;
    }
};