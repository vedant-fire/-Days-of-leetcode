class Solution {

    void printf(int i,vector<int>& ds,vector<int>& nums,int n,vector<vector<int>>& ans){
        if(i>=n) {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        printf(i+1,ds,nums,n,ans);
        ds.pop_back();
        printf(i+1,ds,nums,n,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        int n=nums.size();
        vector<int> ds;
        vector<vector<int>> ans;
        printf(0,ds,nums,n,ans);
        return ans;

    }
};
