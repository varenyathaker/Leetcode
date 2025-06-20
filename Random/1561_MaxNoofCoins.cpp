class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>()); 
        int n = piles.size(); 
        int ans = 0 ; 
        for(int i = 1; i <= 2*n/3; i+=2){
            ans+= piles[i]; 
        }
        return ans; 
    }
};