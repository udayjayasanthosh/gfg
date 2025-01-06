//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        // int maxi=INT_MAX;
        // int abso=0;
        // vector<vector<int>>v;
        // for(int i=0;i<arr.size()-1;i++)
        // {
        //     for(int j=i+1;j<arr.size();j++)
        //     {
        //         vector<int>ans;
        //         if(abs(target-(arr[i]+arr[j]))<=maxi)
        //         {
        //             maxi=abs(target-(arr[i]+arr[j]));
        //             abso=abs(arr[i]-arr[j]);
        //             ans={maxi,abso,arr[i],arr[j]};
        //             v.push_back(ans);
        //         }
        //     }
        // }
        // sort(v.begin(),v.end());
        // int h=v[0][1];
        // vector<int>ans;
        // ans={v[0][2],v[0][3]};
        // for(int i=1;i<v.size();i++)
        // {
        //     if(v[0][0]==v[i][0])
        //     {
        //         // cout<<h<<v[i][1]<<endl;
        //         if(h<v[i][1])
        //         {
        //         ans={v[i][2],v[i][3]};
        //         }
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
        // sort(arr.begin(),arr.end());
        // int maxi=INT_MAX;
        // int absolute=0;
        // vector<int>ans;
        // for(int i=0;i<arr.size()-1;i++)
        // {
        //     for(int j=i+1;j<arr.size();j++)
        //     {
        //         if(abs(target-(arr[i]+arr[j]))<=maxi)
        //         {
        //             maxi=abs(target-(arr[i]+arr[j]));
        //             if(absolute<arr[j]-arr[i])
        //             {
        //                 ans={arr[i],arr[j]};
        //                 absolute=arr[j]-arr[i];
        //             }
        //         }
        //     }
        // }
        // return ans;
        int n = arr.size();
        if (n < 2) {
            return {}; 
        }
       
        sort(arr.begin(), arr.end());

        
        pair<int, int> closestPair;
        int closestDiff = INT_MAX; 

       
        int i = 0, j = n - 1;
        while (i < j) {
            
            int sum=arr[i]+arr[j];
            
            if(closestDiff>abs(sum-target)){
                closestDiff=abs(sum-target);
                closestPair=make_pair(arr[i],arr[j]);
            }
            
            if(sum>target){
                j--;
            }
            else{
                i++;
            }
            
            
        }

        return {closestPair.first, closestPair.second};
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends