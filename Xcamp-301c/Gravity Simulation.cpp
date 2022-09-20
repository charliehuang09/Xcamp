#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
#include <stdlib.h>     //for using the function sleep
#include <iomanip>
#define ll long long
using namespace std;

const float gravity = 9.8;
const string albert = "Albert is a Furry\n";

int board[100][100];
int x = 50;
int y = 100;
int t = 0;//time

void clear_board(){
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            board[i][j] = 0;
        }
    }
}

void print_board(){
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

void update(){
    board[y][x] = 0;
    t++;
    y -= t^2;
    y = max(0, y);
    board[y][x] = 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    clear_board();

    string t;
    while(true){
        update();
        cout << y << " ";
        if (!y) return 0;
//        print_board();
        cout << "\n\n";
//        cin >> t;
    }
}
