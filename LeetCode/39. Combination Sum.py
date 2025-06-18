class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        nums = candidates
        n = len(nums)
        res, sol = [], []
        def backtrack(i, cur_sum):
            if cur_sum == target:
                res.append(sol[:])
                return
            if cur_sum > target or i == n:
                return
            backtrack(i+1, cur_sum)

            sol.append(nums[i])
            backtrack(i, cur_sum+nums[i])
            sol.pop()
        
        backtrack(0,0)
        return res
