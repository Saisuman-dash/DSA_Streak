class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sol =0;
        for( int val : nums){
            sol ^= val;
        }
        return sol;
    }
};