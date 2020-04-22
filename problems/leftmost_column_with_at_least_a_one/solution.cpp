/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public: 
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> binaryDimensions = binaryMatrix.dimensions();
        int height = binaryDimensions[0], width = binaryDimensions[1];
        int answer = width;
        for(int row = 0; row < height; row++) {
            int low = 0, high = width - 1;
            while(low <= high) {
                int middle = low + (high - low) / 2;
                if(binaryMatrix.get(row, middle) == 1) {
                    answer =  min(answer, middle);
                    high = middle - 1;
                } else {
                    low = middle + 1;
                }
            }
        }
        if(answer == width) {
            return -1;
        }
        return answer;
    }
};