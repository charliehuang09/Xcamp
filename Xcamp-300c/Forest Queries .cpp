//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length, queries;
//    cin >> length >> queries;
//    string input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//    }
//    int psum[length + 1][length + 1];
//    memset(psum, 0, sizeof(psum));
//    for (int i = 1; i <= length; i++){
//        for (int j = 1; j <= length; j++){
//
//            if (input[i - 1][j - 1] == '*'){
//                psum[i][j] = psum[i-1][j] + psum[i][j-1] - psum[i-1][j-1] + 1;
//            }
//            else{
//                psum[i][j] = psum[i-1][j] + psum[i][j-1] - psum[i-1][j-1];
//            }
//        }
//    }
//
//    int x1, y1, x2, y2;
//    for (int i = 0; i < queries; i++){
//        cin >> x1 >> y1 >> x2 >> y2;
//        cout << psum[x2][y2] - psum[x1 - 1][y2] - psum[x2][y1 - 1] + psum[x1 - 1][y1 - 1] << "\n";
//    }
//    return 0;
//}