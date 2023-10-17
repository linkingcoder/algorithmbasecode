#include <iostream>

using namespace std;
const int M = 1e5+10;
int h,e[M],ne[M],idx;
void addhead(int num){
    e[idx] = num;
    ne[idx] = h;
    h = idx++;
}
void add(int i,int num){
    e[idx]=num;
    ne[idx] = ne[i];
    ne[i] = idx++;
}
void del(int i){
    ne[i] = ne[ne[i]];
}
void init(){
     h=-1;
     idx=0;
}
int main(){
    int m;
    cin>>m;
    init();
    while(m--){
        string x;
        cin>>x;
        if(x=="H")
        {
            int num;
            cin>>num;
            addhead(num);
        }
        if(x=="I")
        {
            int  i, num;
            cin>>i>>num;
            add(i-1,num);
        }
        if(x=="D"){
            int i;
            cin>>i;
            if (!i) {
                h =ne[h];}
            else
               del(i-1);
        }
    }
    for (int i = h; i!=-1; i=ne[i]) {
        cout<<e[i]<<" ";
    }
     cout<<endl;
    return 0;
}