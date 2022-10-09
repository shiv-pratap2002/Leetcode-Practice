class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        int i = 0 , j = 0 ;
        vector<int>l;
        while(i<m and j<n)
        {
            if(nums1[i]<nums2[j])
            {
                l.push_back(nums1[i]);i++;
            }
            else{
                l.push_back(nums2[j]);j++;
            }
        }
        while(i<m)
        {
            l.push_back(nums1[i]);i++;
        }
        while(j<n)
        {
            l.push_back(nums2[j]);j++;
        }
        nums1 = l;
    }
};