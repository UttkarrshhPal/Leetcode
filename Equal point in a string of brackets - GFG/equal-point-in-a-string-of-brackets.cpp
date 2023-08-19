//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int findIndex(string str) {
        int n = str.size();
        int cnt_close = count(str.begin(),str.end(),')');
        for(int i = 0;i<n;i++)
        {
            if(cnt_close == i)
            return i;
        }
        return str.size();
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.findIndex(s)<<endl;
	}
}
// } Driver Code Ends