#include<iostream>
#include<algorithm>
using namespace std;

int prime[100];
int prcount = 0;
void sieve(){
    bool check[100] = {false};
    int n = 100;

    for(int i=2; i<=n; i++){
        if(check[i] == false)
        {
            prime[prcount++] = i;

            for(int j = i*i; j<=n; j+=i){
                check[j] = true;
            }
        }
    }
}

int main(void){
    sieve();
    for(int i=0; i<prcount; i++){
        cout << prime[i] << ' ';
    }

    return 0;
}