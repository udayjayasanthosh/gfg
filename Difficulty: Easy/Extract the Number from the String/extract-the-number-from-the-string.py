class Solution:
    def ExtractNumber(self,sentence):
        #code here
        a=sentence.split()
        maxi=0
        for i in a:
            c=""
            for j in i:
                if j<='8' and j>='0':
                    c+=j
                else:
                    c=""
                    break
            if(len(c)!=0):
                a=int(c)
                if(a>maxi):
                    maxi=a
        if maxi==0:
            return -1
        else:
            return maxi

#{ 
 # Driver Code Starts
t = int(input())
for _ in range(t):
    S = input()
    ob = Solution()
    ans = ob.ExtractNumber(S)
    print(ans)

# } Driver Code Ends