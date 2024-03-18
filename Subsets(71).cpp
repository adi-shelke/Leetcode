class Solution {
public:
    void solve(vector<int> nums, vector<int> output, int index,int end, vector<vector<int>>& ans ){
        if(index>=end){
            ans.push_back(output);
            return;
        }
        solve(nums,output,index+1,end,ans);
        output.push_back(nums[index]);
        solve(nums,output,index+1,end, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums,output,0,nums.size(),ans);
        return ans;
    }
};