#include <iostream>
#include <vector>
#include <string>
//793. 高精度乘法
using namespace std;
vector<int> mul(vector<int> &a,int &b){
    int t=0;
    vector<int> C;
    for(int i=0;i<a.size()||t;i++){
       if(i<a.size()) t=a[i]*b+t;
        C.push_back(t%10);
        t=t/10;
    }
    while(C.size()>1&&C.back()==0){
        C.pop_back();
    }
    return C;
}
int main() {
    string a;
    int b;
    vector<int> A;
    cin>>a;
    cin>>b;
    for (int i = a.size()-1; i >=0 ; i--) {
        A.push_back(a[i]-'0');
    }
    vector<int> C= mul(A,b);
    for (int i = C.size()-1; i >=0 ; i--) {
        cout<<C[i];
    }
    return 0;
}
