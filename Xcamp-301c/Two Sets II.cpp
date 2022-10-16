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
int helper(int a, int b, vector<int> a_, vector<int> b_, int index){
    if (index == 1){
        if (a == b){
            cout << "\n";
            for (int i = 0; i < a_.size(); i++) cout << a_[i] << " ";
            cout << "\n";
            for (int i = 0; i < b_.size(); i++) cout << b_[i] << " ";
            cout << "\n";
            return 1;
        }
        return 0;
    }
    index--;
//    cout << index;
//    return helper(a, b, index);
    vector<int> newa = a_;
    vector<int> newb = b_;
    newa.push_back(index);
    newb.push_back(index);
    return helper(a + index, b, newa, b_, index) + helper(a, b + index, a_, newb, index);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int input = 7;
    vector<int> empty;
//    cin >> input;
    cout << helper(input, 0, empty, empty, input + 0);

}