class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actsum =0;
        int expsum =n*(n+1)/2;
        for(int i=0;i<n;i++)
        {
            actsum += nums[i];
        }
        return expsum-actsum;
    }
};