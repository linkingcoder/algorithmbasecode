#include <iostream>

using namespace std;
const int N= 100010;
int A[N],B[N];
int n,m;

int main(){
    cin>>n>>m;
    int cnt = 0;
    for (int i = 0; i < n ; ++i) {
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < m; ++i) {
        scanf("%d",&B[i]);
    }
    for (int i = 0; i <m ; ++i) {
       if(cnt<i&&A[cnt]==B[i]) {
            cnt++;
       }
    }
    if(cnt!=n) puts("No");
    else puts("Yes");
    return 0;
}