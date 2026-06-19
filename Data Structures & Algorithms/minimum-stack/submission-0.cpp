class MinStack {
public:
vector<int> st;
vector<int> min;
int capacity;
    MinStack() {
        capacity = 0;
    }
    
    void push(int val) {
        
        if(st.empty()){
            st.push_back(val);
            min.push_back(val); //add 5 to min
        }
        else{
            if(val<min.back()){
                st.push_back(val);
                min.push_back(val);
            }
            else if(val > min.back()){
                st.push_back(val);
                min.push_back(min.back());
            }
            else{
                st.push_back(val);
                min.push_back(val);
            }
        }
    }
    
    void pop() {
        st.pop_back();
        min.pop_back();
        capacity--;
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return min.back();
    }
};
