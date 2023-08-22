//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        vector<bool>mark(26,false);// declare a bool mark and marked it as false
        
        for(int i = 0;i<str.size();i++)
        {
            // upperCase
            int index = 0;
            if(str[i]>='A' && str[i]<='Z'){
                 index = str[i]-'A';
            }
            else if(str[i]>='a' && str[i]<='z'){ // lowerCase
                 index = str[i]-'a';
            }
            else
            {
                continue;
            }
            mark[index] = true;
        }
        for(int i=0;i<26;i++){
            if(mark[i]==false) return false;
        }
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends