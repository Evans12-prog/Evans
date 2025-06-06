#include <iostream>
using namespace std;
int main()
{
int age;
cout<<"How old are you?"<<endl;
cin>> age;
if (age >6&& age <= 15)
{
    cout << "You are suppose to be in primary" << endl;
}
else if (age >15 && age <= 18 )
{
    cout <<"You are suppose to be at the secondary level of your education "<< endl;
}
else if ( age >18 && age <= 24 )
{
    cout <<"You are suppose to be at the university." <<endl;
}
else if( age> 24 && age <= 59)
{
    cout << " You are suppose to be working." <<endl;
}
else if( age > 59 )
{
    cout << "You ought to retire!"<<endl;
}
else 
{
    cout <<"Enter your age properly" <<endl;
}
return 0;
}