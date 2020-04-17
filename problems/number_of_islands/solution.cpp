class Solution {
public:
    void DFS(vector<vector<char>>& grid, int row, int column) {
      if(column >= grid[0].size()|| column == -1 || row  == -1 || row >= grid.size() || grid[row][column] =='0'){
            return;
        }
        grid[row][column] = '0';
        DFS(grid, row, column - 1);
        DFS(grid, row, column + 1);
        DFS(grid, row - 1, column);
        DFS(grid, row + 1, column);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int counter = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == '1') {
                    DFS(grid, i, j);
                    counter++;    
                }          
            }
        }
        return counter;
    }
};