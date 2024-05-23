#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    long long int result;
    int mem[3];
    string colors[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 10; j++) {
            if (s == colors[j]) mem[i] = j;
        }
    }
    result = mem[0] * 10 + mem[1];
    result *= pow(10, mem[2]);
    cout << result;
}