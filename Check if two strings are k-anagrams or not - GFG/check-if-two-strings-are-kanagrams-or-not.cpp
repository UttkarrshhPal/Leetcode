//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // string anagram matlab frequency same
        // insert all char of string1 into map
        // iterate over the other string and
        // reduce the frequency in map
        if(str1.size()!=str2.size()) return false;
        unordered_map<char,int>mp;
        for(int i = 0;i<str1.size();i++){
            mp[str1[i]]++;  // inserting all char-freq pair into map
        }
        for(int i = 0;i<str2.size();i++){
            if( mp[str2[i]]>0){
                mp[str2[i]]--;
            } 
        }
        int cnt = 0;
        for(auto it=mp.begin();it!=mp.end();it++){
            cnt+=it->second;
        }
        if(cnt>k) 
        return false;
        else 
        return true;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends