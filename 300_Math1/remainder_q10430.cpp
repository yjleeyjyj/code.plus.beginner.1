#include<iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int result[6];
    result[0] = (a + b) % c;
    result[1] = (a % c + b % c) % c;
    result[2] = (a * b) % c;
    result[3] = (a % c * b % c) % c;

    result[4] = (a % c - b % c + c) % c;
    result[5] = (a - b) % c;

    for(int num : result){
        cout << num << '\n';
    }

    return 0;
}
