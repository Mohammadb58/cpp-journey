#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;

bool isBalanced(const string& paraentheses){
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
                return false;
            }
        } 
    }
    if(!stack1.empty()){
        return false;
    }
    else{
        return true;
    }
}


int main() {
    cout << "\n\n";
    string s1 = "([{{9888}}])";
    string s2 = "abc(def)[ghi]{jkl}";
    string s3 = "hubiwtehuerbiqhuoberq9)";
    bool b1 = isBalanced(s1);
    bool b2 = isBalanced(s2);
    bool b3 = isBalanced(s3);
    if(b1){
        cout << "\nBalanced " << s1;
    }
    else{
        cout << "\nNot Balanced " << s1;
    }

    if(b2){
        cout << "\nBalanced " << s2;
    }
    else{
        cout << "\nNot Balanced " << s2;
    }

    if(b3){
        cout << "\nBalanced " << s3;
    }
    else{
        cout << "\nNot Balanced " << s3;
    }
    cout << "\n\n";
    return 0;
}
