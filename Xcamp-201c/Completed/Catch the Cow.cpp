//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int main() {
//    int fj,bs;
//    cin >> fj >> bs;
//    int opt = 999999;
//    if (bs % 2 == 0){
//        opt = fj - bs / 2 + 1;
//    }
//    if (bs < fj && fj - bs < opt){
//        cout << fj - bs;
//        return 0;
//    }
//    int i = 0;
//    while (bs > fj){
//        fj = fj * 2;
//        i++;
//    }
//    if (i == 1){
//        i++;
//    }
//    if (abs(fj - bs) > abs((fj - 5) - bs) && abs((fj - 5) - bs) + i < opt){
//        cout << abs((fj - 5) - bs) + i;
//        return 0;
//    }
//    if (abs(fj - bs) + i < opt){
//        cout << abs(fj - bs) + i;
//    }
//    cout << opt;
//
//}