//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <stdio.h>
//#include <stack>
//using namespace std;
//int output = 0;
//int input;
//void dfs(int money, string number){
//    if (money == input){
//        output++;
//        return;
//    }
//    if (money > input){
//        return;
//    }
//    if (number == "five"){
//        dfs(money + 5, "five");
//        dfs(money + 2, "two");
//        dfs(money + 1, "one");
//    }
//    if (number == "two"){
//        dfs(money + 2, "two");
//        dfs(money + 1, "one");
//    }
//    if (number == "one"){
//        dfs(money + 1, "one");
//    }
//}
//int main() {
//    cin >> input;
//    dfs(0, "five");
//    cout << output;
//}