#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    caseloop:
    while(t--){
        string str; cin >> str;
        
        int stack = 0;
        for(char ch : str){
            if(ch == '(')
                stack++;
            else if(ch == ')'){
                if(stack == 0){
                    cout << "NO\n";
                    goto caseloop;
                }
                
                stack--;
            }
        }

        if(stack == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
