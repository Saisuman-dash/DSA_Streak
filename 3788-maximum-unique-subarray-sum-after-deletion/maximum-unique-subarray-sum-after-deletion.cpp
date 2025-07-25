class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum = 0;
        int mx = -100 ;

        vector<int> Seen(101 , 0) ;

        for(int val : nums) {
            mx = max(mx , val) ;
            if(val < 0) continue ;
            if(!Seen[val]) sum += val ;
            Seen[val] = 1 ;
        }

        if(sum == 0) sum = mx ;

        return sum;
    }
};