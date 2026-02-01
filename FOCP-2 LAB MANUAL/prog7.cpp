// winner in three players
using namespace std;
#include<iostream>
int main(){
    int score_1,score_2,score_3;
    cout<<"enter score of first player ";
    cin>>score_1;
    cout<<"enter score of second player ";
    cin>>score_2;
    cout<<"enter score of third player ";
    cin>>score_3;
    if(score_1>score_2){
        if(score_1>score_3){
            cout<<"player 1 is the winner";
        }
        else 
        cout<<"player 3 is the winner";
    }
    else{
        if(score_2>score_3)
        cout<<"player 2 is the winner";
        else
        cout<<"player 3 is the winner";

    }
    return 0;

}