#User function Template for python3

class Solution:
    ##Complete this function
    # Function to check if given number n is a power of two.
    def isPowerofTwo(self,n : int ) -> bool:
        ##Your code herea=list(bin(n))
        a=list(bin(n).lstrip('-0b'))
        # print(a)
        sums=0
        for i in a:
            sums+=int(i)
        if(sums==1):
            return True
        return False
        
        
            
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math


def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        ob=Solution()
        if ob.isPowerofTwo(n):
            print("YES")
        else:
            print("NO")
        
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends