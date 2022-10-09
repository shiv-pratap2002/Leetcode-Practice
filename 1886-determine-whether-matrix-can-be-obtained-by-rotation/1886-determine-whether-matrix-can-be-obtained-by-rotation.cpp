class Solution {
public:
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
        int n = matrix.size();
        
        cout<<"target -\n";
        
        for(int i = 0 ; i < n;i++)
            {
                for(int j = 0;j<n;j++)
                {
                    cout<<target[i][j]<<' ';
                }
                cout<<'\n';
            }
        for(int k=0;k<4;k++)
        {
            int l = 0,r=n-1;
            if(matrix==target) return true;
            while(l<r)
            {
            for(int i = 0;i<r-l;i++)
            {
                int t = l,b = r;
                int temp = matrix[t][l+i];
                matrix[t][l+i] = matrix[b-i][l];
                matrix[b-i][l] = matrix[b][r-i];
                matrix[b][r-i] = matrix[t+i][r];
                matrix[t+i][r] = temp;
            }
                l++;r--;
            }
            cout<<"matrix - \n";
            for(int i = 0 ; i < n;i++)
            {
                for(int j = 0;j<n;j++)
                {
                    cout<<matrix[i][j]<<' ';
                }
                cout<<'\n';
            }
            
        }
        return false;
    }
};