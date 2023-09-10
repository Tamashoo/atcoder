#include<bits/stdc++.h>
#include <atcoder/all>
using namespace std;
#define LL long long

int check(string s){
    int n = s.size();
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='(') cnt++;
        else cnt--;
        if(cnt<0) return 0;
    }
    if(cnt==0) return 1;
    else return 0;
}

int main(){
    int n;
    cin >> n;
    if(n%2==1){
        cout << endl;
        return 0;
    }
    for(int i=(1<<n) - 1; i>=0; i--){
        string s = "";
        for(int j=n-1; j>=0; j--){
            if(i&(1<<j)) s += "(";
            else s += ")";
        }
        if(check(s)) cout << s << endl;
    }
}