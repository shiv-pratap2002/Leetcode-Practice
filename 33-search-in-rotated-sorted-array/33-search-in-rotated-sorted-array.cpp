class Solution {
public:
    int bin(vector<int>& nums,int start,int end,int t)
    {
        while (start<=end){
        int mid = start+(end-start)/2;
        if(t<nums[mid]){ //left
            end = mid -1;
        }
        else if(t>nums[mid]){
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
    }
    int bin_sear(vector<int>& nums,int l,int r)
    {
        if(l>r)
        {
            return -1;
        }
        else
        {
            int mid=(l+r)/2;
            if(mid<r and nums[mid]>nums[mid+1])
            {
                return mid;
            }
            else if(mid>l and nums[mid]<nums[mid-1])
            {
                return mid-1;
            }
            else if(nums[mid]<=nums[l])
            {
                return bin_sear(nums,l,mid-1);
            }
            else
            {
                return bin_sear(nums,mid,r);
            }
        }
    }
    int search(vector<int>& nums, int target) {
       int c = bin_sear(nums,0,nums.size()-1);
        cout<<c<<'\n';
        if(c==-1)
        {
            return bin(nums,0,nums.size()-1,target);
        }
        else
        {
            if(nums[c]==target)
            {
                return c;
            }
            if(target>=nums[0])
            {
                return bin(nums,0,c-1,target);
            }
            return bin(nums,c+1,nums.size()-1,target);
        }
    }
};