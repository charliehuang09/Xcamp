//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    int length, k;
//    cin >> length >> k;
//    int input[length];
//
//    for (int i = 0; i < length; i++) {
//        cin >> input[i];
//    }
//
//    sort(input, input + length);
//
//    int l = 0;
//    int h = 0;
//    int output = 0;
//    while (l < length - 1){
//        output = max(h - l, output);
//        if (input[h] - input[l] > k){
//            l++;
//            continue;
//        }
//        if (h < length){
//            h++;
//            continue;
//        }
//        l++;
//    }
//
//    cout << output;
//}