class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        map<pair<int,int>,int> m;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(m[{i,j}]!=1){
                    m[{i,j}]=1;
                    m[{j,i}]=1;
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }   
    }
};
