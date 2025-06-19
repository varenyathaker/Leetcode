class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); 

        int ans = 1; 
        int s = nums[0]; 
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]-s > k){
                ans++; 
                s = nums[i]; 
            }
        }

        return ans; 
    }
};