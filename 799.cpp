#include <iostream>

using namespace std;
int n;
int  a[100010];
int S[100010];

int main(){
    int res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0,j=0; i <n ; i++) {
        S[a[i]]++;
        while (j<i&&S[a[i]]>1) S[a[j++]]--;
        res = max(res,i-j+1);
    }
    cout<<res<<endl;
    return 0;
}