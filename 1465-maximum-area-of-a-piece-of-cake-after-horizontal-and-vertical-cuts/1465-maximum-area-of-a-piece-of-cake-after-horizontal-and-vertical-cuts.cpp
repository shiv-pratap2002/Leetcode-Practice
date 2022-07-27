class Solution {
public:
    int maxdiff(vector<int>h,int y)
    {
        int hdif= h[0];
        for(int i=0;i<h.size()-1;i++)
        {
            if(hdif<h[i+1]-h[i])
            {
                hdif = h[i+1]-h[i];
            }
        }
        return max(hdif,y-h[h.size()-1]);
    }
    int maxArea(int h, int w, vector<int>& ho, vector<int>& v) {
        sort(ho.begin(),ho.end());
        sort(v.begin(),v.end());
        int hdif = maxdiff(ho,h);
        int vdif = maxdiff(v,w);
        int ans =  (1LL*hdif*vdif)%(1000000007);
        return ans;
    }
};