#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n; cin>>n;
    vector<unsigned long long int >a(n,0);
    for(unsigned long long int i=0;i<n;i++) cin>>a[i];
    unsigned long long int max_product = 0;
    for(unsigned long long int i=0;i<n-1;i++){
        for(unsigned long long int j=i+1;j<n;j++){
            if(a[i]*a[j]>max_product) max_product = a[i]*a[j];
        }
    }
    cout<<max_product<<endl;
    return 0;
}