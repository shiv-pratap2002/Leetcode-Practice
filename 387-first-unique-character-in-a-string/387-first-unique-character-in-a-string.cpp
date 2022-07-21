class Solution {
public:
    int firstUniqChar(string s) {
        
        map<char,int>m;
        map<char,int>l;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            if(m[s[i]]<2)
            {
                l[s[i]] = i;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(m[s[i]]==1)
            {
                return l[s[i]];
            }
        }
        cout<<m['l'];
        return -1;
    }
};