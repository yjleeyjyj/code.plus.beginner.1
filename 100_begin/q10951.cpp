/* 테스트 케이스의 개수가 주어지지 않은 문제 대처법 */
#include<iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    while(cin >> a >> b){ // while에서 scanf, cin을 받고 입력이 들어오지 않으면, 0, false 상태가 되어 빠져나감.
        // c에서는 whlie(scanf("%d %d", &a, &b) == 2)   > scanf의 리턴값은 전달받은 input 인자의 개수
        cout << a+b << '\n';
    }

    return 0;
}
