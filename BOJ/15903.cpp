#include<iostream>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    int N, M;
    long long int temp, a, b, sum = 0;
    priority_queue<long long int, vector<long long int>, greater<>> pq;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> temp;
        pq.push(temp);
    }

    for(int i = 0; i < M; i++){
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        pq.push(a + b);
        pq.push(a + b);
    }

    for(int i = 0; i < N; i++){
        sum += pq.top();
        pq.pop();
    }
    cout << sum << "\n";
}