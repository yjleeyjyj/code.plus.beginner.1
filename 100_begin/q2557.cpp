#include<iostream>
using namespace std;

int main(void){
    /* 앞으로 c++17기준 cin, cout 단독 사용시 반드시 입력해주어야 하는 명령! I/O 시간 단축 */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout.tie(NULL);    출력은 안 넣어도 상관 X
    //cin.tie(nullptr);  cin.tie cout.tie 통합, 엄밀한 정의 따르기 위해 널포인터 인자로 넣음.

    cout << "Hello World!";
    return 0;
}
