class Solution {
public:
    int longestcommon(string s,int l,int r)
    {
        int cnt=0;
        while(l>=0 and r<s.length() and s[l]==s[r])
        {
            cnt++;
            l--;r++;
        }
        return cnt;
    }
    int countSubstrings(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            int l=i,r=i;
            sum+=longestcommon(s,l,r)+longestcommon(s,l,r+1);
        }
        return sum;
    }
};