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
//    int lengtha, lengthb;
//    cin >> lengtha >> lengthb;
//    int pos = 0;
//    char a;
//    int b;
//    for (int i = 0; i < lengtha; i++){
//        cin >> b >> a;
//        if (a == 'L'){
//            pos -= b;
//        }
//        else{
//            pos += b;
//        }
//    }
//    int currpos = 0;
//    int output = 0;
//
//    for (int i = 0; i < lengthb; i++){
//        cin >> b >> a;
//        int prevpos = currpos;
//        if (a == 'L'){
//            currpos -= b;
//        }
//        else{
//            currpos += b;
//        }
//        if (a == 'L'){
//            currpos -= b;
//        }
//        else{
//            currpos += b;
//        }
//        if(prevpos < pos && currpos > pos) output++;
//        if (prevpos > pos && currpos < pos) output++;
//        if (currpos == pos) output++;
//    }
//    cout << output;
//}