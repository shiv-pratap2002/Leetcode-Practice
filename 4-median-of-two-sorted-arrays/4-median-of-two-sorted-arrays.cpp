class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,k=0;
        int a=nums1.size(),b=nums2.size();
        int n = a+b;
        vector<double>p(n);
        while(i<a and j<b)
        {
            if(nums1[i]>nums2[j])
        {
        p[k++] = nums2[j++];
        }
        else
        {
            p[k++] = nums1[i++];
        }
        }
        while(i<a)
    {
        p[k++]=nums1[i++];
    }
    while(j<b)
    {
        p[k++] = nums2[j++];
    }
        double median;
        
        if(n%2==0)
        {
            median = (p[n/2]+p[n/2-1])/2;
        }
        else
        {
            median = p[(n+1)/2-1];
        }
        return median;
    }
};