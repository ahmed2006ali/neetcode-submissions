class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> um;
        stack<char> st;
        um ={
            {'[',']'},
            {'(',')'},
            {'{','}'}
        };

        for(auto c : s){

            if(um.contains(c)) st.push(c); //is opening bracket always push

            else if(st.empty() && !(um.contains(c))){
                return false; //is closing bracket and the stack is empty
            }

            else if (um[st.top()] == c) st.pop();
            else return false;

        }
            return st.empty();
    }
};
