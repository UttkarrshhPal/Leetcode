class Solution {
public:
    void f(vector<int>nums,int idx,vector<int>output,vector<vector<int>>&ans){
         // Base Case
        if(idx==nums.size()){
            ans.push_back(output);
            return;
        }
        // take
        output.push_back(nums[idx]);
        f(nums,idx+1,output,ans);
        output.pop_back();
        
        // not take
        f(nums,idx+1,output,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        f(nums,0,output,ans);
        return ans;
        
        
        
    }
};