class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        vector<int> result(temperatures.size(),0);

        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[i]>st.top().first){
                int topIndex = st.top().second;
                result[topIndex] = i-topIndex;

                st.pop();
            }
            st.push({temperatures[i],i});
        }
        return result;
    }
};
