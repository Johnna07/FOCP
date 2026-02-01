//classify the symbol
#include<iostream>
using namespace std ;
int main(){
    char ch;
    cout<<"enter a character ";
    cin>>ch;
    if(ch>='0'&&ch<='9')
    cout<<"it is a number";
    else if (ch!='a'||ch!='e'||ch!='i'||ch!='o'||ch!='u'||ch!='A'||ch!='E'||ch!='I'||ch!='O'||ch!='U')
    cout<<"it is a consonant";
    else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    cout<<"it is a vowel";
    else
    cout<<"invalid symbol";
}
