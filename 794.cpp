#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//794. 高精度除法
using namespace std;
vector<int> div(vector<int> &a,int &b,int &r){
    r=0;
    vector<int> C;
    for(int i=a.size()-1;i>=0;i--){
        r=r*10+a[i];
        C.push_back(r/b);
        r=r%b;
    }
    reverse(C.begin(),C.end());
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
    int r;
    vector<int> C= div(A,b,r);
    for (int i = C.size()-1; i >=0 ; i--) {
        cout<<C[i];
    }
    cout<<endl<<r<<endl;
    return 0;
}
