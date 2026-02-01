// salary of employees
#include<iostream>
using namespace std;
int main(){
    int n ;
    float basic_salary,bonus,net_salary;
    cout<<"enter the no of employees ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"\nenter basic salary of employee ";
        cin>>basic_salary;
        bonus=0.12*basic_salary;
        cout<<"\nbonus amount "<<bonus;
        net_salary=basic_salary+bonus;
        cout<<"\nnet salary of employee is "<<net_salary;}
        return 0;

}