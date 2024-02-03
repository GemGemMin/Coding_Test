#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

#define MAX 501

int n, m, temp, cnt = 0;
int map[MAX][MAX];
bool visited[MAX][MAX];
int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};
queue<pair<int, int>> q;
vector<int> v;
int s = 1;

void BFS(int y, int x){
    visited[y][x] = true;
    q.push(make_pair(y, x));

    while (!q.empty()) {
        y = q.front().first;
        x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if(map[ny][nx] ==1 && visited[ny][nx] == 0) {
                visited[ny][nx] = true;
                s++;
                q.push(make_pair(ny, nx));
            }
        }
    }
}

bool compare(int i, int j){
    return i > j;
}

int main(){
    // 전략: visited 배열을 만듦
    // dy = {0, 0, 1, -1}
    // dx = {1, -1, 0, 0} 을 만듦
    // BFS 알고리즘 : 해당 노드를 visit로 만들고, 큐에 넣는다.
    // 큐에 있는것을 계속 빼며 뺀 원소의 주변 노드들을 큐에 넣고 visit 처리한다.

    cin >> n >> m; // 배열 입력 받음
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> temp;
            map[i][j] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 1 && !visited[i][j]) {
                BFS(i, j);
                v.push_back(s);
                cnt++;
                s = 1;
            }
        }
    }
    sort(v.begin(), v.end(), compare);
    if (cnt == 0) {
        cout << 0 << "\n" <<  0 << "\n";
    }
    else{
        cout << cnt << "\n" << v[0] << "\n";
    }
}