class Solution {
    public:
        int characterReplacement(string s, int k) {
            int l = 0; 
            int r = 0; 
            int maxlen = 0; 
            int maxfreq = 0; 
            unordered_map <char, int> mpp(26);
    
            while(r < s.length()){
                mpp[s[r]-'A']++; 
                maxfreq = max(maxfreq, mpp[s[r]-'A']);
                while(r-l+1 - maxfreq > k){
                    mpp[s[l]-'A']--; 
                    maxfreq = 0;  
                    for(int i = 0; i < 26; i++){
                        maxfreq = max(maxfreq, mpp[i]);
                    }
                    l++;
                }
                if(r-l+1 - maxfreq <= k){
                    maxlen = max(maxlen, r-l+1); 
    
    
                }
                r++; 
            }
            return maxlen; 
        }
    };