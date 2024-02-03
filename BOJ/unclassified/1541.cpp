#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    int sum = 0, sub = 0, temp = 0;
    bool isMinus = false;
    cin >> s;
    for (int i = 0; i <= s.length(); i++) {
        // 숫자일 경우 - 이 전 연산자가 +이면 sum에 더하고, -이면 sub에 더한다.
        // 연산자일 경우 - +면 isPlus를 true, -면 isPlus를 false로 바꾼다.
        if (s[i] == '+' || s[i] == '-' || i == s.length()) { // 부호가 나오거나 끝에 도달했을 때
            if (isMinus) {
                sum -= temp;
            } else {
                sum += temp;
            }
            if(s[i] == '-') isMinus = true;
            temp = 0;
        } else { // 연산자가 아닐 경우
            temp = temp * 10 + (int(s[i]) - 48);
        }

    }
    cout << sum << "\n";
}
