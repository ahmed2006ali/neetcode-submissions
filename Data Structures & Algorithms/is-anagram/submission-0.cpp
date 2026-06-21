class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s_Map;
        unordered_map<char,int> t_Map;
        for(char c : s){
            if(s_Map.contains(c)){
                s_Map[c]++;
            }
            else{
                s_Map.insert({c,1});
            }
        }
        for(char c : t){
            if(t_Map.contains(c)){
                t_Map[c]++;
            }
            else{
                t_Map.insert({c,1});
            }
        }
        return s_Map == t_Map;
    }
};
