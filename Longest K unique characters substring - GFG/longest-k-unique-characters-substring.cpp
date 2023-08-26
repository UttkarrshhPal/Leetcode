//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int n = s.size();
    unordered_map<char,int>mp;
    int tail=0,ans=-1;
    for(int head = 0;head<n;head++){
        mp[s[head]]++;
        while(mp.size()>k)
        {
           mp[s[tail]]--;
           if(mp[s[tail]]==0){
               mp.erase(s[tail]);
           }
           tail++;
        }
        if(mp.size()==k)
        ans = max(ans,head-tail+1); 
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends