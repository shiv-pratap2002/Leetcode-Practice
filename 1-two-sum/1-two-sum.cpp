class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int>c;
        map<int,int>map;
                for(int i=0;i<nums.size();i++)
                {
//                     if(map.find(nums[i])!=map.end())
//                     {
                        
//                     }
                    map[nums[i]]=i;
                    
                }
        for(auto i:map)
        {
            cout<<i.first<<' '<<i.second<<'\n';
        }
        for(int i=0;i<nums.size();i++)
        {
            int l=nums[i];
            if(map.find(target-l)!=map.end())
            {
                c.push_back(i);
                pair<int, int> pa= *map.find(target-l);
                // cout<<pa.first<<' '<<pa.second<<'\n';
                if(pa.second!=i)//to make sure both indices arent same
                {
                c.push_back(pa.second);
                break;
                }
                c.pop_back();
            }
            
        }
        
        return c;
    }
};