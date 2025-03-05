class Solution {
    public:
        long long coloredCells(int n) {
            long long first = 1; 
            long long s = 4; 
            for(int i = 1; i < n; i++){
                first+=s; 
                s+=4; 
            }
            return first; 
        }
    };