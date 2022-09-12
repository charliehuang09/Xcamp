//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    int testcases;
//    cin >> testcases;
//    for (int a = 0; a < testcases; a++){
//        bool done = false;;
//        vector<string> input;
//        string temp;
//        int height, width, x, y;
//        cin >> height >> width >> x >> y;
//        x--;
//        y--;
//        for (int i = 0; i < height; i++){
//            cin >> temp;
//            input.push_back(temp);
//        }
//        if (input[x][y] == 'B'){
//            cout << 0 << "\n";
//            done = true;
//            continue;
//        }
//        for (int i = 0; i < height; i++){
//            if (input[i][y] == 'B'){
//                if (done == false){
//                    done = true;
//                    cout << 1 << "\n";
//                    continue;
//                }
//            }
//        }
//        for (int i = 0; i < width; i++){
//            if (input[x][i] == 'B'){
//                if (done == false){
//                    done = true;
//                    cout << 1 << "\n";
//                    continue;
//                }
//            }
//        }
//        if (done == false){
//            for (int i = 0; i < height; i++){
//                for (int j = 0; j < width; j++){
//                    if (input[i][j] == 'B' && done == false){
//                        done = true;
//                        cout << 2 << "\n";
//                    }
//                }
//            }
//            if (done == false){
//                cout << -1 << "\n";
//            }
//        }
//    }
//}