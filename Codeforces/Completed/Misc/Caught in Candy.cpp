//#include <bits/stdc++.h>
//using namespace std;
//struct coord{
//    int x;
//    int y;
//};
//int main(){
//    int length, startx, starty;
//    cin >> length >> startx >> starty;
//    coord input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i].x;
//        cin >> input[i].y;
//    }
//    coord largest;
//    largest.x = startx;
//    largest.y = starty;
//    for (int i = 0; i < length; i++){
//        if ( abs (startx - largest.x) * abs (startx - largest.x) + abs (starty - largest.y) * abs (starty - largest.y) < abs (startx - input[i].x) * abs (startx - input[i].x) + abs (starty - input[i].y) * abs (starty - input[i].y)){
//            largest = input[i];
//        }
//    }
//    //cout << largest.x << largest.y << "\n";
//    double output = abs (startx - largest.x) * abs (startx - largest.x) + abs (starty - largest.y) * abs (starty - largest.y);
//    output = sqrt(output);
//    output *= 2;
//    cout << setprecision(100) << output << '\n';
//}