//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int a[m-l+1],b[r-m];
        for(int i=0;i<m-l+1;i++) a[i] =  arr[l+i];
        for(int i=0;i<r-m;i++) b[i] = arr[m+1+i];
        // int c[r-l+1];
        int i=0,j=0,k=l;
        while(i<m-l+1 and j<r-m)
        {
            if(a[i]<=b[j]) arr[k++] = a[i++];
            else arr[k++] = b[j++];
        }
        while(i<m-l+1) arr[k++] = a[i++];
        while(j<r-m) arr[k++] = b[j++];
        // Your code here
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
        //code here
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends