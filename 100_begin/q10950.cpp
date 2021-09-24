/* 테스트 케이스 개수가 정해져 있는 문제의 처리 */
#include<iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    int a, b;

    cin >> t;
    while(t--){ // 테스트 케이스는 배열 생성하고 따로 입출력 하는게 아니라, 테스트 케이스의 수를 차감할 변수와 반복문으로 연속적 계산 처리 해야함.
        cin >> a >> b;
        cout << a+b << '\n'; // 각 output 케이스는 정확하게 \n으로 나누어서 출력해야 함.
    }
    return 0;
}