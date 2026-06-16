class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n = len(nums)
        freq = {}
        for i in range (0,n):
            freq[nums[i]] = freq.get(nums[i],0) + 1
            if(freq[nums[i]]>1):
                return True
        return False
            

        

        