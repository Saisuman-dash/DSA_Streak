class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          vector<pair<int, int>> vp;
        for (int i = 0; i < nums.size(); i++)
            vp.push_back({nums[i], i});
        
        sort(vp.begin(), vp.end());
        int l = 0, r = vp.size() - 1;
        
        while (l < r) {
            int sum = vp[l].first + vp[r].first;
            if (sum == target)
                return {vp[l].second, vp[r].second};
            else if (sum < target)
                l++;
            else
                r--;
        }
        return {};
    }
};
       
