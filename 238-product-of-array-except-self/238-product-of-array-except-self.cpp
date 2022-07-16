class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int N= nums.size();
        vector<int>l(N);
        vector<int>p(N);
        l[0]=1;
        for(int i = 1;i<N;i++)
        {
            l[i] = (l[i-1]*nums[i-1]);
        }
        p[N-1] = 1;
        for(int i = N-2;i>=0;i--)
        {
            p[i] = (p[i+1]*nums[i+1]);
        }
        vector<int>e(N);
        for(int i=0;i<N;i++)
        {
                e[i] = (l[i]*p[i]);
        }
        return e;
    }
};