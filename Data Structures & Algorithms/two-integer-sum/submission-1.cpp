class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapp;
        for(int i=0;i<nums.size();i++){
            int need = target - nums[i];
            if(mapp.contains(need)){
                return {mapp[need],i};
            }

            mapp[nums[i]] = i;
        }
    }
};
