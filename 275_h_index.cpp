class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size(); 
        int ans = 0; 
        int s = 0; 
        int e = n - 1; 
        while(s <= e){
            int mid = s + (e-s)/2; 
            if(citations[mid]>=n-mid){
                ans = n - mid; 
                e = mid - 1; 
            }
            else s = mid + 1; 
        }
        return ans; 
        
    }
};