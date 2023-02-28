//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    static bool op(Job a,Job b)
    {
        return a.profit > b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int a = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i].dead>a) a = arr[i].dead;
        }
        //30 40 -1 20 3 90
        // cout<<a<<'\n';
        vector<int>p(a+1,-1);
        sort(arr,arr+n,op);
        for(int i=0;i<n;i++)
        {
            // cout<<arr[i].profit<<' '<<arr[i].dead<<'\n';
            int j = arr[i].dead;
            while(j>=1 and p[j]!=-1)
            {
                j--;
            }
            if(j<1) continue;
            p[j] = arr[i].profit;
        }
        // cout<<'\n';
        int sum = 0,l=0;
        for(int i=0;i<a+1;i++)
        {
            // cout<<p[i]<<' ';
            if(p[i]!=-1)
            {
                sum+=p[i];l++;
            }
            
        }
        // cout<<'\n';
        return vector<int>{l,sum};
    }
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends