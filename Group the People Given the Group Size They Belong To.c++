class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> m;
        vector<vector<int>> ans;
        
        for(int i=0;i<groupSizes.size();i++)
            m[groupSizes[i]].push_back(i);

        int x;

        for(auto i:m) {
            vector<int> ds;
            x=0;
            for(int j=0;j<i.second.size();j++){
                if(x==i.first){
                    ans.push_back(ds);
                    ds.clear();
                    x=0;
                }
                x++;
                ds.push_back(i.second[j]);
            }
            ans.push_back(ds);
        }
        return ans;
    }
};
