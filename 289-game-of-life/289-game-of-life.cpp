class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        map<pair<int,int>,int> mo;
        for(int i =0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int ones = 0; 
                if(i+1<m)
                {
                    if(board[i+1][j]==1)
                    {
                        ones++;
                    }
                }
                if(j+1<n)
                {
                    if(board[i][j+1]==1)
                    {
                        ones++;
                    }
                }
                if(i-1>=0)
                {
                    if(board[i-1][j]==1)
                    {
                        ones++;
                    }
                }
                if(j-1>=0)
                {
                    if(board[i][j-1]==1)
                    {
                        ones++;
                    }
                }
                if(i+1<m and j+1<n)
                {
                    if(board[i+1][j+1]==1)
                    {
                        ones++;
                    }
                }
                if(i-1>=0 and j-1>=0)
                {
                    if(board[i-1][j-1]==1)
                    {
                        ones++;
                    }
                }
                if(i-1>=0 and j+1<n)
                {
                    if(board[i-1][j+1]==1)
                    {
                        ones++;
                    }
                }
                if(i+1<m and j-1>=0)
                {
                    if(board[i+1][j-1]==1)
                    {
                        ones++;
                    }
                }
                cout<<ones<<'\n';
                mo[make_pair(i,j)] = ones;
            }
        }
            vector<vector<int>>v = board;
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(v[i][j]==1)
                    {
                    if(mo[make_pair(i,j)]<2)
                    {
                        board[i][j] = 0;
                    }
                    if((mo[make_pair(i,j)]>3))
                    {
                        board[i][j] = 0;
                    }
                    }
                    else{
                    if((mo[make_pair(i,j)]==3))
                    {
                        board[i][j]=1;
                    }
                    }
                }
        }
    }
};