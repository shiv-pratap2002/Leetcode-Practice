class Solution {
public:
    bool judgeSquareSum(int c) {
        map<int,int>m;
        for(int i=0;i<46341 and i*i<=c;i++)
        {
            m[i*i]=i;
        }
        for(auto i:m)
        {
            if(m.find(c-i.first)!=m.end())
            {
                cout<<i.second<<' '<<c-i.second;
                return true;
            }
        }
        return false;
    }
};