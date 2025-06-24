class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set <int> ans; 
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                int c = abs(i-j); 
                //if(!c) continue; 
                if(c <= k and nums[j]==key) ans.insert(i); 
            }
        }
        //sort(ans.begin(), ans.end()); 
        vector <int> ans1 (ans.begin(), ans.end()); 
        

        return ans1; 
    }
};