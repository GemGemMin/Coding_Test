#include <iostream>
using namespace std;

int main(){
    int A, B, sum = 0, cnt = 0, num = 1;
    cin >> A >> B;
    for (int i = 1; i <= B; i++) {
        cnt++;

        if (i >= A) {
            sum += num;
        }

        if (cnt == num) {
            cnt = 0;
            num++;
        }

    }
    cout << sum;
}