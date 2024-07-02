#include <iostream>
using namespace std;

int main(){
    long long a, b, c, num1, num2;
    cin >> a >> b >> c;
    num1 = (double)(a * b) / c;
    num2 = ((double)a / b) * c;
    if (num1 > num2) cout << num1;
    else cout << num2;
}