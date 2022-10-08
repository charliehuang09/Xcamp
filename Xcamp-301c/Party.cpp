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
struct item{
    int value;
    int quantity;
    int price;
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int length, budget;
    cin >> length >> budget;
    int dp[budget + 1];
    memset(dp, 0, sizeof(dp));
    int price, value, quantity;
    for (int i = 0; i < length; i++){
        cin >> price >> value >> quantity;
        for (int j = budget - price; j >= 0; j--){
            int times = 1;
            while(times * price + j <= budget && times <= quantity){
                dp[times * price + j] = max(dp[times * price + j], dp[j] + value * times);
                times++;
            }
        }
    }
    for (int i = 0; i <= budget; i++){
        cout << dp[i] << " ";
    }
}