class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            vector <int> ind(grid.size()*grid[0].size()); 
            for(int i = 0; i < grid.size(); i++){
                for(int j = 0; j < grid[i].size(); j++){
                    ind[grid[i][j] - 1]++; 
                }
            }
            vector <int> ans(2); 
            for(int i = 0; i < ind.size(); i++){
                if(ind[i]==0) ans[1] = i+1; 
                if(ind[i]==2) ans[0] = i+1; 
            }
            return ans; 
        }
    };