/* RETRY!!!! */

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<char> s;

    int t;
    cin >> t;

    while(t--)
    {
        char c;
        while(cin >> c){
            if (c == ' '){
                while(!s.empty()) {
                    s.pop();
                }
                cout << " ";
                continue;
            }
            else if(c == '\n' || c == '\0'){
                break;
            }
            else{
                s.push(c);
            }
        }
        cout << '\n';
    }
    return 0;
}