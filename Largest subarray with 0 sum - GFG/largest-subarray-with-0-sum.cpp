//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* You are required to complete this function */

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    { 
        vector<int>a(n+1,0);
        int y = INT_MIN;
        unordered_map<int,int>m;
        m[0]=0;
        for(int i =1;i<n+1;i++)
        {
            a[i] = a[i-1]+A[i-1];
            if(m.find(a[i])!=m.end())
            {
                y = max(y,i-m[a[i]]);
            }
            else
            m[a[i]] = i;
        }
        // for(int i=1;i<n+1;i++) cout<<a[i]<<' ';
        return (y==INT_MIN)?0:y;
        // Your code here
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends