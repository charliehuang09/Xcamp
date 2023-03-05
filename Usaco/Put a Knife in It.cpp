/*
#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <stack>
using namespace std;

#define int long long

signed main(){
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    int t;
    cin >> t;
    while(t--){
        string s;
        cin.ignore();
        getline(cin, s);
        int n;
        cin >> n;
        char cyp[n];
        int r = 0, a = 0, c = 0;
        stack<int> shift;
        for(int i = 0; i < n; i++){
            cin >> cyp[i];
            if(cyp[i] == 'C'){
                int temp;
                cin >> temp;
                shift.push(temp);
            }
        }

        for(int i = n-1; i >= 0; i--){
            if(cyp[i] == 'A'){
                a++;
            }
            else if(cyp[i] == 'R') {
                r++;
            }
            else{
                int temp = shift.top();
                if(a % 2 == 0) c -= temp;
                else c += temp;
                shift.pop();
            }
            //cout << cyp[i] << " " << a << " " << r << " " << c << endl;
        }


        for(int j = 0; j < s.length(); j++){
            int temp = s[j]-'a';
            if(temp >= 0 and temp <= 26){
                temp += c;
                temp %= 26;
                if(temp < 0) temp += 26;
                s[j] = alpha[temp];
            }
        }

        if(a % 2 == 1){
            for(int j = 0; j < s.length(); j++){
                int temp = s[j]-'a';
                if(temp >= 0 and temp <= 26){
                    temp = 25-temp;
                    s[j] = alpha[temp];
                }
            }
        }
        if(r % 2 == 1){
            reverse(s.begin(), s.end());
        }
        cout << s << endl;
    }
}*/
