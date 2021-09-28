#include<iostream>
#include<algorithm>

using namespace std;
int gcd_normal(int a, int b){ // 일반적인 방법으로 최대공약수 구하기, 2부터 min(a,b)까지 공통으로 나눠지는 수 갱신하면서 찾기
    int result = 1;
    for(int i = 2; i<=min(a, b); i++){
        if(a % i == 0 && b % i == 0)
            result = i;
    }

    return result;
}

int gcd_euclidean(int a, int b){ // 유클리드 호제법을 이용한 최대공약수 구하기, 재귀함수 이용
    if(b == 0)
        return a;
    else
        return gcd_euclidean(b, a%b);
}

int gcd_euclidean_noRecur(int a, int b){ // 재귀함수 없이 반복문으로 구현하는 유클리드 호제법 최대공약수 구하기
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int gcd_moreThan3(int* arra, int count){ // 3개 이상의 수를 연속적으로 구하기
    if(*(arra + 1) == 0) // 아ㅠㅠ 이거 포인터로 다음 자리가 비어먹은 거 확인하면 될 것 같은데 계속 오류나서 0 초기화하고 체크하는 식으로 확인...
                        // 어차피 gcd lcm은 다 양수인지라 상관은 없는데 좀 아쉽네.....
        return arra[count];
    cout << arra[0] << " " << arra[1] << '\n';
    arra[1] = gcd_euclidean(arra[0], arra[1]);

    return gcd_moreThan3(arra + 1, count + 1);
}

int lcm(int a, int b){ // 최소공배수 구하기, 최소공배 * 최대공약 = A * B <매우 중요>
    int lcm = a * b / gcd_normal(a, b);

    return lcm;
}

int main(void){
    int a,b;
    cin >> a >> b;

    cout << gcd_normal(a, b) << '\n';
    cout << gcd_euclidean(a, b) << '\n';
    cout << gcd_euclidean_noRecur(a, b) << '\n';
    
    int arra[10] = {0};
    int len;
    cin >> len;
    for(int i=0; i< len; i++){
        cin >> arra[i];
    }
    cout << gcd_moreThan3(arra, 0) << '\n';

    cout << lcm(a, b) << '\n';

    return 0;
}