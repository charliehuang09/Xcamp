/*#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <cmath>
#define ll long long
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.length();
    int lspots, lsum, rspots, rsum;
    lspots = lsum = rspots = rsum = 0;
    for(int i = 0; i < n/2; i++){
        char c = s[i];
        if(c == '_'){
            lspots++;
        }
        else {
            lsum += c - '0';
        }
    }
    for(int i = n/2; i < n; i++){
        char c = s[i];
        if(c == '_'){
            rspots++;
        }
        else {
            rsum += c - '0';
        }
    }
    int dif = abs(lsum - rsum);
    if(lspots - rspots == 0 && dif == 0){
        cout << "false" << endl;
    }
    else if(dif % 9 == 0 && lsum > rsum && rspots - lspots == dif/9*2){
        cout << "false" << endl;
    }
    else if(dif % 9 == 0 && rsum > lsum && lspots - rspots == dif/9*2){
        cout << "false" << endl;
    }
    else cout << "true" << endl;

}
*/