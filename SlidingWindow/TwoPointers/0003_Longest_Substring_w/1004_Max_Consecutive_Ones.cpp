class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            long long int l = 0; 
            long long int r = 0; 
            long long int maxlen = 0;
            long long int zero = 0;  
    
            while (r < nums.size()) {
                if (nums[r] == 0) zero++; 
    
                while (zero > k) {
                    if (nums[l] == 0) {
                        zero--; 
                    }
                    l++;
                }
    
                if (zero <= k) {
                    long long int len = r - l + 1; 
                    maxlen = max(maxlen, len); 
                }
    
                r++;
            }
    
            return maxlen;
        }
    };