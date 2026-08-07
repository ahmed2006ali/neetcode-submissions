class MinStack {
public:
    vector<int> st;
    vector<int> mins;
    MinStack() {

    }
    
    void push(int val) {
        if(st.empty()){
            st.push_back(val);
            mins.push_back(val);
        } 
        else{
            mins.push_back(min(mins.back(),val));
            st.push_back(val);
        }
    }
    
    void pop() {
        st.pop_back();
        mins.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return mins.back();
    }
};
