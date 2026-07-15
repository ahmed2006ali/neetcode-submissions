class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> table1;
        unordered_map<char,int> table2;
        for(char c : s){
            table1[c]+=1;
        }
         for(char c : t){
            table2[c]+=1;
        }
        return table1 == table2;
    }
};
