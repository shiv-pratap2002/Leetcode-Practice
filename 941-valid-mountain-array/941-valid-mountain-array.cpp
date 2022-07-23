class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int max = max_element(arr.begin(),arr.end())-arr.begin();
        if(max==0 or max==arr.size()-1)
        {
            return false;
        }
        for(int i=0;i<max;i++)
        {
            if(arr[i+1]<=arr[i])
            { 
                return false;
            }
        }
        
        for(int i=max;i<arr.size()-1;i++)
        {
            if(arr[i+1]>=arr[i])
            {
                return false;
            }
        }
        return true;
    }
};