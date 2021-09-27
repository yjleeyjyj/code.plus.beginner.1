#include<iostream>
#include<string>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int cursor = str.length();

    int t;
    cin >> t;

    while(t--){
        char cmd;
        cin >> cmd;

        if(cmd == 'L' && cursor > 0)
            cursor--;
        else if(cmd == 'D' && cursor < str.length())            
            cursor++;
        else if(cmd == 'B'){
            if(cursor == 0)
                continue;

            string temp = str.substr(cursor, str.size() - 1);
            str.erase(cursor-1);
            str.append(temp);
            cursor--;
        }
        else if(cmd == 'P'){
            string input;
            cin >> input;
            str.insert(cursor, input);
            cursor++;
        }
    }

    cout << str;

    return 0;
}
