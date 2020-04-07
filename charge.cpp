#include "charge.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

//---------------------------------------------- Public Methods ---------------------------------------------------------------

    void charge::charg()
    {
        float c,cc;
        int chc;
        char contc;
        do
        {
            system("cls");
            cout<<"\nWelcome to The Electric Charge Converter"<<endl;
            cout<<"\n1. Coulombs to Picocoulombs"<<endl;
            cout<<"2. Coulombs to Nanocoulombs"<<endl;
            cout<<"3. Coulombs to Microcoulombs"<<endl;
            cout<<"4. Coulombs to Millicoulombs"<<endl;
            cout<<"5. Coulombs to Electron Charge"<<endl;
            cout<<"6. Coulombs to Ampere-Hours"<<endl;
            cout<<"7. Picocoulombs to Coulombs"<<endl;
            cout<<"8. Nanocoulombs to Coulombs"<<endl;
            cout<<"9. Microcoulombs to Coulombs"<<endl;
            cout<<"10. Millicoulombs to Coulombs"<<endl;
            cout<<"11. Electron Charge to Coulombs"<<endl;
            cout<<"12. Ampere-Hours to Coulombs"<<endl;
            cout<<"\nPlease enter your choice (1-12):"<<endl;
            cin>>chc;
            if(chc>12)
            {
                cout<<"Wrong Choice!!"<<endl;
                goto lbc;
            }
            else
            cout<<"\nEnter the Charge: "<<endl;
            cin>>c;
            switch(chc)
            {
                case 1:cc=ctopc(c);
                break;
                case 2:cc=ctonc(c);
                break;
                case 3:cc=ctouc(c);
                break;
                case 4:cc=ctomc(c);
                break;
                case 5:cc=ctoec(c);
                break;
                case 6:cc=ctoah(c);
                break;
                case 7:cc=pctoc(c);
                break;
                case 8:cc=nctoc(c);
                break;
                case 9:cc=uctoc(c);
                break;
                case 10:cc=mctoc(c);
                break;
                case 11:cc=ectoc(c);
                break;
                case 12:cc=ahtoc(c);
            }
            cout<<"\nThe converted value is: "<<cc<<" and the rounded off value is: "<<fixed<<setprecision(2)<<cc<<endl;
            lbc:
                cout<<"\nDo you want to continue ? (y/n):"<<endl;
                cin>>contc;
            }while(contc=='y'||contc=='Y'||contc=='1');
    }

//------------------------------------------------- Private Methods -------------------------------------------------------

    float charge::ctopc(float q)
    {
        return q*1000000000000;
    }

    float charge::ctonc(float q)
    {
        return q*1000000000;
    }

    float charge::ctouc(float q)
    {
        return q*1000000;
    }

    float charge::ctomc(float q)
    {
        return q*1000;
    }

    float charge::ctoec(float q)
    {
        return q*6245150975e9;
    }

    float charge::ctoah(float q)
    {
        return q/3600;
    }

    float charge::pctoc(float q)
    {
        return q/1e12;
    }

    float charge::nctoc(float q)
    {
        return q/1e9;
    }

    float charge::uctoc(float q)
    {
        return q/1e6;
    }

    float charge::mctoc(float q)
    {
        return q/1000;
    }

    float charge::ectoc(float q)
    {
        return q*0.160217646e-17;
    }

    float charge::ahtoc(float q)
    {
        return q*3600;
    }
