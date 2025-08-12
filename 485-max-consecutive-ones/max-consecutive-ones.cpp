class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cont = 0;
        int maxi = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                cont++;
                maxi = max(maxi, cont);
            }

            else {
                cont = 0;
            }
        }
        return maxi;
    }
};