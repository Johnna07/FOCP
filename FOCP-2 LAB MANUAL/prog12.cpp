// classifying a triangle 
#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"enter side 1 of the triangle ";
    cin>>s1;
    cout<<"enter side 2 of the triangle ";
    cin>>s2;
    cout<<"enter side 3 of the triangle ";
    cin>>s3;
    if(s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2) {
    if(s1==s2&&s2==s3&&s1==s3)
    cout<<"equilateral triangle";
    else if(s1==s2||s2==s3||s3==s1)
    cout<<"isoceles triangle";
    else
    cout<<"scalene triangle";
    }

    else
    cout<<"not a valid triangle";
} 