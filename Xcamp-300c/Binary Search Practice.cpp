//#include <iostream>
//using namespace std;
//
//int binary_search(int left, int right, int input){
//    int mid = right + left;
//    mid /= 2;
//    if (mid * mid == input){
//        return mid;
//    }
//    if (mid * mid < input){
//        return binary_search(mid, right, input);
//    }
//    if (mid * mid > input){
//        return binary_search(left, mid, input);
//    }
//}
//
//int main(){
//    int input;
////    cin >> input;
//    cout << binary_search(0, 10, 49);
//}