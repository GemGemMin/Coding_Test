#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

#define MAX_SIZE 1001

int M, N, result = 0;
int graph[MAX_SIZE][MAX_SIZE];
queue<pair<int, int>> q;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

bool IsInside(int ny, int nx) {
    return (0 <= nx && 0 <= ny && nx < M && ny < N);
}

void BFS() {
    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (IsInside(ny, nx) == 1 && graph[ny][nx] == 0) {
                graph[ny][nx] = graph[y][x] + 1;
                q.push(make_pair(ny,nx));
            }
        }

    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> M >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> graph[i][j];
            if(graph[i][j] == 1){
                q.push(make_pair(i, j));
            }
        }
    }

    BFS();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (graph[i][j] == 0) {
                cout << -1 << "\n";
                return 0;
            }
            if (result < graph[i][j]) {
                result = graph[i][j];
            }
        }
    }
    cout << result - 1 << "\n";
}