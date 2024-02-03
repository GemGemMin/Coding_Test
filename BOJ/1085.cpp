#include<iostream>
using namespace std;

int main(){
    int x, y, w, h, min_x, min_y;
    cin >> x >> y >> w >> h;
    min_x = min(x, w-x);
    min_y = min(y, h-y);
    cout << min(min_x, min_y);
}