#include "energy.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

//----------------------------------------- Public Methods --------------------------------------------------------------

void energy::energ()
{
    float e,ce;
    int che;
    char conte;
    do
    {
        system("cls");
        cout<<"\nWelcome to the Energy Converter"<<endl;
        cout<<"\n1. Joules to Kilojoules"<<endl;
        cout<<"2. Joules to British Thermal Units"<<endl;
        cout<<"3. Joules to Calories"<<endl;
        cout<<"4. Joules to Kilo-calories"<<endl;
        cout<<"5. Joules to Kilowatt-Hours"<<endl;
        cout<<"6. Joules to Electron-Volts"<<endl;
        cout<<"7. Kilojoules to Joules"<<endl;
        cout<<"8. Kilojoules to British Thermal Units"<<endl;
        cout<<"9. Kilojoules to Calories"<<endl;
        cout<<"10. Kilojoules to Kilo-calories"<<endl;
        cout<<"11. British Thermal Units to Kilojoules"<<endl;
        cout<<"12. British Thermal Units to Joules"<<endl;
        cout<<"13. British Thermal Units to Kilowatt-Hours"<<endl;
        cout<<"14. Kilowatt-Hours to British Thermal Units"<<endl;
        cout<<"15. Kilowatt-Hours to Joules"<<endl;
        cout<<"16. Calories to Joules"<<endl;
        cout<<"17. Calories to Kilojoules"<<endl;
        cout<<"18. Calories to Kilo-calories"<<endl;
        cout<<"19. Kilo-calories to Calories"<<endl;
        cout<<"20. Kilo-calories to Joules"<<endl;
        cout<<"21. Kilo-calories to Kilojoules"<<endl;
        cout<<"22. Electron-Volts to Joules"<<endl;
        cout<<"23. Electron-Volts to Kilo-Electron Volts"<<endl;
        cout<<"24. Electron-Volts to Mega-Electron Volts"<<endl;
        cout<<"25. Electron-Volts to Giga-Electron Volts"<<endl;
        cout<<"26. Kilo-Electron Volts to Electron-Volts"<<endl;
        cout<<"27. Mega-Electron Volts to Electron-Volts"<<endl;
        cout<<"28. Giga-Electron Volts to Electron-Volts"<<endl;
        cout<<"\nPlease enter your selection (1-28):"<<endl;
        cin>>che;
        if(che>28)
        {
            cout<<"Wrong Choice"<<endl;
            goto lbe;
        }
        else
        {
            cout<<"\nPlease enter the Value:"<<endl;
            cin>>e;
        }

        switch(che)
        {
            case 1:ce=jtokj(e);
            break;
            case 2:ce=jtobtu(e);
            break;
            case 3:ce=jtocal(e);
            break;
            case 4:ce=jtokcal(e);
            break;
            case 5:ce=jtokwh(e);
            break;
            case 6:ce=jtoev(e);
            break;
            case 7:ce=kjtoj(e);
            break;
            case 8:ce=kjtobtu(e);
            break;
            case 9:ce=kjtocal(e);
            break;
            case 10:ce=kjtokcal(e);
            break;
            case 11:ce=btutokj(e);
            break;
            case 12:ce=btutoj(e);
            break;
            case 13:ce=btutokwh(e);
            break;
            case 14:ce=kwhtobtu(e);
            break;
            case 15:ce=kwhtoj(e);
            break;
            case 16:ce=caltoj(e);
            break;
            case 17:ce=caltokj(e);
            break;
            case 18:ce=caltokcal(e);
            break;
            case 19:ce=kcaltocal(e);
            break;
            case 20:ce=kcaltoj(e);
            break;
            case 21:ce=kcaltokj(e);
            break;
            case 22:ce=evtoj(e);
            break;
            case 23:ce=evtokev(e);
            break;
            case 24:ce=evtomev(e);
            break;
            case 25:ce=evtogev(e);
            break;
            case 26:ce=kevtoev(e);
            break;
            case 27:ce=mevtoev(e);
            break;
            case 28:ce=gevtoev(e);
            break;
        }

        cout<<"\nThe Converted Value is: "<<ce<<endl;
        lbe:
            cout<<"\nDo you want to convert again ? (y/n):"<<endl;
            cin>>conte;
    }while(conte=='y'||conte=='Y'||conte=='1');
}

//----------------------------------------- Private Methods ---------------------------------------------------------------

float energy::jtokj(float z)
    {
        return z/1000;
    }

float energy::jtobtu(float z)
{
    return z/1055.05585262;
}

float energy::jtocal(float z)
{
    return z/4.184;
}

float energy::jtokcal(float z)
{
    return z/4184;
}

float energy::jtokwh(float z)
{
    return z/(36*1e5);
}

float energy::jtoev(float z)
{
    return z*(6.241509*1e18);
}

float energy::kjtoj(float z)
{
    return z*1000;
}

float energy::kjtobtu(float z)
{
    return z/1.05505585262;
}

float energy::kjtocal(float z)
{
    return z*239.0057;
}

float energy::kjtokcal(float z)
{
    return z/4.184;
}

float energy::btutokj(float z)
{
    return z*1.05505585262;
}

float energy::btutoj(float z)
{
    return z*1055.05585262;
}

float energy::btutokwh(float z)
{
    return z*0.00029307107071;
}

float energy::kwhtobtu(float z)
{
    return z*3412.14163312794;
}

float energy::kwhtoj(float z)
{
    return z*(36*1e5);
}

float energy::caltoj(float z)
{
    return z*4.184;
}

float energy::caltokj(float z)
{
    return z/239.005736;
}

float energy::caltokcal(float z)
{
    return z/1000;
}

float energy::kcaltocal(float z)
{
    return z*1000;
}

float energy::kcaltoj(float z)
{
    return z*4184;
}

float energy::kcaltokj(float z)
{
    return z*4.184;
}

float energy::evtoj(float z)
{
    return z*(1.602176565*1e-19);
}

float energy::evtokev(float z)
{
    return z/1000;
}

float energy::evtomev(float z)
{
    return z/1e6;
}

float energy::evtogev(float z)
{
    return z/1e9;
}

float energy::kevtoev(float z)
{
    return z*1000;
}

float energy::mevtoev(float z)
{
    return z*1e6;
}

float energy::gevtoev(float z)
{
    return z*1e9;
}
