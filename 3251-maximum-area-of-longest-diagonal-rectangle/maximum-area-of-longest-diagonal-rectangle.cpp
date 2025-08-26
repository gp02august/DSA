class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0;
        double maxDiagonal = 0.0;

        for (int i = 0; i < dimensions.size(); i++) {
            int length = dimensions[i][0];
            int width = dimensions[i][1];
            double diagonal = sqrt(length * length + width * width);
            int area = length * width;

            if (diagonal > maxDiagonal) {
                maxDiagonal = diagonal;
                maxArea = area;
            } else if (diagonal == maxDiagonal && area > maxArea) {
                maxArea = area;
            }
        }
        return maxArea;
    }
};