//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <stdio.h>
//#include <stack>
//using namespace std;
//stack<int> track;
//void print(stack<int> input){
//    if (input.size() == 0){
//        cout << 0 << "\n";
//        return;
//    }
//    int largest = -1;
//    while (!input.empty()){
//        if (largest < input.top()){
//            largest = input.top();
//        }
//        input.pop();
//    }
//    cout << largest << "\n";
//}
//int main() {
//    int length;
//    cin >> length;
//    stack<int> cargo;
//    int t;
//    vector<int> output;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        if (t == 0){
//            cin >> t;
//            cargo.push(t);
//            if (cargo.size() == 1){
//                track.push(t);
//            }
//            if (t > track.top()){
//                track.push(t);
//            }
//            else if (cargo.size() != 1){
//                track.push(track.top());
//            }
//            continue;
//        }
//        if (t == 1 && cargo.size() > 0){
//            cargo.pop();
//            track.pop();
//            continue;
//        }
//        if (t == 2){
//            if (track.size() == 0){
//                output.push_back(0);
//                continue;
//            }
//            output.push_back(track.top());
//        }
//    }
//    cout << "\n";
//    for (int i = 0; i < output.size(); i++){
//        cout << output[i] << "\n";
//    }
//}
///*
//5
//0 3
//0 4
//1
//1
//0 4
// */
///*
//13
//0 1
//0 2
//2
//0 4
//0 2
//2
//1
//2
//1
//1
//2
//1
//2
// */