//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <stack>
//#include <map>
//#include <stdio.h>
//using namespace std;
//map<char, char> key1;
//map<char, char> key2;
//int main() {
//    key1['('] = ')';
//        key2[')'] = '(';
//    key1['['] = ']';
//        key2[']'] = '[';
//    key1['{'] = '}';
//        key2['}'] = '{';
//    string input;
//    cin >> input;
//    stack<char> stack;
//    for (int i = 0; i < input.size(); i++){
//        if (key2[input[i]] == NULL){
//            stack.push(input[i]);
//        }
//        else{
//            if (stack.size() == 0){
//                cout << "Wrong";
//                return 0;
//            }
//            if (key1[stack.top()] == input[i]){
//                stack.pop();
//            }
//            else{
//                cout << "Wrong";
//                return 0;
//            }
//        }
//    }
//    if (stack.size() == 0){
//        cout << "OK";
//    }
//    else{
//        cout << "Wrong";
//    }
//}