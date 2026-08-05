class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int num : nums){
            if(um[num]>0) return true;
            um[num]++;
        }
        return false;
    }
};