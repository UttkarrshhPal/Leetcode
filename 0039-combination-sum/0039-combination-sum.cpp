class Solution {
public:
    void f(vector<int>candidates,int idx,vector<vector<int>>&ans,int target,vector<int>output)
    {
        // base case
        if(idx==candidates.size()){
            if(target==0){
                ans.push_back(output);
            }
            return;
        }
        
        if(candidates[idx]<=target){
            output.push_back(candidates[idx]);
            f(candidates,idx,ans,target-candidates[idx],output);
            output.pop_back();    
            }
        f(candidates,idx+1,ans,target,output);
         
        }
        

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>output;
        f(candidates,0,ans,target,output);
        return ans;
    }

};