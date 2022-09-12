#include <bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    for (int index = 0; index < testcases;index++){
        int hole, length;
        cin >> hole >> length;
        int input[length];
        for (int i = 0; i < length; i++){
            cin >> input[i];
            input[i] = hole - input[i];
        }
        sort (input, input + length);
        int i = 0;
        int moves = 0;
        while (i < length){
            moves += input[i];
            if (moves >= hole){
                break;
            }
            i++;
        }
        cout << i << "\n";
    }
}