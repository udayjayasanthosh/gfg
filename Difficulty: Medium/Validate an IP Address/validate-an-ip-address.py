#User function Template for python3
class Solution:
    def isValid(self, str):
        #code here
        a=str.split(".")
        if len(a)<4:
            return False
        for i in a:
            try:
                b=int(i)
                if(b<=255 and b>=0):
                    continue
                else:
                    return False
            except:
                return False
        return True



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(0, t):
        s = input()
        ob = Solution()
        if (ob.isValid(s)):
            print("true")
        else:
            print("false")

# } Driver Code Ends