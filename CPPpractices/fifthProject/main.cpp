#include <iostream>

using namespace std;

int main()
{
    string day;

    cout<<"please enter a day: ";
    cin>>day;

    if(day == "saturday"){
        cout<<"1";
    }else if(day == "sunday"){
        cout<<"2";
    }else if(day == "monday"){
        cout<<"3";
    }else if(day == "tuesday"){
        cout<<"4";
    }else if(day == "wednesday"){
        cout<<"5";
    }else if(day == "thursday"){
        cout<<"6";
    }else if(day == "friday"){
        cout<<"7";
    }else{
        cout<<"please enter a correct day!";
    }
    return 0;
}
