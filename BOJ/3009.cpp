#include<iostream>
using namespace std;

int main(){
    int x, y, a[2]={0}, b[2]={0}, result_x, result_y;
    for(int i = 0; i < 3; i++){
        cin >> x >> y;
        if(a[0] == 0) a[0] = x;
        else if(a[0] == x) a[0] = 0;
        else if(a[1] == x) a[1] = 0;
        else a[1] = x;

        if(b[0] == 0) b[0] = y;
        else if(b[0] == y) b[0] = 0;
        else if(b[1] == y) b[1] = 0;
        else b[1] = y;
    }
    for(int i = 0; i < 2; i++){
        if(a[i] != 0) result_x = a[i];
        if(b[i] != 0) result_y = b[i];
    }
    cout << result_x << " " << result_y << "\n";
}