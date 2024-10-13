class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(), nums.end()); 
        int last = INT_MIN; 
        int c = 0; 
        int maxi = 1; 
        for(int i= 0; i < nums.size(); i++){
            if(nums[i] - 1 == last){
                c++; 
                last = nums[i];
            }
            else if(nums[i]!=last){
                c = 1; 
                last = nums[i];
            }
            maxi = max(maxi, c); 
        }
        return maxi; 
    }
};