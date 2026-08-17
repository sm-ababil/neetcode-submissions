class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        map<char, int> tr;
        for (char c:s){
            tr[c]++; 
        }
        for(char d:t){
            tr[d]--;
            if (tr[d]<0){
                return false;
            }
        }
        return true;
    }
};
