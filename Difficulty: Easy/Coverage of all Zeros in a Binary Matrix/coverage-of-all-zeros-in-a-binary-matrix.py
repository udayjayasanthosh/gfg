#User function Template for python3

class Solution:
	def findCoverage(self, matrix):
		# Code here
		a=len(matrix)
		b=len(matrix[0])
		s=0
		for i in range(a):
		    for j in range(b):
		        if(matrix[i][j]==0):
		            if(i-1>=0):
		                s+=matrix[i-1][j]
		            if(j-1>=0):
		                s+=matrix[i][j-1]
		            if(i+1<a):
		                s+=matrix[i+1][j]
		            if(j+1<b):
		                s+=matrix[i][j+1]
		return s
		        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        n, m = input().split()
        n = int(n)
        m = int(m)
        matrix = []
        for _ in range(n):
            matrix.append(list(map(int, input().split())))
        ob = Solution()
        ans = ob.findCoverage(matrix)
        print(ans)

# } Driver Code Ends