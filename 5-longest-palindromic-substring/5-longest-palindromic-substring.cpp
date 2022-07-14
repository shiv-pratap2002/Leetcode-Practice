class Solution {
public:
    void longestcommon(string s,int l,int r,int &resLen,string &res)
    {
        while(l>=0 and r<s.length() and s[l]==s[r])
        {
            if(r-l+1>resLen)
            {
                resLen = r-l+1;
                res = s.substr(l,resLen);
            }
            l--;r++;
        }
    }
    string longestPalindrome(string s) {
        string res="";
        int resLen=0;
        for(int i=0;i<s.length();i++)
        {
            int l=i,r=i;
            longestcommon(s,l,r,resLen,res);
            longestcommon(s,l,r+1,resLen,res);
        }
        return res;
    }
};