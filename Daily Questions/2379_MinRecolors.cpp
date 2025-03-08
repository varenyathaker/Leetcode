class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int l = 0; 
            int w = 0; 
            int col = INT_MAX;
            for(int i = 0 ; i < blocks.size(); i++){
                if(blocks[i]=='W') w++;
    
                if(i-l+1 == k){
                    col = min(w, col); 
                
                    if(blocks[l]=='W') w--; 
                    l++; 
                }
            }
            return col; 
        }
    };