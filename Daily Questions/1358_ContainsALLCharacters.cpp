class Solution {
    public:
        bool allc(vector<int>& freq) {
            // Check if we have at least one of each character
            return freq[0] > 0 && freq[1] > 0 && freq[2] > 0;
        }
        int numberOfSubstrings(string s) {
            int l = 0 ; 
            int r = 0; 
            vector <int> freq(3,0); 
            int ans =  0; 
            while(r<s.length()){
                char c = s[r]; 
                freq[c-'a']++; 
                while(allc(freq)){
                    ans+= s.length() - r ;
                    char lc = s[l]; 
                    freq[lc-'a']--; 
                    l++; 
                }
                r++; 
            }
            return ans; 
        }
    };