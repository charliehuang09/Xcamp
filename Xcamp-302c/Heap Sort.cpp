//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#define ll long long
//#define INT_MAX 2147483647
//using namespace std;
//int heap[100000];
//int idx = 0;
//void insert(int root){
//    if (root == 0) return;
//    if (heap[root] < heap[(root - 1) / 2]){
//        swap(heap[root], heap[(root - 1) / 2]);
//        insert((root - 1) / 2);
//    }
//}
//    if (heap[2 * root + 1] < heap[root] || heap[2 * root + 2] < heap[root]){
//        if (heap[2 * root + 1] < heap[2 * root + 2]){
//            swap(heap[root], heap[2 * root + 1]);
//            remove(2 * root + 1);
//        }
//        else {
//            swap(heap[root], heap[2 * root + 2]);
//            remove(2 * root + 2);
//        }
//    }
//}
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    for (int i = 0; i < 100000; i++) heap[i] = INT_MAX;
//    int length, a;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        cin >> a;
//        heap[idx] = a;
//        insert(idx);
//        idx++;
//    }
//
//    for (int i = 0; i < length; i++){
//        cout << heap[0] <<" ";
//        heap[0] = heap[idx - 1];
//        heap[idx] = INT_MAX;
//        remove(0);
//        idx--;
//        idx = max(0, idx);
//    }
//}