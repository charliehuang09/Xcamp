//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//#define ll long long
//ll input[10000000];
//int length, target;
//ll get_wood(int value){
//    ll output = 0;
//    for (int i = 0; i < length; i++){
//        if (input[i] - value > 0) output += input[i] - value;
//    }
//    return output;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> length >> target;
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//    }
//    sort(input, input + length);
////    cout << get_wood(36);
//    int l = 0;
//    int r = input[length - 1];
//    while(r - l > 1){
//        int mid = (r + l) / 2;
//        ll value = 0;
//        for (int i = 0; i < length; i++){
//            if (input[i] - mid > 0) value += input[i] - mid;
//        }
//        if (value < target){
//            r = mid;
//        }
//        else{
//            l = mid;
//        }
//    }
////    cout << r << " " << l;
//    while(get_wood(l + 1) >= target){
//        l++;
//    }
//    cout << "\n";
//    cout << l;
//}
///*
//5 20
//4 26 40 42 46
// */
////max