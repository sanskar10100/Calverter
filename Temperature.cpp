#include "Temperature.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

//----------------------------------------------- Public Methods ----------------------------------------------------

    void temperature::temperatur()
    {
    float tx,ctx;
    char contt;
    int cht;
    do
{   system("cls");
    cout<<"\nWelcome to the temperature conversion program"<<endl;
    cout<<"\n1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Celsius to Kelvin"<<endl;
    cout<<"3. Celsius to Rankine"<<endl;
    cout<<"4. Fahrenheit to Celsius"<<endl;
    cout<<"5. Fahrenheit to Kelvin"<<endl;
    cout<<"6. Fahrenheit to Rankine"<<endl;
    cout<<"7. Kelvin to Celsius"<<endl;
    cout<<"8. Kelvin to Fahrenheit"<<endl;
    cout<<"9. Kelvin to Rankine"<<endl;
    cout<<"10. Rankine to Fahrenheit"<<endl;
    cout<<"11. Rankine to Celsius"<<endl;
    cout<<"12. Rankine to Kelvin"<<endl;
    cout<<endl<<"\nEnter your choice (1-12) : ";
    cin>>cht;
    if(cht>12)
        {
            cout<<"Wrong Choice!!"<<endl;
            goto lbt;
        }
    else
    cout<<endl<<"\nEnter temperature: ";
    cin>>tx;
    switch(cht)
    {
        case 1:ctx=ctof(tx);
        break;
        case 2:ctx=ctok(tx);
        break;
        case 3:ctx=ctor(tx);
        break;
        case 4:ctx=ftoc(tx);
        break;
        case 5:ctx=ftok(tx);
        break;
        case 6:ctx=ftor(tx);
        break;
        case 7:ctx=ktoc(tx);
        break;
        case 8:ctx=ktof(tx);
        break;
        case 9:ctx=ktor(tx);
        break;
        case 10:ctx=rtof(tx);
        break;
        case 11:ctx=rtoc(tx);
        break;
        case 12:ctx=rtok(tx);
        break;
    }
    cout<<"\nThe resulting temperature is: "<<ctx<<" and the precise temperature is: "<<fixed<<setprecision(2)<<ctx<<endl;
    lbt:
    cout<<endl<<"\nDo you want to continue ?(y/n):"<<endl;
    cin>>contt;
}   while(contt=='y'||contt=='Y'||contt=='1');
    }

//---------------------------------- Private Methods ---------------------------------------------------------------

    float temperature::ctof(float temp)
    {
        return (temp*9/5)+32;
    }

    float temperature::ftoc(float temp)
    {
        return (temp-32)*1.8;
    }

    float temperature::ctok(float temp)
    {
        return temp+273.15;
    }

    float temperature::ftok(float temp)
    {
        return (temp+459.67)*5/9;
    }

    float temperature::ktoc(float temp)
    {
        return temp-273.15;
    }

    float temperature::ktof(float temp)
    {
        return (temp*9/5)-459.67;
    }

    float temperature::ftor(float temp)
    {
        return temp+459.67;
    }

    float temperature::ctor(float temp)
    {
        return (temp+273.15)*1.8;
    }

    float temperature::ktor(float temp)
    {
        return temp*1.8;
    }

    float temperature::rtof(float temp)
    {
        return temp-459.67;
    }

    float temperature::rtoc(float temp)
    {
        return (temp-491.67)*5/9;
    }

    float temperature::rtok(float temp)
    {
        return temp*5/9;
    }
