// vowel or consonant 
#include<iostream>
using namespace std;
int main (){
    char ch;
    cin>>ch;
    if(ch== 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A'  || ch == 'E' || ch == 'I' || ch == 'O' || ch== 'U'){
        cout<<"vowels"<<endl;
    }else {
        cout<<"consonant";
    }
    return 0;
}