class Solution {
public:
    bool isValid(string s) {
        stack <char> st; 
        if(s.length()==1) return false; 
         
        for(int i = 0; i < s.length() ; i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
            st.push(s[i]); 
        }
        else {
            if(st.empty()) return false; 
            char ch = st.top() ; 
            st.pop(); 
            if((ch=='(' and s[i]==')') or (ch=='[' and s[i]==']') or (ch=='{' and s[i]=='}')) continue; 
            else return false; 
        }
    }
    return st.empty(); 
  
    }
};