#include <iostream>
#include <unordered_map>

using namespace std;
const int N= 100010;
int A[N],B[N];
int n,m,x;
int main(){
   cin>>n>>m>>x;
    unordered_map<int,int> map;
    for (int i = 0; i < n ; ++i) {
        scanf("%d",&A[i]);
        map.insert(make_pair(x-A[i],i));
    }
    for (int i = 0; i < m; ++i) {
        scanf("%d",&B[i]);
        if(map.count(B[i])==1){
            cout<<map[B[i]]<<" "<<i<<endl;
        }
    }
    return 0;
}