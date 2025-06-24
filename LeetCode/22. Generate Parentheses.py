class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        result = []
        def backtrack(cur, open, close):
            if len(cur) == 2*n:
                result.append(cur)
                return
            # akhno ( use kora jabe
            if open < n:
                backtrack(cur + '(', open + 1, close)
            if close < open:
                backtrack(cur + ')', open, close+1)

        
        backtrack("", 0, 0)
        return result

