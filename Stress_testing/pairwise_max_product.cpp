#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<long long int >a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    cout<<a[a.size()-1]*a[a.size()-2]<<endl;
    return 0;
}