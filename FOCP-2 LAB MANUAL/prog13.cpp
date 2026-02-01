// roots of a quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double d,b,a,c;
    cout<<"enter the coefficients of the equation";
    cin>>b>>a>>c;
    d=(b*b)-4*a*c;
    if(d>0){
        double root1=(-b+sqrt(d))/(2*a);
        double root2=(-b-sqrt(d))/(2*a);
        cout<<"roots of the equation are distinct and real and are "<<root1<<" and "<<root2<<" respectively";
    }
    else if(d==0){
        double root1=-b/2*a;
        cout<<"roots of the equation are real and equal and is "<<root1;
    }
    else{
        double imagpart=sqrt(-d)/(2*a);
        double realpart=-b /(2*a);
        cout<<"roots of the equation are imaginary with"<<realpart<<"as real part and"<<imagpart<<"as imaginary part";
    }
return 0;
}