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

```c++ [DFS]
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

## Shortest Path

![Shortest Path](/DSA/Question_Image/Graph/Shortest_Path.png)
::: code-group

```c++ [BFS]
#include<bits/stdc++.h>
using namespace std;

int shortest_path(vector<vector<int>>adj,int V,int strt, int trgt){

    vector<int>dst(V,-1);
    queue<int>node;
    node.push(strt);
    dst[strt] = 0;
    while (!node.empty())
    {
        int curr = node.front();
        node.pop();

        if(curr == trgt){
            return dst[curr];
        }

        for(auto v:adj[curr]){
            if(dst[v] == -1){
                dst[v] = dst[curr]+1;
               node.push(v); 
            }
        }
    }
    return -1;
    
}


int main(){
    int V,E;
    cin>> V>> E;
    vector<vector<int>> adj(V);

for(int i =0;i<E;i++)
    {
        int u, v;
        cin>> u>> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout<<shortest_path(adj,V,2,6);

}

```

```c++ [DFS]
#include<bits/stdc++.h>
using namespace std;

void dfs(
    vector<vector<int>>adj,
    vector<bool>&vis,
    int strt,
    int depth,
    int end,
    int &ans)
{
    if(strt == end){
        ans = min(depth,ans);
        return;
    }

    for(auto x: adj[strt]){
        if(!vis[x]){
            vis[x]= true;
            dfs(adj,vis,x,depth+1,end,ans);
            vis[x] = false;
        }
    }
}

int shortest_path(vector<vector<int>>adj,int V,int strt, int end){

    vector<bool> vis(V,false);
    int ans = INT_MAX;
    dfs(adj,vis,strt,0,end,ans);
    return (ans == INT_MAX)?-1:ans;
}


int main(){
    int V,E;
    cin>> V>> E;
    vector<vector<int>> adj(V);

for(int i =0;i<E;i++)
    {
        int u, v;
        cin>> u>> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout<<shortest_path(adj,V,2,6);

}

```

:::

::: code-group

```txt [Input 1]
9 13
0 1
0 7
1 7
1 2
2 3
2 5
2 8
3 4
3 5
4 5
5 6
6 7
7 8

```

```txt [Input 2]
7 16
0 1
0 2
0 4
1 0
1 2
2 0
2 1
2 5
3 4
4 0
4 3
4 5
4 6
5 2
5 4
6 4
```

:::

## Traveling Salesman

![Travelling SalesMan](/DSA/Question_Image/Graph/Travelling_SalesMan.png)

```c++ [DFS]
#include <bits/stdc++.h>
using namespace std;

void min_cost(
    const vector<vector<int>> &adj,
    vector<bool> &vis,
    int u,
    int all_vis,
    int current_cost,
    int &best_cost)
{
    //if current current_cost greater then best_cost, no need to go deeper
    if (current_cost >= best_cost)
        return;

    if (all_vis == adj.size())
    {
        if (adj[u][0] != 0)
        {
            best_cost = min(best_cost, current_cost + adj[u][0]);
        }
        return;
    }

    for (int v = 1; v < adj.size(); v++)
    {
        if (!vis[v] && adj[u][v] != 0)
        {
            vis[v] = true;
            min_cost(adj, vis, v, all_vis + 1, current_cost + adj[u][v], best_cost);
            vis[v] = false;
        }
    }
}

int main()
{
    int city;
    cin >> city;
    vector<vector<int>> adj(city, vector<int>(city));

    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < city; j++)
            cin >> adj[i][j];
    }

    int best_cost = INT_MAX;
    vector<bool> vis(city, false);

    vis[0] = true;
    min_cost(adj, vis, 0, 1, 0, best_cost);

    if (best_cost == INT_MAX)
        cout << -1;
    else
        cout << best_cost;

    return 0;
}

```

::: code-group

```txt [Input 1]
5
 0 14  4 10 20
14  0  7  8  7
 4  5  0  7 16
11  7  9  0  2
18  7 17  4  0

```

```txt[Input 2]
5
9 9 2 9 5
6 3 5 1 5
1 8 3 3 3
6 0 9 6 8
6 6 9 4 8

```

:::
