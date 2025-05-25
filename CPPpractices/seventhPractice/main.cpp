#include <iostream>

using namespace std;

int main()
{
    float a , b , x , y;

    cout<<"this is our equation: y=ax+b"<<"\n" ;
    cout<<"please enter a: ";
    cin>>a;
    cout<<"please enter b: ";
    cin>>b;
    cout<<"please enter x: ";
    cin>>x;

    y = (a*x) + b;

    cout<<"the answer is: ";
    cout<<y;

    return 0;
}
