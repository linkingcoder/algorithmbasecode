#include <iostream>

using namespace std;
void quick_sort(int q[],int l,int r){
    if(l>=r) return;
    int i=l-1,j=r+1,x=q[(l+r)>>1];
    while(i<j){
        do i++; while (q[i]<x);
        do j--; while (q[j]>x);
        if(i<j) swap(q[i],q[j]);
    }
    quick_sort(q,l,i);
    quick_sort(q,j+1,r);

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n);
    for(int i=0;i<n;i++){
        if(i!=n-1) cout<<a[i]<<" ";
        else
        cout<<a[i]<<endl;
    }

    return 0;
}