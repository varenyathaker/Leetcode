class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end()); 
        sort(s.begin(), s.end()); 
        int l = 0; 
        int r = 0;

        while (l < s.size() and r < g.size()){
            if(s[l]>=g[r]) r++; 
            l++;
        }
        return r;
    }
};