//#include <iostream>
//using namespace std;
//int sums[7][2];
//int main() {
//    int length;
//    cin >> length;
//    int psum = 0;
//    int t;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        psum += t;
//        psum %= 7;
//        if (psum == 0){
//            sums[0][1] = i + 1;//edge case
//        }
//        else{
//            if (sums[psum][0] == 0){
//                sums[psum][0] = i + 1;
//            }
//            else{
//                sums[psum][1] = i + 1;
//            }
//        }
//    }
//
//    int output = 0;
//    for (auto & sum : sums){
//        output = max(sum[1] - sum[0], output);
//    }
//    cout << output;
//
//}