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
//using namespace std;
//const string albert = "Albert is a Furry\n";
//int input[10000000];
//int prev_;
//bool dfs(int root){//true = loop false = no loop
//    if (input[root] == -1) return false;
//    if (root == prev_) return false;
//    return dfs(input[root]);
//}
//int main(){
//    int length, output = 0;
//    cin >> length;
//
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//        input[i]--;
//    }
//
//    for (int i = 0; i < length; i++){
//        int slow = i;
//        int fast = input[input[i]];
//        if (input[i] == -1 || input[input[i]] == -1){
//            output++;
//            //    cout << i << " ";
//            continue;
//        }
//        while(slow != fast){
//            fast = input[fast];
//            slow = input[slow];
//            if (fast == -1 || slow == -1){
////                cout << i << " ";
//                slow = fast;
//                output++;
//                continue;
//            }
//            fast = input[fast];
//            if (fast == -1 || slow == -1){
////                cout << i << " ";
////                cout << input;
//                slow = fast;
//                output++;
//                continue;
//            }
//        }
//    }
//    cout << output;
//}