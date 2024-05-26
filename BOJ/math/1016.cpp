#include <iostream>
using namespace std;

long long num[1000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long min_num, max_num;
    int cnt = 0;

    cin >> min_num >> max_num;

    for (long long i = 2; i*i <= max_num; i++) {
        long long n = min_num / (i*i);

        if(min_num % (i*i)) n++;

        while (n * i * i <= max_num) {
            num[n*i*i - min_num] = 1;
            n++;
        }
    }
    for (int i = 0; i <= max_num - min_num; i++) {
        if (num[i] == 0) {
            cnt++;
        }
    }
    cout << cnt;
}