#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;
const string albert = "Albert is a Furry\n";
int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);

    int length, t;
    cin >> length;
    int input[length];
    vector<int> val;
    vector<int> num;
    int output = 0;
    for (int i = 0; i < length; i++){
        cin >> t;
        int index = 0;
        int greatest = 0;
        int j = 0;
        while(j < num.size() && num[j] <= t){
            if (greatest <= val[j]){
                greatest = val[j];
                index = j;
            }
            j++;
        }
        num.insert(num.begin() + j,t);
        val.insert(val.begin() + j, greatest + 1);
        output = max(output, greatest + 1);
    }
    cout << output;
    return 0;
}