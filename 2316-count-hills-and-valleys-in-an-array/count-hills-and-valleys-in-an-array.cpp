class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n =nums.size();
        int h=0;
        int v=0;
        vector<int> numss;
        numss.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])
            {
                numss.push_back(nums[i]);
            }
        }
        for (int i = 1; i < numss.size() - 1; i++) 
        {
                if (numss[i] > numss[i - 1] && numss[i] > numss[i + 1]) {
                    h++;
                }
                if (numss[i] < numss[i - 1] && numss[i] < numss[i + 1]) {
                    v++;
                }
        }
        return h+v;
    }
        
};
