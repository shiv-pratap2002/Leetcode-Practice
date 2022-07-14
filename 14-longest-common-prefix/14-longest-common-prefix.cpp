class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if(strs.size()==0)
        {
            return "";
        }
        string g = "";
        for(int i = 0 ;i < strs[0].length();i++)
        {
            int l=0;
            char c = strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(i<strs[j].length() and strs[j][i]==c)
                {
                    l++;
                }
                if(strs[j][i]!=c)
                {
                    return g;
                }
            }
            if(l==strs.size()-1)
            {
                g+=c;
                cout<<g;
            }
        }
        return g;
    }
};