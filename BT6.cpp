#include<bits/stdc++.h>
using namespace std;
void dequy(int n, string s, int m){
    if(m>1){
 for(int i=n-1; i>=0; i--){
    if(i==0) swap(s[n-1],s[n-2]);
    else swap(s[i],s[i-1]);
    cout<<s<<endl;
    m--;
    if(m==1) break;
 }
 for(int i=0; i<=n-1; i++){
    if(i==n-1) swap(s[0],s[1]);
    else swap(s[i],s[i+1]);
    cout<<s<<endl;
    m--;
    if(m==1) break;
 }
    dequy(n, s, m);
    }
}
int giaithua(int n){
    int t=1;
for(int i=1; i<=n; i++)
    t*=i;
    return t;
}
int main(){
    int n;
    cin>>n;
    int m= giaithua(n);
    string s="";
    for(int i=1; i<=n; i++) s+=to_string(i);
    cout<<s<<endl;
    dequy(n, s, m);
return 0;
}

