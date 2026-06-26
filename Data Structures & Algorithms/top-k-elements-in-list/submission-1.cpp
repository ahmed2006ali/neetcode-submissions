class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> table;
        // Count The Frequency
        for(int num : nums){
            table[num]++;
        }

        // pq
        priority_queue<pair<int,int>> pq;
        
        for(auto p :table){
            pq.push({p.second,p.first});
        }

        // Result Vector
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
