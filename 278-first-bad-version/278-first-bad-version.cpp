// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int low = 1,high = n,mid,c;
        if(isBadVersion(1)==true)
        {
            return 1;
        }
        if(isBadVersion(n)==true and isBadVersion(n-1)==false)
        {
            return n;
        }
        while(low<=high)
        {
            mid = low+(high-low)/2;
            if(isBadVersion(mid))
            {
                c =  mid;
                high = mid-1;
                
            }
            else
            {
                low = mid+1;
            }
        }
        return c;
    }
};