#include<iostream>
using namespace std;
int main(){
    int n;
    int ch=64;
    cout<<"enter number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< char(ch+i) <<" ";
        }
        cout<<endl;
    }
}