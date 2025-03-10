class Solution {
    private:
        bool isVowel(char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        }
    
    public:
        long long countOfSubstrings(string word, int k) {
            long long ans = 0;
            int s = 0, e = 0;
            unordered_map<char, int> vc;
            int con = 0;
    
            vector<int> next(word.size());
            int nextind = word.size();
            for (int i = word.size() - 1; i >= 0; i--) {
                next[i] = nextind;
                if (!isVowel(word[i])) {
                    nextind = i;
                }
            }
    
            while (e < word.size()) {
                char newc = word[e];
    
                if (isVowel(newc)) {
                    vc[newc]++;
                } else {
                    con++;
                }
    
                while (con > k) {
                    char st = word[s];
                    if (isVowel(st)) {
                        vc[st]--;
                        if (vc[st] == 0) {
                            vc.erase(st);
                        }
                    } else {
                        con--;
                    }
                    s++;
                }
    
                while (s < word.size() && vc.size() == 5 && con == k) {
                    ans += next[e] - e;
                    char st = word[s];
                    if (isVowel(st)) {
                        vc[st]--;
                        if (vc[st] == 0) {
                            vc.erase(st);
                        }
                    } else {
                        con--;
                    }
                    s++;
                }
                e++;
            }
            return ans;
        }
    };
    