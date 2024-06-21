#User function Template for python3


class Solution:
    def compareFrac (self, str):
        s=str.split(",")
        a=s[0].split("/")
        b=s[1].split("/")
        c=int(a[0])/int(a[1])
        d=int(b[0])/int(b[1])
        # print(type(c))
        # print(c,d)
        if(c>d):
            return s[0]
        elif(d>c):
            return b[0][1:]+'/'+b[1]
        else:
            return "equal"
#{ 
 # Driver Code Starts
#Initial Template for Python 3
import re

if __name__ == '__main__':
    ob = Solution()
    t = int(input())
    for _ in range(t):
        str = input()
        print(ob.compareFrac(str))

# } Driver Code Ends