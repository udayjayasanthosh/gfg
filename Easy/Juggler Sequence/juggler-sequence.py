#User function Template for python3

class Solution:
    def jugglerSequence(self, n):
        # code here
        a=[]
        a.append(n)
        if(n==1):
            return a
        while(True):
            b=0
            if(n%2==0):
                b=int(n**(0.5))
            else:
                b=int(n**(1.5))
            a.append(b)
            n=b
            if(b<=1):
                break
        # a.append(1)
        return a
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())

        ob = Solution()
        arr = ob.jugglerSequence(n)
        for i in (arr):
            print(i, end=" ")
        print()

# } Driver Code Ends