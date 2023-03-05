//#include <iostream>
//using namespace std;
//
//int main() {
//    int thing;
//    cin >> thing;
//    int arr[thing];
//    int others[thing];
//    for (int a = 0; a < thing; a++){
//        cin >> arr[a];
//    }
//
//    int times = 0;
//    for (int b = 0; b < thing; b++){
//        cin >> others[b];
//        if (others[b] > times){
//            times = others[b];
//        }
//    }
//    int counts = 0;
//    for (int c = 1; c < times+1; c++){
//        for (int d = 0; d < thing; d++){
//            if (arr[d] < c){
//                others[d] = -1;
//            }
//        }
//        int aaa = 0;
//        int bbb = 0;
//        for (int e = 0; e < thing; e++){
//            if (others[e] > aaa){
//                aaa = others[e];
//                bbb = e;
//            }
//        }
//        cout << counts << endl;
//        if (aaa < 0){
//            break;
//        }
//        counts += aaa;
//        others[bbb] = -1;
//    }
//    cout << counts;
//}