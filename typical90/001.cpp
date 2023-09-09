#include<bits/stdc++.h>
#include <atcoder/all>
using namespace std;
#define LL long long

int check(vector<int> a, int len, int k, int l){
    int cnt = 0;
    int now = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] - now >= len){
            cnt++;
            now = a[i];
        }
    }
    if(l-now >= len) cnt++;
    if(cnt >= k + 1) return 1;
    else return 0;
}

int main(){
    int n, l;
    cin >> n >> l;
    int k;
    cin >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int left = -1, right = l+1;
    while(right - left > 1){
        int mid = (left + right)/2;
        if(check(a, mid, k, l)) left = mid;
        else right = mid;
    }
    cout << left << endl;
}