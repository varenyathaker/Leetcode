class Solution {
    public:
    
        bool sym (int n){
            int k = n; 
            int c =0 ;
            while(k!=0){
                k/=10; 
                c++; 
            }
            if(c%2!=0) return false; 
            int lsum = 0; 
            int rsum = 0; 
            for(int i= 0; i < c/2; i++){
                rsum += n%10; 
                n/=10; 
            }
    
            for(int i= 0; i < c/2; i++){
                lsum += n%10; 
                n/=10; 
            }
            if(lsum==rsum) return true; 
            return false; 
    
        }
        int countSymmetricIntegers(int low, int high) {
            int ans = 0; 
            for(int i=low; i <=high; i++ ){
                if(sym(i)) ans++; 
            }
            return ans; 
        }
    };