class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int p;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
            {
               p=i;
               break;
            }
            else{
                p=nums.size();
            }
        }
        return p;
    }
};