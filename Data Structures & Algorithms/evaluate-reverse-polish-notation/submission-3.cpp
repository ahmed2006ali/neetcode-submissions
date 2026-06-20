#include <cctype>
#include<string>
#include<assert.h>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> numbers;
        for(string s : tokens){
            if(isdigit(s[0]) || (s.size() > 1 && s[0] == '-')){
                numbers.push(stoi(s));
            }// num then push into stack
            else if(s =="+"){
                int secondNum = numbers.top();
                numbers.pop();
                int firstNum = numbers.top();
                numbers.pop();
                numbers.push(firstNum + secondNum);
            }
            else if(s=="-"){
                int secondNum = numbers.top();
                numbers.pop();
                int firstNum = numbers.top();
                numbers.pop();
                numbers.push(firstNum - secondNum);
            }
            else if(s=="*"){
                int secondNum = numbers.top();
                numbers.pop();
                int firstNum = numbers.top();
                numbers.pop();
                numbers.push(firstNum * secondNum);
            }
            else if(s=="/"){
                int secondNum = numbers.top();
                numbers.pop();
                int firstNum = numbers.top();
                numbers.pop();
                assert(secondNum!=0);
                numbers.push(firstNum / secondNum);
            }
        }
        return numbers.top();
    }
};