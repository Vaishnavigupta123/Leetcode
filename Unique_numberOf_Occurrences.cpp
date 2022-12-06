/*Given an array of integers arr, return true if the number of occurrences of each value 
in the array is unique or false otherwise.*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        unordered_map<int, int> m,mp;
        for(int i=0; i<arr.size(); i++)
        {
            m[arr[i]]++;
        }
        for(auto it = m.begin(); it != m.end(); it++)
        {
            mp[it->second]++;
        }
        for(auto x = mp.begin(); x != mp.end(); x++)
        {
            if((x->second) > 1)
            {
                return false;
            }
        }
        return true;
    }
};

 