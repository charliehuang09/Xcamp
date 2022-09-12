//#include <iostream>
//
//using namespace std;
//int main(){
//    int length;
//    long long int output = -2147483648;
//    cin >> length;
//    long long int input[length];
//    for (int i = 0; i < length; i++) {
//        cin >> input[i];
//        output = max(input[i], output);
//    }
//
//    long long int sum = 0;
//    for (long long int i = 0; i < length; i++) {
//        if (sum + input[i] < 0){
//            sum = 0;
//        }
//        else{
//            sum += input[i];
//            output = max(sum, output);
//        }
//    }
//
//    cout << "\n" << output;
//
//
//}
