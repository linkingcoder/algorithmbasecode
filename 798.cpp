#include <iostream>

using namespace std;
const int N=1010;
int S[N][N];
int a[N][N];
void insert(int &x1,int &y1,int &x2,int &y2,int &c){
    S[x1][y1]+=c;
    S[x2+1][y1]-=c;
    S[x1][y2+1]-=c;
    S[x2+1][y2+1]+=c;
}

int main(){
    int n,m,q;
    cin>>n>>m>>q;
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <=m; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <=m; j++) {
            insert(i, j, i, j, a[i][j]);
        }
    }
    while (q--){
        int x1,y1,x2,y2,c;
        scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&c);
        insert(x1,y1,x2,y2,c);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            S[i][j]+=S[i][j-1]+S[i-1][j]-S[i-1][j-1];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", S[i][j]);
        }
        printf("\n");
    }
    return 0;
}


