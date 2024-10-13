class Solution {
  public:
    long long solve(vector<int>& bt) {
        int t = 0; 
        long long int ans = 0; 
        sort(bt.begin(), bt.end()); 
        for(int i= 0; i < bt.size(); i++){
            ans += t; 
            t+=bt[i]; 
        }
        return ans/bt.size(); 
        // code here
    }
};