//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <stdio.h>
//#include <stack>
//#include <queue>
//using namespace std;
//int main() {
//    int l1, l2;
//    cin >> l1 >> l2;
//    queue<int> i1;
//    queue<int> i2;
//    int t;
//    for (int i = 0; i < l1; i++){
//        cin >> t;
//        i1.push(t);
//    }
//    for (int i = 0; i < l2; i++){
//        cin >> t;
//        i2.push(t);
//    }
//    vector<int> output;
//    while (!i1.empty() && !i2.empty()){
//        if (i1.front() > i2.front()){
//            output.push_back(i2.front());
//            i2.pop();
//        }
//        else{
//            output.push_back(i1.front());
//            i1.pop();
//        }
//    }
//    while (!i1.empty()){
//        output.push_back(i1.front());
//        i1.pop();
//    }
//    while (!i2.empty()){
//        output.push_back(i2.front());
//        i2.pop();
//    }
//    for (int i = 0; i < output.size(); i++){
//        cout << output[i] << " ";
//    }
//}
///*
//4 5
//1 4 7 8
//2 4 6 9 10
//
//
// */