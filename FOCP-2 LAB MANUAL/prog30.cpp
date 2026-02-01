// total and average salary of 10 employees
#include<iostream>
using namespace std;
int main(){
    int salary[10];
    int total=0;
    float average;
    cout<<"enter salaries for 10 employees ";
    for(int i=0;i<10;i++){
        cin>>salary[i];
        total+=salary[i];
        average=total/10;
     }
    cout<<"the total salary of employees is "<<total;
    cout<<"\n the average salary of employees is "<<average;
    return 0;


}