class Solution {
public:
    bool isSafe(int col, int row,vector<string>board,int n)
    {
        int dcol = col;
        int drow = row;
        while(row>=0 and col>=0)
        {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=drow; col=dcol;
        while(col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
        }
        col = dcol;
        while(row<n and col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
            row++;
        }
        return true;
    }
    void nqueen(int col,int n,vector<string>&board,vector<vector<string>>& ans)
    {
        if(col==n)
        {
            ans.push_back(board);
        }
        for(int row=0;row<n;row++)
        {
            if(isSafe(col,row,board,n))
            {
                board[row][col] = 'Q';
                nqueen(col+1,n,board,ans);
                board[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>b;
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            b.push_back(s);
        }
        nqueen(0,n,b,ans);
        return ans.size();
    }
};