//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int l=0,r=n-1;
        for(int i=0; i<n && i<=r;)
        {
            if(a[i] == 0)
            {
                 // Swap with the leftmost 0 in the array
                swap(a[l], a[i]);
                l++;
                i++;
            }
            else if(a[i] == 2)
            {
                 // Swap with the rightmost 2 in the array
                swap(a[i], a[r]);
                r--;
            }
            else
            {
                 // Skip if it's 1, as 1s are in the correct position
                i++;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends