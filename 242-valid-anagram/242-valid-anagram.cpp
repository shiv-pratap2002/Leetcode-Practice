class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        map<char,int>p;
        for(int i=0;i<t.length();i++)
        {
            p[t[i]]++;
        }
        for(auto i:m)
        {
            if(i.second!=p[i.first])
            {
                return false;
            }
        }
        return true;
    }
};