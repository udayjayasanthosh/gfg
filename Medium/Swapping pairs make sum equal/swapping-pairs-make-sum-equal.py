class Solution:
    def findSwapValues(self,a, n, b, m):
        # Your code goes here
        sa=sum(a)
        sb=sum(b)
        if(sa==sb):
            return 1
        i=0
        j=0
        a.sort()
        b.sort()
        while(i<n and j<m):
            saa=sa-a[i]+b[j]
            sbb=sb-b[j]+a[i]
            if(saa==sbb):
                return 1
            if(saa>sbb):
                i+=1
            else:
                j+=1
        return -1

#{ 
 # Driver Code Starts
if __name__ == '__main__': 
    
    
    t=int(input())
    for _ in range(0,t):
        l=list(map(int,input().split()))
        n=l[0]
        m=l[1]
        a = list(map(int,input().split()))
        b = list(map(int, input().split()))
        ob = Solution()
        print(ob.findSwapValues(a,n,b,m))
# } Driver Code Ends