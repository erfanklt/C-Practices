#include <iostream>

using namespace std;

int main()
{
    float x , y;

    cout<<"this is our equation: y = 2x^2 + 4x"<<"\n";
    cout<<"please enter x: ";
    cin>>x;

    y = 2 * (x * x) + 4*x ;

    cout<<"the answer is: "<< y ;

    return 0;
}
