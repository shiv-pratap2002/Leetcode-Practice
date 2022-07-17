class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c = 0;
        while(n>0)
        {
            if(n%2==1)
            {
                c++;
            }
            n = n>>1;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int>v;
         for(int i=0;i<=n;i++)
         {
             v.push_back(hammingWeight(i));
         }
        return v;
    }
};