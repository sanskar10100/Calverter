
#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void square()
{
    float x;
    char contsq;
    do
    {
        system("cls");
        cout<<"\nWelcome to the Square-Root Calculator"<<endl;
        cout<<"Enter the number whose square-root is to be calculated:"<<endl;
        cin>>x;
        cout<<"\nSquare-Root of "<<x<<" is: "<<sqrt(x)<<endl;
        cout<<"\nWant to calculate again ? (y/n):"<<endl;
        cin>>contsq;
    }   while(contsq=='y'||contsq=='Y'||contsq==1);
}
