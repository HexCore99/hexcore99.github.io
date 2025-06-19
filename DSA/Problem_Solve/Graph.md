# Graphs Problems

## Number of Island

_problem link_: [LeetCode](https://leetcode.com/problems/number-of-islands/)

:::code-group

```c++ [BFS]
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void BFS(vector<vector<char>>& grid, int i, int j) {
    stack<pair<int, int>> ij;
    ij.push({i, j});
    grid[i][j] = '0';

    while (!ij.empty()) {
        pair<int, int> curr = ij.top();
        ij.pop();
        i = curr.first;
        j = curr.second;

        if (i - 1 > -1 && grid[i - 1][j] != '0') {
            ij.push({i - 1, j});
            grid[i - 1][j] = '0';
        }
        if (i + 1 < grid.size() && grid[i + 1][j] != '0') {
            ij.push({i + 1, j});
            grid[i + 1][j] = '0';
        }
        if (j - 1 > -1 && grid[i][j - 1] != '0') {
            ij.push({i, j - 1});
            grid[i][j - 1] = '0';
        }
        if (j + 1 < grid[0].size() && grid[i][j + 1] != '0') {
            ij.push({i, j + 1});
            grid[i][j + 1] = '0';
        }
    }
}

int numIslands(vector<vector<char>>& grid) {
    int total_island = 0;

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == '1') {
                total_island++;
                BFS(grid, i, j);
            }
        }
    }

    return total_island;
}

int main() {
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    int result = numIslands(grid);
    cout << result << endl;

    return 0;
}

```

````c++ [DFS]
#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<char>> &grid, int i , int j){

    //base case
    if(i<0 || i>grid.size()-1||j<0||j>grid[0].size()-1 || grid[i][j] != '1'){
        return;
    }

    //visited
    grid[i][j]='2';

    dfs(grid,i+1,j);
    dfs(grid,i-1,j);
    dfs(grid,i,j+1);
    dfs(grid,i,j-1);
}

int numIslands(vector<vector<char>>& grid) {
    int row = grid.size();
    int col = grid[0].size();
    int total_island = 0;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(grid[i][j] == '1'){
                total_island++;
                dfs(grid,i,j);
            }
        }
    }

    return total_island;
}

int main() {
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    int result = numIslands(grid);
    cout<< result << endl;

    return 0;
}
```
:::
