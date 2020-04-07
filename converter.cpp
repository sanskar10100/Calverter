#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<math.h>
#include "Temperature.h"
#include "arithmetic.h"
#include "weight.h"
#include "charge.h"
#include "length.h"
#include "voltage.h"
#include "frequency.h"
#include "power.h"
#include "credit.h"
#include "square.h"
#include "energy.h"
#include "converter.h"
using namespace std;

//-------------------------------------------- Public Method ----------------------------------------------------------

void converter::convert()
{
    start:
    int mch;
    system("cls");
    cout<<endl<<"Welcome to the Calverter 0.9"<<endl;
    cout<<"\n1. Basic Arithmetic Calculator"<<endl;
    cout<<"2. Square-Root Calculator"<<endl;
    cout<<"3. Temperature Converter (C/F/K)"<<endl;
    cout<<"4. Weight Converter"<<endl;
    cout<<"5. Length Converter"<<endl;
    cout<<"6. Voltage(Potential Difference) Converter"<<endl;
    cout<<"7. Electric Charge Converter"<<endl;
    cout<<"8. Frequency Converter"<<endl;
    cout<<"9. Power Conversion"<<endl;
    cout<<"10. Energy Converter"<<endl;
    cout<<"11. Credits"<<endl;
    cout<<"Please select the type of calculation/conversion you want to attempt (1-10):"<<endl;
    cin>>mch;
    switch(mch)
    {
        case 1:arithmeti();
        break;
        case 2:square();
        break;
        case 3:temperatur();
        break;
        case 4:weigh();
        break;
        case 5:lengt();
        break;
        case 6:voltag();
        break;
        case 7:charg();
        break;
        case 8:frequenc();
        break;
        case 9:powe();
        break;
        case 10:energ();
        break;
        case 11:credit();
        break;
        default:cout<<"Wrong Choice!!"<<endl;
    }
goto start;
}
