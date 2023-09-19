//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        // Declare a Stack
        string rev;
        stack<char>st;
        // pushing all the element into stack
        for(int i=0;i<s.size();i++){
            if(s[i]!='.'){
               st.push(s[i]); 
            }
            else{
                string temp = "";
                while(st.empty()==false){
                    temp=temp+st.top();
                    st.pop();
                }
                rev+=temp;
                rev+='.';
            }
        }
        while(st.empty()==false){
            rev+=st.top();
            st.pop();
        }
        return rev;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends