#include <iostream>
#include<queue>
using namespace std;


int N, K, result;
queue<pair<int,int>> q;
bool visited[100001];

void BFS() {
    while (!q.empty()) {
        int n = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if(n == K) {
            result = cnt;
            cout << result << "\n";
            break;
        }
        if (n - 1 >= 0 && n - 1 < 100001) {
            if(!visited[n-1]){
                q.push(make_pair(n - 1, cnt + 1));
                visited[n-1] = true;
            }
        }
        if ((n + 1 >= 0) && (n + 1 < 100001)) {
            if(!visited[n+1]){
                q.push(make_pair(n + 1, cnt + 1));
                visited[n+1] = true;
            }
        }
        if (n * 2 >= 0 && n * 2 < 100001) {
            if(!visited[n*2]){
                q.push(make_pair(n *2, cnt + 1));
                visited[n*2] = true;
            }
        }
    }
}

int main(){
    cin >> N >> K;
    q.push(make_pair(N, 0));
    BFS();

}