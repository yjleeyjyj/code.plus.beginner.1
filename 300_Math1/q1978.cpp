#include<iostream>
#include<algorithm>
using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i=2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num, n, count=0;

    cin >> num;

    while(num--){
        cin >> n;
        if(isPrime(n))
            count++;
    }

    cout << count << '\n';
    return 0;
}
