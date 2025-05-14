#include <iostream>

using namespace std;

int main()
{

    int number;

    cout<<"please enter a number: ";
    cin>>number;

    if(number == 1){
        cout<<"saturday";
    }else if(number == 2){
        cout<<"sunday";
    }else if(number == 3){
        cout<<"monday";
    }else if(number == 4){
        cout<<"tuesday";
    }else if(number == 5){
        cout<<"wednesday";
    }else if(number == 6){
        cout<<"thursday";
    }else if(number == 7){
        cout<<"friday";
    }else if(number < 0 || number > 7){
        cout<<"out of range!";
    }else{
        cout<<"zero is not in range!";
    }

    return 0;
}
