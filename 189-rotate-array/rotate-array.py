class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k%n
        def rev(i,j):
            while(i<j):
                nums[i],nums[j]=nums[j],nums[i]
                i += 1
                j -= 1
        rev(0,n-1)
        rev(0,k-1)
        rev(k,n-1)