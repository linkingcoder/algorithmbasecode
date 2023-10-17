#include <iostream>

using namespace std;
const int N=100010;
int S[N],a[N];
int main(){
    int n,m;
    cin>>n>>m;
    for (int i = 1; i <=n ; ++i) {
        scanf("%d",&S[i]);
        a[i]=S[i]-S[i-1];
    }
    while (m--){
        int l,r,c;
        scanf("%d %d %d",&l,&r,&c);
        a[l]+=c;
        a[r+1]-=c;
    }
    for (int i = 1; i <=n ; ++i) {
        S[i]=S[i-1]+a[i];
        if(i!=n){
            cout<<S[i]<<" ";
        } else
        {
            cout<<S[i]<<endl;
        }
    }

    return 0;
}