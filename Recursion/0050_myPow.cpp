class Solution {
public:
    double myPow(double x, int n) {
        if (n==0) return 1;
        long long N = n; 
        if(N < 0 ) {
            x = 1/x; 
            N = -N; 
        }
        if(N%2==0) return myPow(x*x, N/2); 
        return x * myPow(x, N-1);
        
    }
};