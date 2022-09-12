//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct place{
//    long long int val;
//    long long int i;
//};
//
//bool compare(place a, place b){
//    return a.val < b.val;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    long long int length, target;
//    cin >> length >> target;
//
//    place input[length];
//    for (long long int i = 0;i < length; i++){
//        cin >> input[i].val;
//        input[i].i = i;
//    }
//
//    sort(input, input + length, compare);
//
//    long long int l = 0, h = length - 1;
//    while (l != h){
//        if (input[h].val + input[l].val == target && l != h){
//            cout << input[l].i + 1 << " " << input[h].i + 1;
//            return 0;
//        }
//        else if (input[h].val + input[l].val > target){
//            h--;
//        }
//        else{
//            l++;
//        }
//    }
//    while(1){
//        cout << "IMPOSSIBLE";
//    }
//    cout << "IMPOSSIBLE";
//    return 0;
//}
///*
//4 8
//2 7 5 1
//
//0 2 3
//*/
