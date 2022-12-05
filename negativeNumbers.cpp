#include <bits/stdc++.h>
using namespace std;

void searchNegative_number(vector<int> &arr)
{
    int count=0;
    for(int i=0; i < arr.size(); i++)
    {
           if(arr[i]<0)
           {
              count++;
           }
    }
    cout<<"number of negatives = "<<count;
}
int main()
{
    vector<int> arr={-1, 4, -3, 5, 3, -7};
    searchNegative_number(arr);
}