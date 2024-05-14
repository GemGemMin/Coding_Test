#include<iostream>
using namespace std;

int number[20000001] = {};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, card, num;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> card;
        number[card+10000000] += 1;
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        cout << number[num+10000000] << " ";
    }
}