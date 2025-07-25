class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int> numb(nums.begin(),nums.end());
        int n = numb.size();
        int sum = 0;
        int mx = INT_MIN;

        for(int val : numb)
        {
          

            mx = max(mx,val);

            if(val < 0)
            {
                val = 0;
            }
            sum += val;

        }
        if(sum == 0)
        {
            return mx;
        }
        return sum;
    }
};