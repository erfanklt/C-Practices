#include <iostream>

using namespace std;

int main()
{
    float score;

    cout<<"please enter your score: ";
    cin>>score;

    if (score >= 18 && score <= 20){
        cout<<"A";
    }else if(score >= 16 && score < 18){
        cout<<"B";
    }else if(score >= 14 && score < 16){
        cout<<"C";
    }else if(score > 20 || score < 0){
        cout<<"error!";
    }else{
        cout<<"loser (:";
    }

    return 0;
}
