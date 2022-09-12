//#include <iostream>
//#include <vector>
//using namespace std;
//void Permutation (int idx, vector<int> arr, vector<int> used, int n){
//  if (idx == n) {
//    for (int i = 0; i < n; i++){
//      cout << arr[i] << " ";
//    }
//    cout << endl;
//    return;
//  }
//
//  for (int i = 0; i < n; i++){
//    if (used[i]) {
//      continue;
//    }
//    arr[idx] = i+1;
//    used[i] = true;
//    Permutation(idx+1, arr, used,n);
//    used[i] = false;
//  }
//
//  return;
//}
//int main() {
//  int n;
//  cin >> n;
//  vector<int> used(n, false);
//  vector<int> arr(n, 0);
//  Permutation(0, arr, used, n);
//
//}
////1234
///*
//0 0 0 0
//^
//|---
//
//1 0 0 0
//  ^
//  |---
//*/