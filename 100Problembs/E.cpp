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
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    int arr[length][length];
//    memset(arr, 0, sizeof(arr));
//    for (int i = 1; i <= length / 2; i++){
//        for (int j = i - 1; j <= length - i; j++){
//            arr[i - 1][j] = i;
//            arr[j][i - 1] = i;
//            arr[length - i][j] = i;
//            arr[j][length - i] = i;
//        }
//    }
//    if (length % 2 == 1) arr[length / 2][length / 2] = (length / 2) + 1;
//    for (int i = 0; i < length; i++){
//        for (int j = 0; j < length; j++){
//            if (arr[i][j] < 10 && j > 0) cout << " ";
//            cout << arr[i][j];
//            // if (arr[i][j] < 10) cout << " ";
//        }
//        cout << "\n";
//    }
//}