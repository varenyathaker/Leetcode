class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector <bool> ans; 

        for(int i = 0; i < l.size(); i++){
            vector <int> seq; 
            for(int j = l[i]; j <= r[i]; j++){
                seq.push_back(nums[j]); 
            }

            sort(seq.begin(), seq.end()); 
            bool ok = true;
            for(int k = 1; k < seq.size() - 1; k++){
                if(seq[k+1] - seq[k] != seq[k] - seq[k-1]){
                    ans.push_back(false); 
                    ok = false;
                    break; 
                }
            }
            if(ok) ans.push_back(true);
        }
        return ans; 
    }
};
