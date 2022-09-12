//#include <iostream>
//using namespace std;
//int main(){
//    int length, target;
//    cin >> length >> target;
//    length++;
//    int prefix[length];
//    prefix[0] = 0;
//    int psum = 0, t;
//    for (int i = 1; i < length; i++) {
//        cin >> t;
//        psum += t;
//        prefix[i] = psum;
//    }
//
//    int l = 0, h = 0, output = 0;
//    while (l < length - 1 && h < length){
//        if (prefix[h] - prefix[l] == target){
//            output++;
//            l++;
//            h++;
//        }
//        else if (prefix[h] - prefix[l] < target){
//            h++;
//        }
//        else{
//            l++;
//        }
//    }
//    cout << output << endl;
//    return 0;
//}