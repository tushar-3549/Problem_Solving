class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if numRows == 1:
            return s
        i = 0
        d = 1
        rows = [[] for _ in range(numRows)]
        for c in s:
            rows[i].append(c)
            if i == 0:
                d = 1
            elif i == numRows-1:
                d = -1
            i += d
        ans = ''
        for i in range(numRows):
            ans += ''.join(rows[i])
        return ans
        
