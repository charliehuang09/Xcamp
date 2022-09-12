//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//int board[1010][1010];
//int input[1010][1010];
//
//struct coord{
//    int x, y;
//};
//
//void print_board(){
//    return;
//    for (int i = 0; i < 10; i++){
//        for (int j = 0; j < 10; j++){
//            cout << board[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//
//void print_input(){
//    return;
//    for (int i = 0; i < 10; i++){
//        for (int j = 0; j < 10; j++){
//            cout << input[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//
//int main(){
//    int length, target;
//    cin >> length >> target;
//
//    int x1, y1, x2, y2;
//    for (int i = 0; i < length; i++) {
//        cin >> x1 >> y1 >> x2 >> y2;
//        x1++;
//        x2++;
//        y1++;
//        y2++;
//        input[x1][y1]++;
//        input[x1][y2]--;
//        input[x2][y1]--;
//        input[x2][y2]++;
//
//    }
//
//    print_input();
//
//    int output = 0;
//
//    for (int i = 1; i < 1010; i++){
//        for (int j = 1; j < 1010; j++){
//            board[i][j] = board[i-1][j] + board[i][j-1] - board[i-1][j-1] + input[i][j];
//            if (board[i][j] == target){
//                output++;;
//            }
//        }
//    }
//
//    print_board();
//
//    cout << "\n\n" << output;
//
//    return 0;
//}
