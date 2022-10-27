//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//
//struct item{
//    int v;//value
//    int s;//start
//};
//struct input_format{
//    int s;
//    int e;
//    int v;
//};
//
//bool compare(input_format a, input_format b){
//    if (a.s == b.s) return a.e < a.e;
//    return a.s < b.s;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    input_format input[length];
//    for (int i = 0; i < length; i++) cin >> input[i].s >> input[i].e >> input[i].v;
//    sort(input, input + length, compare);
//
//    int mval = -1;
//    int ms = 0;
//    int mb = 0;
//    int vcash[10000];
//    int scash[10000];
//    memset(scash, 0, sizeof(scash));
//    memset(vcash, 0, sizeof(vcash));
//    for (int i = 0; i < length; i++){
//        for (int j = input[i].s; j >= 0; j--){
//            if (vcash[j] != 0 && vcash[input[i].e] < vcash[j] + input[i].v){
//                vcash[input[i].e] = vcash[j] + input[i].v;
//                scash[input[i].e] = scash[j];
////                cout << vcash[input[i].e] << " " << mval << "\n";
//                if (vcash[input[i].e] > mval){
////                    cout << vcash[input[i].e] << " " << mval << "\n";
//                    mval = vcash[input[i].e];
//                    ms = scash[input[i].e];
//                    mb = input[i].e;
//                }
//            }
//        }
//        if (vcash[input[i].e] < input[i].v){
//            vcash[input[i].e] = max(vcash[input[i].e], input[i].v);
//            scash[input[i].e] = max(scash[input[i].e], input[i].s);
////            cout << vcash[input[i].e] << " " << mval << "\n";
//            if (vcash[input[i].e] > mval){
////                cout << vcash[input[i].e] << " " << mval << "\n";
//                mval = vcash[input[i].e];
//                ms = scash[input[i].e];
//                mb = input[i].e;
//            }
//        }
//
//    }
////    for (int i = 0; i < 30; i++){
////        cout << i << " ";
////    }
////    cout << "\n";
////    for (int i = 0; i < 30; i++){
////        cout << vcash[i] << " ";
////    }
////    cout << "\n";
////    for (int i = 0; i < 30; i++){
////        cout << scash[i] << " ";
////    }
////    cout << "\n";
////    cout << ms << " " << mb  << " " << mval;
//    cout << mval;
//}