class Solution:
    def pivotInteger(self, n: int) -> int:
        total = 0 #全部加起來的數字

        #第一輪先算total
        for i in range(1,n+1):#i: 1 2 3 ... n
            total += i#先算出全部總和
        #接下來再做第二輪，檢查左邊加起來是多少
        left = 0
        for i in range(1,n+1):
            left+=i
            if left + left - i == total:return i

        return -1

        