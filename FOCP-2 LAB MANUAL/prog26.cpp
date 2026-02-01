//compute total marks and percentage of five subjects
#include<iostream>
using namespace std;
int main(){
    int marks;
    int sum=0;
    float percentage;
    cout<<"enter marks of student in five subjects ";
    for(int i=0;i<5;i++){
        cin>>marks;
        sum+=marks;
        percentage=(sum*100)/500; 
    }
    cout<<"total marks scored by student is "<<sum;
    cout<<"\npercentage of student is "<<percentage<<"%";
    return 0;
}