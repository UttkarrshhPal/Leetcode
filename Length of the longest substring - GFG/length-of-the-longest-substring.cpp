//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
             vector<int>v(26,-1);
        int i=0,j=0,mx=1;
        while(j<S.size()){
              if(v[S[j]-'a']!=-1){
                i=max(i,v[S[j]-'a']+1);
                v[S[j]-'a']=-1;
            }
            v[S[j]-'a']=j;
            mx=max(mx,j-i+1);
            j++;
        }
        return mx;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends