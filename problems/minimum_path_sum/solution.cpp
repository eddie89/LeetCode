class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int result = 0;
        const int INF = std::numeric_limits<int>::max();
        int height = grid.size();
        int width = grid[0].size();
        vector<vector<int>> pathStorage(height, vector<int>(width));
        pathStorage[0][0] = grid[0][0];
        for(int row = 0; row < grid.size(); row++) {
            for(int column = 0; column < grid[row].size(); column++) {
                if(row == 0 && column == 0) {
                    pathStorage[row][column] = grid[row][column];
                } else {
                    pathStorage[row][column] = grid[row][column] + min((row == 0 ? INF : pathStorage[row - 1][column]), (column == 0 ? INF : pathStorage[row][column - 1]));
                }
        }
    }
    return pathStorage[height - 1][width - 1];
    }
};