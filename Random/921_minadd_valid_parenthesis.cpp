class Solution {
public:
    int minAddToMakeValid(string s) {
        int c = 0;
        int r = 0; 
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='(') c++; 
            else if (s[i]==')'){
                if(c==0){
                    r ++; 
                }
                else c--; 
            }
        }
        return c + r; 
        
    }
};