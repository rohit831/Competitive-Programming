#include <bits/stdc++.h>
using namespace std;

int main(){
    string  str;
    int ans=0;
    cin>>str;
    int a,b,c;
    a=b=c=0;
    int n = str.size();

    for(int i=0 ; i<n; i++){
        if(str[i] == 'C'){
            a=max(i+1,a);
            while(a<n && str[a]!='H')
                a++;
            if(a==n) break;
            b=max(a+1,b);
            while(b<n && str[b]!='E')
                b++;
            if(b==n) break;
            c = max(b+1,c);
            while(c<n && str[c]!='F')
                c++;
            if(c==n) break;
            a++;b++;c++;
            ans++;
        }
    }
    cout << ans<< endl;
    return 0;
}