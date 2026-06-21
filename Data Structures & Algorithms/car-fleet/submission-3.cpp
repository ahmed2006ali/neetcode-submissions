class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int numOfCars = position.size();
        vector<pair<int,int>> cars(numOfCars);
        stack<double> st;
        // 1.Filling the New Vector of Pairs
        for(int i=0;i<numOfCars;i++){
            cars[i]={position[i],speed[i]};
        }

        // 2.Sorting
        sort(cars.rbegin(),cars.rend());

        //Iterate
        for(auto car:cars){
            if(car.second!=0){
                double timeRequired = (double)(target - car.first) / car.second;
                if(st.empty()){
                    st.push(timeRequired);
                }
                else if(!st.empty() && timeRequired > st.top()){
                        st.push(timeRequired);
                }
            }
        }

        
        return st.size();
    }
};
