#include<iostream>
#include <vector>
#include <queue>
void bfs(int start, const std::vector<std::vector<int>>& graph){
    std::vector<bool>visited(graph.size(), false);
    std::queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()){
        int node = q.front();
        q.pop();
        std::cout << node << " ";

        for (int neighbor : graph[node]){
            if (!visited[neighbor]){
                visited[neighbor]= true;
                q.push(neighbor);
                


            }
        }
    }
}


int main(){
    std::vector<std::vector<int>> graph = {
        {1,2}, { 0, 3, 4}, { 0,4}, {1,5}, {1,2,5}, {3,4}

    };
    bfs(0, graph);
}