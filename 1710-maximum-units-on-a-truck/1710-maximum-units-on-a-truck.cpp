class Solution {
public:
    static bool rock(vector<int>s,vector<int>o)
    {
        return s[1]>o[1];
    }
    int maximumUnits(vector<vector<int>>& b, int truckSize) {
        sort(b.begin(),b.end(),rock);
        for(int i=0;i<b.size();i++)
        {
            for(int j=0;j<b[i].size();j++)
            {
                cout<<b[i][j]<<' ';
            }
            cout<<'\n';
        }
        int i=0;
        int sum=0;
        while(i<b.size() and truckSize>b[i][0])
        {
            truckSize-=b[i][0];
            sum+=b[i][1]*b[i][0];
            i++;
        }
        if(truckSize>0 and i<b.size())
        {
            sum+=truckSize*b[i][1];
        }
        cout<<truckSize<<'\n';
        return sum;
    }
};