//#include <iostream>
//using namespace std;
//int main() {
//    unsigned long long int length, questions;
//    cin >> length >> questions;
//    unsigned long long int one[length];
//    unsigned long long int two[length];
//    unsigned long long int three[length];
//
//    int t;
//    cin >> t;
//    if (t == 1){
//        one[0] = 1;;
//        two[0] = 0;
//        three[0] = 0;
//    }
//    if (t == 2){
//        one[0] = 0;
//        two[0] = 1;
//        three[0] = 0;
//    }
//    if (t == 3){
//        one[0] = 0;
//        two[0] = 0;
//        three[0] = 1;
//    }
//
//    for (int i = 1; i < length; i++){
//        cin >> t;
//        if (t == 1){
//            one[i] = one[i - 1] + 1;
//            two[i] = two[i - 1];
//            three[i] = three[i - 1];
//        }
//        if (t == 2){
//            one[i] = one[i - 1];
//            two[i] = two[i - 1] + 1;
//            three[i] = three[i - 1];
//        }
//        if (t == 3){
//            one[i] = one[i - 1];
//            two[i] = two[i - 1];
//            three[i] = three[i - 1] + 1;
//        }
//    }
//
//    unsigned long long int start, end;
//    for (int i = 0; i < questions; i++){
//        cin >> start >> end;
//        start--;
//        start--;
//        end--;
//        if (start == -1){
//            cout << one[end] << " " << two[end] << " " << three[end] << "\n";
//        }
//        else{
//            cout << one[end] - one[start] << " " << two[end] - two[start] << " " << three[end] - three[start] << "\n";
//        }
//    }
//}
