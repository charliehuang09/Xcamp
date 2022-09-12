//#include <iostream>
//#include<map>
//
//using namespace std;
//int main(){
//    long long int length, target, t;
//    cin >> length >> target;
//    length++;
//    long long int psum[length];
//    map<long long int, long long int> map;
//    psum[0] = 0;
//    for (long long int i = 1; i < length; i++){
//        cin >> t;
//        psum[i] = psum[i - 1] + t;
//    }
//
//    map[0] = 1;
//
//    long long int output = 0;
//    for (long long int i = 1; i < length; i++){
//        cout << - (target - psum[i]) << "\n";
//        map[psum[i]]++;
//        if (map.find(- (target - psum[i])) != map.end()){
//            output += map[- (target - psum[i])];
//        }
//
//        if (psum[i] == target && target != 0){
//            output++;
//        }
//
//    }
//    cout << "\n" << output;
//
//    return 0;
//}