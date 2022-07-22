class Solution {
public:
    bool backspaceCompare(string s, string t) {
          vector<char> p;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i]!='#')
            {
                p.push_back(s[i]);
            }
            else if(s[i]=='#' and i>0 and p.size()>0)
            {
                p.pop_back();
            }
        }
        string e ="";
        for(char i:p)
        {
            e+=i;
        }
        p.clear();
        for(int i = 0;i<t.length();i++)
        {
            if(t[i]!='#')
            {
                p.push_back(t[i]);
            }
            else if(i>0 and t[i]=='#' and p.size()>0)
            {
                p.pop_back();
            }
        }
        string f ="";
        for(char i:p)
        {
            f+=i;
        }
        if(f==e)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};