class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        sort(nums.begin(),nums.end());
        int size = nums.size();
        for(int i =0; i<size-2;i++){
            int j = i+1;
            int k = size-1;
            int target = -nums[i];
            if(i>0 && nums[i] == nums[i-1]) continue;
            while(j<k){
                if(nums[j]+nums[k]==target){
                    results.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1])
        j++;

    while (j < k && nums[k] == nums[k + 1])
        k--;
                }
                else if (nums[j]+nums[k]<target){
                    j++;
                }
                else if (nums[j]+nums[k]>target){
                    k--;
                }
                
            }
        }
        return results;
    }
};
