class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector <bool> ans(queries.size(), false); 
        vector<int> prefix(nums.size(), 0); 

        prefix[0] = 0; 
        for(int i = 1; i < nums.size(); i++){
            if((nums[i]+nums[i-1])%2 != 1){
                prefix[i] = prefix[i-1] + 1; 
            }
            else prefix[i] = prefix[i-1];
        }

        for(int i = 0; i < queries.size(); i++){
            int start = queries[i][0]; 
            int end = queries[i][1];

            bool a = (prefix[end]-prefix[start] == 0 );  
            ans[i] = a; 
        }
        return ans; 
    }
};