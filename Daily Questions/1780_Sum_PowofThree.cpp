class Solution {
    public:
        bool checkPowersOfThree(int n) {
             
            while(n!=0){
                int c = n%3; 
                if(c==2) return false; 
                n /= 3; 
            }
            return true; 
        }
    };