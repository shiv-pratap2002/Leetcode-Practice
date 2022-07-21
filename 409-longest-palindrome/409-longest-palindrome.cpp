class Solution {
public:
    int longestPalindrome(string s) {
        int size = s.length();
        if(size==1)
        {
            return 1;
        }
        if(size==2)
        {
            if(s[0]==s[1])
            {
                return 2;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            int j=0;
            int len=0;
            map<char,int>l;
            for(int i=0;i<size;i++)
            {
                l[s[i]]++;
            }
            for(auto i : l)
            {
                if(i.second==size)
                {
                    return size;
                }
                if(i.second>=1)
                {
                    len = len + 2*(i.second/2);
                    if(i.second%2!=0)
                    {
                        if(j==0)
                        {
                            len+=1;
                            j++;
                        }
                    }
                }
            }
            return len;
        }
    }
};