class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int c = 0; 
        for(int i = 0 ; i < nums.size(); i++){
            c ^= nums[i]; 

        }
        if(c==0 or nums.size()%2==0) return true; 
        return false; 
        
    }
};