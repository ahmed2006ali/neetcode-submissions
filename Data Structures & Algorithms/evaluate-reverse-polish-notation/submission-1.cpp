class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c : tokens){
            if (c != "+" && c != "-" && c != "*" && c != "/") {
                st.push(stoi(c));
            }
            else{
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();

                if(c == "+") st.push(num1+num2);
                else if(c == "-") st.push(num1-num2);
                else if(c == "*") st.push(num1*num2);
                if(c == "/" && num2!=0) st.push(num1/num2);
            }
        }
        return st.top();
    }
};
