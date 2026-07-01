#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int size = heights.size();
        int maxNum=0 ;
        int left = 0;
        int right = size-1;
        while(right>left){
            int minHeight = min(heights[left],heights[right]);
            int waterAmount = ((right - left) * minHeight);
            maxNum = max(maxNum,waterAmount);
            if(heights[left] == minHeight && heights[right] == minHeight){
                left++;
                right--;
            }
            else if(heights[left] == minHeight){
                left++;
            }
            else if(heights[right] == minHeight){
                right--;
            }
        } 
        return maxNum;
    }
};
