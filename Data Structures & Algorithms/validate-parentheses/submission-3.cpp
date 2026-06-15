#include<assert.h>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        assert(s.length()!=0);
        
        int size = s.length();
        
        for(int i=0;i<size;i++){
            if(s[i] =='(' | s[i]=='[' | s[i]=='{'){
                st.push(s[i]);
            }
            else if(st.empty() &&( s[i] == ')' | s[i] == ']' | s[i] == '}')){
                return false;
            }
            else if(s[i]==')' && st.top()=='('){
                st.pop();
            }
            else if(s[i]==']' && st.top()=='['){
                st.pop();
            }
            else if(s[i]=='}' && st.top()=='{'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};
