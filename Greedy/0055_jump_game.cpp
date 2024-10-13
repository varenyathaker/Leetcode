class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxpos = 0 ; 
        for(int i =- 0 ; i < nums.size(); i++){
            if(i > maxpos) return false; 
            maxpos = max(i+nums[i], maxpos); 
            if(maxpos > nums.size() - 1) return true; 
        }
        return true; 
    }   
};