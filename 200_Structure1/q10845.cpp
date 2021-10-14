#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct queue{
    int stack[10001];
    int start, end;
    
    queue(){
        start = 0;
        end = 0;
    }

    void push(int num){
        stack[end++] = num;
    }

    int pop(){
        if(isEmpty())
            return -1;

        int num = stack[start++];
        return num;
    }

    int size(){
        return end - start;
    }

    bool isEmpty(){
        if(start == end)
            return true;
        else
            return false;
    }
    
    int front(){
        if(isEmpty())
            return -1;

        return stack[start];
    }

    int back(){
        if(isEmpty())
            return -1;

        return stack[end-1];
    }
};

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    struct queue q;
    
    int n;
    cin >> n;
    while(n--){
        string com;
        cin >> com;

        if(com == "push"){
            int num; cin >> num;
            q.push(num);
        }
        else if(com == "pop"){
            cout << q.pop() << '\n';
        }
        else if(com == "size"){
            cout << q.size() << '\n';   
        }
        else if(com == "empty"){
            int result = (q.isEmpty()) ? 1 : 0;
            cout << result << '\n';
        }
        else if(com == "front"){
            cout << q.front() << '\n';
        }
        else if(com == "back"){
            cout << q.back() << '\n';
        }
    }

    return 0;
}