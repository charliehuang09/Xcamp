//#include <iostream>
//#include <queue>
//#include <math.h>
//using namespace std;
//int amount, output = 0;//of hay
//void dfs(int space, int current, int arr[4]){
//  if (current == 4){
//    if (space == amount) {
//      // for (int x = 0; x < 4; x++){
//      //   cout << arr[x] << " ";
//      // }
//      // cout << "\n";
//      output++;
//    }
//    return;
//  }
//  for (int i  = sqrt(amount - space) + 1; i >=0; --i) {
//    //cout << i << " ";
//    arr[current] = i;
//    dfs(space + (i * i), current + 1,arr);
//  }
//  return;
//}
//int main() {
//  cin >> amount;
//  int arr[4] = {-1,-1,-1,-1};
//  dfs(0,0,arr);
//  cout << " " << output;
//
//
//
//
//}