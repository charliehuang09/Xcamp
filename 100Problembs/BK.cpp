//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int bucket1, capacity1;
//    int bucket2, capacity2;
//    int bucket3, capacity3;
//    cin >> bucket1 >> capacity1 >> bucket2 >> capacity2 >> bucket3 >> capacity3;
//    for (int i = 0; i < 33; i++){
//        int t = capacity2;
//        capacity2 = min(bucket2, capacity2 + capacity1);
//        capacity1 -= capacity2 - t;
////        cout << capacity1 << " " << capacity2 << " " << capacity3 << " \n";
//
//        t = capacity3;
//        capacity3 = min(bucket3, capacity3 + capacity2);
//        capacity2 -= capacity3 - t;
////        cout << capacity1 << " " << capacity2 <<  " " << capacity3 << " \n";
//
//        t = capacity1;
//        capacity1 = min(bucket1, capacity1 + capacity3);
//        capacity3 -= capacity1 - t;
////        cout << capacity1 << " " << capacity2 <<  " " << capacity3 << " \n";
////        cout << "\n";
//    }
//    int t = capacity2;
//    capacity2 = min(bucket2, capacity2 + capacity1);
//    capacity1 -= capacity2 - t;
//
//    cout << capacity1 << "\n" << capacity2 << "\n" << capacity3;
//}