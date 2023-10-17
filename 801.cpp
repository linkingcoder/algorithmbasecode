#include <iostream>

using namespace std;

const int N = 1e5+10;
int s[N];
int lowbits(int x)
{
    return x&(-x);
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n ; ++i) {
        scanf("%d",&s[i]);
        int cnt = 0;
        while(s[i]) {
            s[i] = s[i] - lowbits(s[i]);
            cnt++;
        }
      if(i!=n-1)  cout<<cnt<<" ";
      else cout<<cnt<<endl;
    }


    return 0;
}