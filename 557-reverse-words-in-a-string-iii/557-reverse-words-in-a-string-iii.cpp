class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string p = "";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ' or i==s.length()-1)
            {
                if(i==s.length()-1) p+=s[i];
                v.push_back(p);
                p="";continue;
            }
            p+=s[i];
        }
        p="";
        for(int i=0;i<v.size();i++)
        {
            reverse(v[i].begin(),v[i].end());
            if(i==v.size()-1)
            {
                p+=v[i];continue;
            }
            p+=v[i]+' ';
        }
        return p;
    }
};