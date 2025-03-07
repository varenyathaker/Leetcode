class Solution {
    public:
    
    
    bool isPrime(int n) {
    
        if (n <= 1)
            return false;
    
        if (n == 2)
            return true;
    
        
        if (n % 2 == 0)
            return false;
    
        for (int i = 3; i * i <= n; i += 2) {
    
            
            if (n % i == 0)
                return false;
        }
    
        return true;
    }
        vector<int> closestPrimes(int left, int right) {
            vector <int> ans; 
            for(int i = left; i <=right; i++){
                if(isPrime(i)) ans.push_back(i); 
            }
    
            if(ans.size()==0 or ans.size()==1){
                vector <int> ans; 
                ans.push_back(-1);
                ans.push_back(-1);
                return ans;
            }
    
            vector <int> pair; 
            int min = INT_MAX; 
            for(int i = 1; i < ans.size(); i++){
                int c = ans[i] - ans[i-1]; 
                if(c < min){
                    while(pair.size()!=0){
                        pair.pop_back(); 
                    }
                    min = c; 
                    pair.push_back(ans[i-1]); 
                    pair.push_back(ans[i]); 
                }
            }
    
            return  pair; 
        }
    };