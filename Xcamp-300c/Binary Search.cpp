//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int length, target;
//void binary_search(int l, int r, int input[]){
//    int mid = l + r;
//    mid /= 2;
//
//    if (input[mid] == target){
//        while(input[mid - 1] == target){
//            mid--;
//        }
//        cout << mid;
//        exit(0);
//    }
//
//    if (l == r - 1){
//        return;
//    }
//
//    if (input[mid] < target){
//        return binary_search(mid, r, input);
//    }
//    if (input[mid] > target){
//        return binary_search(l, mid, input);
//    }
//    exit(-1);
//}
//
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> length >> target;
//    int input[length + 1];
//    input[0] = -1;
//    for (int i = 1; i <= length; i++){
//        cin >> input[i];
//    }
//    binary_search(-1, length + 1, input);
//    cout << 0;
//}
///*
//7 7
//1 2 3 4 5 6 7
// */