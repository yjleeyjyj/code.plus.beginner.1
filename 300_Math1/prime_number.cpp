#include<iostream>
#include<algorithm>
using namespace std;

bool prime_number_1(int n){
    if (n < 2)
        return false;
    
    for(int i=2; i<n; i++){
        if(n % i == 0)
            return false;
    }

    return true;
}

bool prime_number_2(int n){
    if (n < 2)
        return false;
    
    for(int i=2; i<(n/2); i++){
        if(n % i == 0)
            return false;
    }

    return true;
}

bool prime_number_3(int n){
    if (n < 2)
        return false;
    
    for(int i=2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }

    return true;
}

int main(void){
    int n;
    cin >> n;
    

    cout << prime_number_1(n) << '\n';
    cout << prime_number_2(n) << '\n';
    cout << prime_number_3(n) << '\n';
    return 0;
}