class KthLargest {
public:
    priority_queue<int>y;
    int o;
    KthLargest(int k, vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            nums[i]*=(-1);
        }
        priority_queue<int>z(nums.begin(),nums.end());
        while(z.size()>k)
        {
            z.pop();
        }
        cout<<z.size();
         y=z;
        o=k;
    }
    
    int add(int val) {
        y.push(-val);
        if(y.size()>o)
        {
            y.pop();
        }
        return -y.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */