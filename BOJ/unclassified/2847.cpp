#include<iostream>
#include<stack>
using namespace std;

int main(){
    int N, temp, result = 0, recent;
    cin >> N;
    stack<int> stk;
    for(int i = 0; i < N; i++){
        cin >> temp;
        stk.push(temp);
    }
    recent = stk.top();
    stk.pop();
    while(!stk.empty()){
        temp = stk.top();
        stk.pop();
        if(recent <= temp){
            result += temp - recent + 1;
            temp = recent - 1;
        }
        recent = temp;

    }
    cout << result << "\n";
}