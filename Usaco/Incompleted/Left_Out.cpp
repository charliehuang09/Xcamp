////#include <iostream>
////#include <fstream>
////using namespace std;
////
////int N;
////int grid[1000][1000];
////
////int num(int i1, int j1, int i2, int j2, int b)
////{
////    int total = 0;
////    for (int i=i1; i<=i2; i++)
////        for (int j=j1; j<=j2; j++)
////            if (grid[i][j] == b) total++;
////    return total;
////}
////
////int main(void)
////{
//////    ifstream fin ("leftout.in");
////    string s;
////    cin >> N;
////    for (int i=0; i<N; i++) {
////        cin >> s;
////        for (int j=0; j<N; j++) grid[i][j] = s[j]=='L';
////    }
////
////    // Flip columns and rows so top row and left column all zero
////    for (int i=1; i<N; i++) {
////        grid[i][0] = grid[i][0] ^ grid[0][0];
////        for (int j=1; j<N; j++) grid[i][j] = grid[i][j] ^ grid[0][j] ^ grid[i][0];
////    }
////
//////    ofstream fout ("leftout.out");
////
////    if (num (1,1,N-1,N-1,0) == 0) { cout << "1 1\n"; return 0; }
////    if (num (1,1,N-1,N-1,1) == N-1) {
////        for (int j=1; j<N; j++) if (num(1,j,N-1,j,1)==N-1) { cout << "1 " << j+1 << "\n"; return 0; }
////        for (int i=1; i<N; i++) if (num(i,1,i,N-1,1)==N-1) { cout << i+1 << " 1\n"; return 0; }
////        cout << "-1\n"; return 0;
////    }
////    if (num(1,1,N-1,N-1,1)!=1) { cout << "-1\n"; return 0; }
////    for (int i=1; i<N; i++)
////        for (int j=1; j<N; j++)
////            if (grid[i][j]==1) { cout << i+1 << " " << j+1 << "\n"; }
////    return 0;
////}
//
//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#include <fstream>
//#define ll long long
//using namespace std;
//int input[1000][1000];
//int main(){
//    ifstream fin ("buckets.in");
//    ofstream fout ("leftout.out");
//    int length;
//    char t;
//    cin >> length;
//    int input[length][length];
//    for (int i = 0; i < length; i++){
//        for (int j = 0; j < length; j++){
//            cin >> t;
//            if (t == 'R') input[i][j] = 1;
//            else input[i][j] = 0;
//        }
//    }
//    for (int i = 1; i < length; i++){
//        if (input[i][0] == 0){
//            for (int j = 0; j < length; j++){
//                if (input[i][j] == 0) input[i][j] = 1;
//                else input[i][j] = 0;
//            }
//        }
//    }
//    for (int i = 1; i < length; i++){
//        if (input[0][i] == 0){
//            for (int j = 0; j < length; j++){
//                if (input[j][i] == 0) input[j][i] = 1;
//                else input[j][i] = 0;
//            }
//        }
//    }
//
//    for (int i = 0; i < length; i++){
//        for (int j = 0; j < length; j++){
//            cout << input[i][j];
//        }
//        cout << "\n";
//    }
//
//    int x = -1;
//    int y = -1;
//    bool found = false;
//    bool edge = false;
//    for (int i = 1; i < length; i++){
//        for (int j = 1; j < length; j++){
//            if (input[i][j] == 0){
//                if (!found){
//                    x = i;
//                    y = j;
//                    found = true;
//                }
//            }
//            else edge = true;
//        }
//    }
//
//    if (!edge){
//        cout << "1 1";
//        return 0;
//    }
//
//    for (int i = 1; i < length; i++){
//        bool out = true;
//        for (int j = 1; j < length; j++){
//            if (input[i][j] == 1) out = false;
//        }
//        if (out){
//            cout << i + 1 << " 1";
//            return 0;
//        }
//    }
//
//    if (found){
//        cout << x + 1 << " " << y + 1;
//        return 0;
//    }
//
//
//    for (int i = 1; i < length; i++){
//        bool out = true;
//        for (int j = 1; j < length; j++){
//            if (input[j][i] == 1) out = false;
//        }
//        if (out){
//            cout << "1 " << i + 1;
//            return 0;
//        }
//    }
//    cout << -1;
//
//    return 0;
//}