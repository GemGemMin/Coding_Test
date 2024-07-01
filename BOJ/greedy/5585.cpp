#include <iostream>
using namespace std;

int main(){
    int n, result = 0;
    cin >> n;
    n = 1000 - n;
    while (n != 0) {
        if (n >= 500) {
            result += n / 500;
            n -= 500 * (n / 500);
        } else if (n >= 100) {
            result += n / 100;
            n -= 100 * (n / 100);
        }else if (n >= 50) {
            result += n / 50;
            n -= 50 * (n / 50);
        }else if (n >= 10) {
            result += n / 10;
            n -= 10 * (n / 10);
        }else if (n >= 5) {
            result += n / 5;
            n -= 5 * (n / 5);
        }else if (n >= 1) {
            result += n / 1;
            n -= 1 * (n / 1);
        }
    }
    cout << result;
}