#include<bits/stdc++.h>
using namespace std;
void lap(string s, int n, string t){
if(n==0) {
    cout<<t<<endl;
    return;
}
for(int i=0; i<n; i++){
    string t_new = t+s[i];
    string s_new = s.substr(0,i)+s.substr(i+1);
    lap(s_new, n-1, t_new);
}
}

int main(){
    int m;
    cin>>m;
    string s="";
    for(int i=1; i<=m; i++) s+=to_string(i);
    int n=s.length();
    lap(s, n, "");
    return 0;
}
