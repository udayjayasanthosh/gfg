# User function Template for python3

class Solution:
    # Complete this function
    
    #Function to find equilibrium point in the array.
    def equilibriumPoint(self,A, N):
        # Your code here
        if(N==1):
            return 1
        if(N==2 and A[0]==1 and A[1]==0):
            return 1
        sum=0
        for i in A:
            sum+=i
        a=-1
        b=0
        for i in range(N-1):
            b+=A[i]
            c=sum-b-A[i+1]
            if(b==c):
                return i+1+1
        return a
            


#{ 
 # Driver Code Starts
# Initial Template for Python 3

import math


def main():

    T = int(input())

    while(T > 0):

        N = int(input())

        A = [int(x) for x in input().strip().split()]
        ob=Solution()

        print(ob.equilibriumPoint(A, N))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends