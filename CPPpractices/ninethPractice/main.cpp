#include <iostream>
using namespace std;

int main() {

    int total_days;
    cout <<"please enter days count: ";
    cin >>total_days;

    int years = 0;
    int months = 0;
    int days = 0;

    // YEARS COUNT
    while (total_days >= 365) {
        total_days -= 365;
        years++;
    }

    // MONTHS COUNT
    while (total_days >= 30) {
        total_days -= 30;
        months++;
    }

    // DAYS COUNT
    days = total_days;

    // RESULT
    cout <<"years: "<<years<<"\n"<<"months: "<<months<<"\n"<<"days: "<<days;

    return 0;
}

