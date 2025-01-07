//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int sum) {
        // Complete the function
        int count=0;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]].push_back(i);
        }
        for(int i=0;i<arr.size();i++)
        {
            int a=sum-arr[i];
            vector<int>b=mp[a];
            int size=b.size();
            int z=0;
            for(int j=0;j<size;j++)
            {
                if(b[j]<=i)
                {
                    z+=1;
                }
                else
                {
                    break;
                }
            }
            count+=size-z;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends