//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    int stacks, instructions;
//    cin >> stacks >> instructions;
//    int input[stacks];
//    for (int i = 0; i < stacks; i++){
//        input[i] = 0;
//    }
//
//    int a, b;
//    for (int i = 0; i < instructions; i++){
//        cin >> a >> b;
//        a--;
//        input[a] = input[a] + 1;
//        input[b] = input[b] - 1;
//    }
//
//    int hay[stacks];
//    int current = 0;
//    for (int i = 0; i < stacks; i++){
//        current += input[i];
//        hay[i] = current;
//    }
//
//    sort(hay, hay + stacks);
//
//    cout << hay[stacks / 2];
//
//
//    return 0;
//}
