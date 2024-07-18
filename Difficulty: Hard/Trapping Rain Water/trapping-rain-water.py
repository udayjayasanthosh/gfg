
class Solution:
    def trappingWater(self, arr,n):
        #Code here
        max=0
        a=[]
        for i in range(len(arr)):
            if max<=arr[i]:
                max=arr[i]
            a.append(max)
        max=0
        b=[]
        for j in range(len(arr)-1,-1,-1):
            if max<=arr[j]:
                max=arr[j]
            b.append(max)
        b.reverse()
        c=0
        #Code here
        for i in range(len(arr)):
            x=min(b[i],a[i])
            y=x-arr[i]
            if y>=0:
                c+=y
        return c
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            obj = Solution()
            print(obj.trappingWater(arr,n))
            
            
            T-=1


if __name__ == "__main__":
    main()



# } Driver Code Ends