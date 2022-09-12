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
//struct pt_{
//    int size;
//    string number;
//    int remainder;
//};
//
//void print_q(queue<pt_> input){
//    while (!input.empty()){
//        cout << input.front().number << " " << input.front().remainder << "\n";
//        input.pop();
//    }
//}
//
//int remainder(string str, int r)
//{
//    // len is variable to store the
//    // length of number string.
//    int len = str.length();
//
//    int num, rem = 0;
//
//    // loop that find remainder
//    for (int i = 0; i < len; i++) {
//        num = rem * 10 + (str[i] - '0');
//        rem = num % r;
//    }
//
//    return rem;
//}
//
//
//int main(){
//    int num, length;
//    cin >> num >> length;
//    int num_list[length];
//    for (int i = 0; i < length; i++){
//        cin >> num_list[i];
//    }
//    sort (num_list, num_list + length);
//    queue<pt_> q;
//    pt_ t;
//
//    for (int i = 0; i < length; i++){
//        if (num_list[i] != 0){
//            t.number = num_list[i] + '0';
//            int it = t.remainder * 10 + num_list[i];
//            t.remainder = it % num;
//            t.size = 0;
//            q.push(t);
//        }
//    }
//
//    while (!q.empty()){
//        pt_ pt = q.front();
//        q.pop();
//        for (int i = 0; i < length; i++){
//            pt_ newpt = pt;
//            newpt.number += num_list[i] + '0';
//            int it = newpt.remainder * 10 + num_list[i];
//            newpt.remainder = it % num;
//            newpt.size++;
//            if (newpt.size < 510){
//                q.push(newpt);
//            }
//            if (remainder(newpt.number, num) == 0){
//                cout << newpt.number;
//                return 0;
//            }
//        }
//    }
//
//
//    cout << 0;
//    return 0;
//}