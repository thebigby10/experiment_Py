#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n; cin>>n;
    vector<unsigned long long int >a(n,0);
    for(unsigned long long int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    cout<<a[a.size()-1]*a[a.size()-2]<<endl;
    return 0;
}