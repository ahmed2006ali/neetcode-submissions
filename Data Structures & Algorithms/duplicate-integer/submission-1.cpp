class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool found = false;
        unordered_map<int,int> table;
        for(int num :nums){
            if(table.contains(num)){
                found = true;
                return true;
            }
            else{
                table.insert({num,1});
            }
        }
        return found;
    }
};