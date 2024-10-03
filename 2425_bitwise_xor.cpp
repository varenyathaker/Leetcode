class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans; 
        int n = nums1.size(); 
        int m = nums2.size(); 
        int c = 0; 
        if(n%2==0 and m%2==0){
            return 0; 
        }
        else if (n%2==0 and m%2!=0 ){
            for(int i =0; i < n; i++){
                c ^= nums1[i]; 
            }
        }
        else if (n%2!=0 and m%2==0 ){
            for(int i =0; i < m; i++){
                c ^= nums2[i]; 
            }
        }
        else{
            for(int i =0; i < m; i++){
                c ^= nums2[i]; 
            }
            for(int i =0; i < n; i++){
                c ^= nums1[i]; 
            }

        }
        return c; 
    }
};