#include <vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
            if (matrix.empty() || matrix[0].empty()) {
                        return false;
                                }

                                        int m = matrix.size();
                                                int n = matrix[0].size();

                                                        int low = 0;
                                                                int high = (m * n) - 1;

                                                                        while (low <= high) {
                                                                                    // Prevents potential overflow compared to (low + high) / 2
                                                                                                int mid = low + (high - low) / 2; 
                                                                                                            
                                                                                                                        // Map 1D index to 2D row and column
                                                                                                                                    int row = mid / n;
                                                                                                                                                int col = mid % n;
                                                                                                                                                            
                                                                                                                                                                        int mid_element = matrix[row][col];

                                                                                                                                                                                    if (mid_element == target) {
                                                                                                                                                                                                    return true;
                                                                                                                                                                                                                } else if (mid_element < target) {
                                                                                                                                                                                                                                low = mid + 1; // Search the right half
                                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                                                            high = mid - 1; // Search the left half
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                                                        return false;
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                            };
                                                                                                                                                                                                                                                                                            