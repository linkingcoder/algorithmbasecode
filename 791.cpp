#include <iostream>
#include <vector>
#include <string>
//791. 高精度加法
using namespace std;
vector<int> add(vector<int> &a,vector<int> &b){
    int t=0;
    vector<int> C;
    for(int i=0;i<a.size()||i<b.size();i++){
        if(i<a.size()) t=t+a[i];
        if(i<b.size()) t=t+b[i];
        C.push_back((t+10)%10);
        t=t/10;
    }
    if(t) C.push_back(1);
    return C;
}
int main() {
    string a,b;
    vector<int> A,B;
    cin>>a;
    cin>>b;
    for (int i = a.size()-1; i >=0 ; i--) {
        A.push_back(a[i]-'0');
    }
    for (int i = b.size()-1; i >=0 ; i--) {
        B.push_back(b[i]-'0');
    }
    vector<int> C= add(A,B);
    for (int i = C.size()-1; i >=0 ; i--) {
        cout<<C[i];
    }
    return 0;
}
