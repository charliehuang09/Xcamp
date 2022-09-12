//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#define ll long long
//using namespace std;
//int length, cows, t, maximum = 0;
//vector<int> input;
//
//bool is_valid(int x){
//    int value = -x;
//    int index = 0;
//    for (int i = 0; i < cows; i++){
//        value += x;
//        while(input[index] < value){
//            index++;
//            if (index == input.size()){
//                return false;
//            }
//        }
//        value = input[index];
//        if (value > maximum){
//            return false;
//        }
//    }
//    if (value > maximum){
//        return false;
//    }
//    return true;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> length >> cows;
//    int l = 0;
//    int r = 0;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        maximum = max(maximum, t);
//        input.push_back(t);
//    }
//    sort(input.begin(), input.end());
//    r = maximum;
//
//    while(r - l > 1){
//        int mid = (r + l) / 2;
//        if (is_valid(mid)){
//            l = mid;
////            cout << mid << " valid\n";
//        }
//        else{
//            r = mid;
////            cout << mid << " not valid\n";
//        }
//    }
//    cout << l;
//
//}