class Solution {
public:
    int getLucky(string s, int k) {
       string new_s ="";
        for(int i=0;i<s.length();i++)
        {
            new_s+=to_string(s[i]-'a'+1);
        }
        cout<<new_s;
        for(int i =0;i<k;i++)
        {
            int sum=0;
            for(int j=0;j<new_s.length();j++)
            {
                sum+=(new_s[j] - '0');
            }
            
            new_s = to_string(sum);
        }
        int ans = stoi(new_s);
        return ans;
    }
};