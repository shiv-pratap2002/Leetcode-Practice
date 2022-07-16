class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int b = m.size();
        int c = m[0].size();
        if(b==1 and c==1)
        {
            if(m[0][0]==target)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        vector<int>::iterator t,p;
        int y;
        for(int i = 0;i<b;i++)
        {
            if(binary_search(m[i].begin(),m[i].begin()+c,target))
            {
                return true;
            }
            else
            {
                if(i==b-1 and upper_bound(m[i].begin(),m[i].end(),target)==m[i].end())
                {
                    return false;
                }
                c = upper_bound(m[i].begin(),m[i].end(),target)-m[i].begin();
            }
        }
        return false;
    }
};