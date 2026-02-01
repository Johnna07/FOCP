// sum of even and odd elements in an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements in the array ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum_even=0,sum_odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        sum_even+=arr[i];
        else
        sum_odd+=arr[i];
    }
    cout<<"sum of even elements in the array is "<<sum_even;
    cout<<"\nsum of odd elements in the array is "<<sum_odd;
    return 0;
    

}