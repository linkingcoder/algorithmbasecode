#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n],s[n];
    for (int i = 0; i < n; ++i){
        scanf("%d",&a[i]);

    }
    for(int i=0;i<n;i++){
        s[i+1]=a[i]+s[i];
    }
    while(m--){
        int l,r;
        scanf("%d %d",&l,&r);
        printf("%d\n",s[r]-s[l-1]);
    }
    return 0;
}