//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <stack>
//#include <map>
//#include <stdio.h>
//#include <stack>
//#include <stdlib.h>
//#include <queue>
//using namespace std;
//bool search(queue<int> q,int search){
//    while (!q.empty()){
//        if (q.front() == search){
//            return true;
//        }
//        q.pop();
//    }
//    return false;
//
//}
//int main() {
//    int cash, length, t, output = 0;
//    cin >> cash >> length;
//    queue<int>  q;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        if (!search(q,t)){
//            output++;
//            q.push(t);
//            if (q.size() > cash){
//                q.pop();
//            }
//        }
//    }
//    cout << output;
//}