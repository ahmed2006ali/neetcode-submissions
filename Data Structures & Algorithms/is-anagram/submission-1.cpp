class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) return false; 
        
        unordered_map<char, int> s_Map;
        unordered_map<char, int> t_Map;
        
        for(char c : s) s_Map[c]++;
        for(char c : t) t_Map[c]++;
        
        return s_Map == t_Map;
    }
};