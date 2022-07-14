class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        int low = 0,high = a.size()-1,mid;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(a[mid] == target)
            {
                return mid;
            }
            else if(a[mid]<target)
            {
                low = mid+1;
            }
            else if(a[mid]>target)
            {
                high = mid-1;
            }
        }
        return high+1;
    }
};