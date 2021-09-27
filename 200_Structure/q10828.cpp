#include<iostream>
#include<cstring>
using namespace std;

int stack[10000];
int length=0;

int empty(void);

void push(int val){
    stack[length] = val;
    length++;
}

int pop(void){
    if (empty() == 1)
        return -1;
    
    int val = stack[length-1];
    stack[length-1] = -1;
    length--;

    return val;
}

int size(void){
    return length;
}

int empty(void){
    if(length == 0)
        return 1;
    else
        return 0;
}

int top(void){
    if (empty() == 1)
        return -1;

    return stack[length-1];
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string command;
    int (*funcp) (void) = NULL;

    memset(stack,-1,sizeof(stack));
    cin >> n;
    while(n--){
        cin >> command;

        if(command == "push"){
            int val;
            cin >> val;
            push(val);

            continue;
        }
        else if(command == "pop")
            funcp = pop;
        else if(command == "size")
            funcp = size;
        else if(command == "empty")
            funcp = empty;        
        else if(command == "top")
            funcp = top;

        int result = funcp();
        cout << result << '\n';
    }
}