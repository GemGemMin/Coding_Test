#include <iostream>
using namespace std;

int main(){
    int x, y, sum = 0;
    cin >> x >> y;
    for (int i = 1; i < x; i++) {
        if (i == 2) {
            sum += 28;
        }
        else if (i <= 7 && i % 2 == 0) {
            sum += 30;
        } else if (i <= 7 && i % 2 == 1) {
            sum += 31;
        } else if (i > 7 && i % 2 == 0) {
            sum += 31;
        } else if (i > 7 && i % 2 == 1) {
            sum += 30;
        }
    }

    sum += y;
    int day = sum % 7;
    if (day == 1) {
        cout << "MON";
    } else if (day == 2) {
        cout << "TUE";
    } else if (day == 3) {
        cout << "WED";
    } else if (day == 4) {
        cout << "THU";
    } else if (day == 5) {
        cout << "FRI";
    } else if (day == 6) {
        cout << "SAT";
    } else if (day == 0) {
        cout << "SUN";
    }
}