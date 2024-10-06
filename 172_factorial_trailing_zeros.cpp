class Solution {
public:
    int trailingZeroes(int n) {
        if(n==0) return 0; 
        long long int c = 0;
        for(int i = 5; i <= n; i*=5){
            c+=n/i; 
        }
        return c; 
    }
};