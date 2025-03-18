class Solution {
    public:
        int longestNiceSubarray(vector<int>& nums) {
            int bits = 0; 
            int left  = 0; 
            int ans = 0; 
            for(int i = 0; i < nums.size(); i++){
                while((bits&nums[i])!=0){
                    bits ^= nums[left]; 
                    left++;
                }
    
                bits |= nums[i]; 
    
                ans = max(ans, i - left+1); 
            }
            return ans; 
        }
    };