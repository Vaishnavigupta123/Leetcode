class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum = 0;
        int maxi = INT_MIN; //initialize maxi to the smallest integer
        for(auto it : nums)
        {
            sum = sum + it;
            maxi = max(sum, maxi);
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};