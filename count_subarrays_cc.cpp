#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,len;
        len = 1;
        cin>>n;
        vector<long long int> a(n);
        for(long int i = 0; i<n; i++)
            cin>>a[i];
        long int count = n;
        for(long int i=0; i<n-1; i++){
            if(a[i] <= a[i+1])
                len++;
            else{
                count += (len*(len-1))/2;
                len = 1 ;
            }
        }
        if(len>1)
            count += (len*(len-1))/2;
        cout<<count<<endl;
    }
    return 0;
}