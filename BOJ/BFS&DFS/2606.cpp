#include <iostream>
#include <queue>
using namespace std;

int map[101][101];
int visited[101];
int Computer, N, result = 0;
queue<int> q;

void BFS(){
    while(!q.empty()){
        int y = q.front();
        q.pop();
        for (int i = 1; i <= Computer; i++) {
            if (map[y][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
                result++;
            }
        }
    }
}

int main(){
    cin >> Computer >> N;
    for (int i = 0; i < N; i++) {
        int y, x;
        cin >> y >> x;
        map[y][x] = 1;
        map[x][y] = 1;
    }
    q.push(1);
    visited[1] = 1;
    BFS();
    cout << result;
}
/*
 * 0 0 0 0 0 0 0 0
 * 0 0 1 0 0 1 0 0
 * 0 0 0 1 0 0 0 0
 * 0 0 0 0 0 0 0 0
 * 0 0 0 0 0 0 0 1
 * 0 0 1 0 0 0 1 0
 * 0 0 0 0 0 0 0 0
 */