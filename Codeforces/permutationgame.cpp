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
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int t;
//    cin >> t;
//    while(t--){
//        int n;
//        cin >> n;
//        int o1, o2, both;
//        o1 = o2 = both = 0;
//        for(int i = 0; i < n; i++){
//            int temp;
//            cin >> temp;
//            if(temp != n-i && temp != i+1) both++;
//            else if(temp != i+1) o1++;
//            else if(temp != n-i) o2++;
//        }
//        //cout << o1 << " " << o2 << " " << both << endl;
//        if(o1 + both <= o2){
//            cout << "First" << endl;
//        }
//        else if(o2 + both < o1){
//            cout << "Second" << endl;
//        }
//        else cout << "Tie" << endl;
//    }
//}