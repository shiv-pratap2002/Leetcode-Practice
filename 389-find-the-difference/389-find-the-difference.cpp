class Solution {
public:
    char findTheDifference(string s, string t) {
        // map<char,int>so;
        // map<char,int>to;
        // if(s.length()==0)
        // {
        //     return t[0];
        // }
        // for(int i =0;i<s.length();i++)
        // {
        //     so[s[i]]++;
        // }
        // for(int i=0;i<t.length();i++)
        // {
        //     to[t[i]]++;
        //     if(so.find(t[i])==so.end())
        //     {
        //         return t[i];
        //     }
        // }
        // for(int i=0;i<t.length();i++)
        // {
        //     if(to[t[i]]>so[t[i]])
        //     {
        //         return t[i];
        //     }
        // }
        // return t[s.length()-1];
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=t[i])
            {
                return t[i];
            }
        }
        return t[t.length()-1];
    }
};