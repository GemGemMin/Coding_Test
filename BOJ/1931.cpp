#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare1(vector<int> &v1, vector<int> &v2){
    if(v1[1] == v2[1])return v1[0] < v2[0];
    else return v1[1] < v2[1];
}

int main(){
    // vector를 끝나는 시간 순으로 정렬
    // 초기 상태를 가장 일찍 끝나는 회의의 종료 시간으로 설정
    // 종료 시간보다 시작 시간이 크거나 같은 첫 회의의 종료 시간을 다음 종료 시간으로 설정
    int N, a, b, sum = 1;
    vector<vector<int>> v;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        vector<int> vec;
        vec.push_back(a);
        vec.push_back(b);
        v.push_back(vec);
    }
    sort(v.begin(), v.end(), compare1);
    int end = v[0][1];
    for(int i = 1; i < N; i++){

        if(v[i][0] >= end){
            end = v[i][1];
            sum += 1;
        }
    }
    cout << sum << "\n";


}