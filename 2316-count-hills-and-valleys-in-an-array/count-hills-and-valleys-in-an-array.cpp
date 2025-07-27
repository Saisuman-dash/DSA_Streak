class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        int l;
        int r ;
        int h=0;
        int v=0;
        for(int i=1;i<n-1;i++)
        {
            int l= i-1;
            int r = i+1; 
            while(r<n-1 && nums[i]==nums[r])
            {
                r++;
            }
            while(l>0 && nums[i]==nums[l])
            {
                continue;
            }
            if(nums[i]>nums[l] && nums[i]>nums[r])
            {
                h++;
            }
            if(nums[i]<nums[l] && nums[i]<nums[r])
            {
                v++;
            }
        }
        return h+v;
    }
        
};
