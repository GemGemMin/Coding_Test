#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, i;
    cin >> a >> b;
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    i = a;
    while(i) {
        if (((a % i) == 0) && ((b % i) == 0)) {
            cout << i << "\n";
            break;
        }
        i--;
    }
    i = b;
    while (true) {
        if (i % a == 0 && i % b == 0) {
            cout << i << "\n";
            break;
        }
        i++;
    }
}