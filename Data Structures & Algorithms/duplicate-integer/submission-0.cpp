class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> table;
        for(int num :nums){
            if(table[num]>0){
                return true;
            }
            table[num]+=1;
        }
        return false;
    }
};