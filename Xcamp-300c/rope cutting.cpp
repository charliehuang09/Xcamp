//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#define ll long long
//using namespace std;
//int length, target;
//double input[100000];
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> length >> target;
//    double l = 0;
//    double r = 0;
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//        r = max(r, input[i]);
//    }
//    double mid = (r + l) / 2;
//    while(mid != r && mid != l){
//        ll value = 0;
//        for (int i = 0; i < length; i++){
//            value += input[i] / mid;
//        }
////        cout << value << " " << mid << "\n";
//        if (value < target){
//            r = mid;
//        }
//        else{
//            l = mid;
//        }
//        mid = (r + l) / 2;//average
//    }
//    cout << "\n";
//    printf("%.2lf", l);
//}