#include<iostream>
#include<string>
using namespace std;
struct timeType
{
int hr;
double min;
int sec;
};
struct tourType
{
string cityName;
int distance;
timeType travelTime;
};
tourType destination;
tourType input() {
 
cout<<"Enter city,travel distance and time in hr and minutes."<< endl;
cin >> destination.cityName;
cin >> destination.distance;
cin >> destination.travelTime.hr;
cin >> destination.travelTime.min;
return destination;
}
void display() {
cout << "City is " << destination.cityName << endl;
cout << "The travel distance is " << destination.distance << endl;
cout << "The time of travel is " << destination.travelTime.hr << " hours and "
<<destination.travelTime.min<< " minutes." << endl;
}
void inputfunc(tourType* t) {
tourType d;
d.cityName = t->cityName;
d.distance = t->distance;
d.travelTime.hr = t->travelTime.hr;
d.travelTime.min = t->travelTime.min;
}
int main() {
input();
inputfunc(&destination);
display();
}