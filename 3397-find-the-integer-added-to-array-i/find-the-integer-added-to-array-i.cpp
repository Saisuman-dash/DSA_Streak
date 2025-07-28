class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int ans = nums2[0]-nums1[0];
        // if(ans<0)
        // {
        //     ans *= -1;
        // }
        return ans;
    }
};