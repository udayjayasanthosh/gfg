class Solution:
    def subarraySum(self, arr):
        total = 0
        mod = 2**31  # 32-bit signed integer modulo
        n = len(arr)
        for i in range(n):
            total = (total + (arr[i] * (i + 1) * (n - i)) % mod) % mod
        return total
