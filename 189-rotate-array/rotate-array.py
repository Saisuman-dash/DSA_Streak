class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k%n
        if(k>n or k<0):
            k = 1
        nums[:]=nums[n-k:]+nums[:n-k]
        