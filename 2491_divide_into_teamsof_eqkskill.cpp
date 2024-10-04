class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end()); 
        int s = 0; 
        int e = skill.size() - 1; 
        if(skill.size() == 2){
            return skill[1]*skill[0]; 
        }
        vector <int> ans;
        vector <int> ans2; 
        while(s<e){
            int a = skill[s] + skill[e]; 
            int b = skill[s] * skill[e]; 
            s++; 
            e--; 
            ans.push_back(a); 
            ans2.push_back(b); 
        }
        long long ct = 0 ;
        int a1 = ans[0]; 
        for(int i = 0; i < ans.size(); i++){
            if(ans[i]!=a1) return -1; 
        } 
     
        for(int i = 0 ; i < ans.size(); i++){
            ct += ans2[i]; 
        }
        
        return ct; 

        
    }
};