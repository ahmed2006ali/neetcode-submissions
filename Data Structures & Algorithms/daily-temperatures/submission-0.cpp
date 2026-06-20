#include <assert.h>
#include <vector>
#include <stack>

using namespace std;

class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int,int>> st;
        vector<int> results(n,0);
        
        for(int i=0; i<temperatures.size(); i++){
            while(!st.empty() && temperatures[i] > st.top().first){
                int prevIndex = st.top().second;
                results[prevIndex] = (i - prevIndex);
                st.pop(); 
            }
            
            st.push({temperatures[i], i});
        }
        return results;
    }
};