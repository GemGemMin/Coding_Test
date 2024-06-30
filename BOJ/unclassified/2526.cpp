#include<iostream>
#include<vector>
using namespace std;
int check[1001];
void func(int x);
int n, p;
int main()
{
    cin >> n >> p;
    int cnt = 0;
    func(n);

    for (int i = 0; i <p; i++)
    {
        if (check[i] == 2)cnt++;
    }
    cout << cnt << endl;
}
void func(int x)
{
    if (check[x] == 2)return;
    check[x]++;
    func(x * n % p);
}