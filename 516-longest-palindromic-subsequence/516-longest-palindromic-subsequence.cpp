class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string b = s;
        reverse(s.begin(),s.end());
         int m = s.length(),n=b.length();
    vector<int>p;
    int v[m+1][n+1];
    for(int i = 0;i<=m;i++)
    {
        for(int j = 0;j<=n;j++)
        {
            if(i==0 or j==0)
            {
                v[i][j]=0;
            }
            else if(s[i-1] == b[j-1])
            {
                v[i][j] = 1+v[i-1][j-1];                
            }
            else {
            v[i][j] =max(v[i-1][j],v[i][j-1]);
            }
        }
    }
        return v[m][n];
    }
};