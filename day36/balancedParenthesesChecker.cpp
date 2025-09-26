#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";
    string paraentheses = "([{}])";
    stack<char> stack1;

    for(int i = 0; i < paraentheses.size(); i++){
        if(paraentheses[i] == '(' || paraentheses[i] == '[' || paraentheses[i] == '{'){
            if(paraentheses[i] == '('){
                stack1.push('(');
            }
            else if(paraentheses[i] == '['){
                stack1.push('[');
            }
            else if(paraentheses[i] == '{'){
                stack1.push('{');
            }
        }
        else if(paraentheses[i] == ')' || paraentheses[i] == ']' || paraentheses[i] == '}'){
            if(!stack1.empty()){
                if(stack1.top() == '(' && paraentheses[i] == ')'){
                    stack1.pop();
                }
                else if(stack1.top() == '[' && paraentheses[i] == ']'){
                    stack1.pop();
                }
                else if(stack1.top() == '{' && paraentheses[i] == '}'){
                    stack1.pop();
                }
            }
            else{
                break;
            }
        } 
    }

    if(stack1.empty()){
        cout << "\nBalance";
    }
    else{
        cout << "\nNot Balanced";
    }
    cout << "\n\n";
    return 0;
}
