#User function Template for python3
class Solution:
    def swapNibbles (self, n):
        # code here 
        a=[]
        while(n>0):
            if(n&1==1):
                a.append(1)
            else:
                a.append(0)
            n=n>>1
        l=len(a)
        while(l<8):
            a.append(0)
            l+=1
        a.reverse()
        b=a[4:8]
        for i in range(0,4):
            b.append(a[i])
        l=7
        s=0
        for i in range(0,8):
            if(b[i]==1):
                s+=2**l
            l-=1
        return s
                
        
        
        
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())

        ob = Solution()
        print(ob.swapNibbles(n))

# } Driver Code Ends