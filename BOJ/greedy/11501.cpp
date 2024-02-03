// 11501 주식 (그리디)
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long int T, N;

    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> N;
        long long int temp, gain = 0;
        vector<long long int> v;
        for(long long int j = 0; j < N; j++){
            cin >> temp;
            v.push_back(temp);
        }
        long long int max = 0;
        for(long long int j = 0; j < N; j++){

            temp = v.back();
            if(temp > max) max = temp;
            else{
                gain += max - temp;
            }
            v.pop_back();

        }
        cout << gain << "\n";

    }
}



// 시간초과..
//#include <algorithm>
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int T, N;
//    cin >> T;
//    for(int i = 0; i < T; i++){
//        int gain = 0;
//
//        cin >> N;
//        int* arr;
//        arr = new int[N];
//        for(int j = 0; j < N; j++){
//            cin >> arr[j];
//        }
//        for(int j = 0; j < N; j++){
//            int max = *max_element(arr+ j + 1,arr + N);
//            if(arr[j] < max){
//                gain += max - arr[j];
//            }
//        }
//        cout << gain << "\n";
//        delete[] arr;
//    }
//}