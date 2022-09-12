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
//#include <bitset>
//using namespace std;
//
//struct point_{
//    int x;
//    int y;
//};
//
//int main() {
//    string t1;
//    string t2;
//    int x;
//
//    t2 = "";
//    for (int i= 0; i < 4; i++){
//        cin >> t1;
//        t2 = t2 + t1;
//    }
//    reverse(t2.begin(), t2.end());
//    bitset<16> start (bitset<16>(t2, 0, t2.size(), '0', '1'));
//
//    t2 = "";
//    for (int i= 0; i < 4; i++){
//        cin >> t1;
//        t2 = t2 + t1;
//    }
//    reverse(t2.begin(), t2.end());
//    bitset<16> end (bitset<16>(t2, 0, t2.size(), '0', '1'));
//
//    queue<bitset<16>> q;
//    map<unsigned long, int> qcheck;
//
//    q.push(start);
//    qcheck[start.to_ulong()] = 1;
//
//    while (!q.empty()){
//        bitset<16> pt = q.front();
//        q.pop();
//        for (int i = 0; i < 16; i++){
//            bitset<16>newpt = pt;
//            if (i % 4 != 3 && newpt[i] != pt[i + 1]){
//                newpt[i].flip();
//                newpt[i + 1].flip();
//
//                if (qcheck[newpt.to_ulong()] == 0){
//                    q.push(newpt);
//                    qcheck[newpt.to_ulong()] = qcheck[pt.to_ulong()] + 1;
//                }
//            }
//
//            if (newpt == end){
//                cout << qcheck[newpt.to_ulong()] - 1;
//                return 0;
//            }
//
//            newpt = pt;
//
//            if (i < 12 && newpt[i] != pt[i + 4]){
//                newpt[i].flip();
//                newpt[i + 4].flip();
//                if (qcheck[newpt.to_ulong()] == 0){
//                    q.push(newpt);
//                    qcheck[newpt.to_ulong()] = qcheck[pt.to_ulong()] + 1;
//                }
//            }
//
//            if (newpt == end){
//                cout << qcheck[newpt.to_ulong()] - 1;
//                return 0;
//            }
//
//        }
//
//    }
//
//    return 0;
//}
///*
//
//1111
//0000
//1110
//0010
//
//1010
//0101
//1010
//0101
//
//
//*/