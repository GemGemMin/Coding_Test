#include <iostream>
#include <queue>

using namespace std;
int main(){
    int n;
    priority_queue<int, vector<int>, greater<>> pq;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        pq.push(temp);
    }
    int sum = 0;

    for (int i = 1; i < n; i++) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();

        sum += a + b;

        pq.push(a + b);
    }
    cout << sum;
}