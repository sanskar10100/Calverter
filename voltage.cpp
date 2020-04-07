#include "voltage.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

//------------------------------------------------- Public Methods -----------------------------------------------------------

    void voltage::voltag()
     {
        float v,cv;
        char contv;
        int chv;
        do
        {
            system("cls");
            cout<<"Welcome to the Voltage(Potential Difference) Converter"<<endl;
            cout<<"\n1. Volts to Microvolts"<<endl;
            cout<<"2. Volts to Millivolts"<<endl;
            cout<<"3. Volts to Kilovolts"<<endl;
            cout<<"4. Volts to Megavolts"<<endl;
            cout<<"5. Volts to Gigavolts"<<endl;
            cout<<"6. Microvolts to Volts"<<endl;
            cout<<"7. Millivolts to Volts"<<endl;
            cout<<"8. Kilovolts to Volts"<<endl;
            cout<<"9. Megavolts to Volts"<<endl;
            cout<<"10. Gigavolts to Volts"<<endl;
            cout<<"\nPlease select an option (1-10):"<<endl;
            cin>>chv;
            if(chv>10)
            {
                cout<<"Wrong Choice!!"<<endl;
                goto lbv;
            }
            else
            cout<<"\nEnter the Voltage:"<<endl;
            cin>>v;
            switch(chv)
            {
             case 1:cv=vtou(v);
             break;
             case 2:cv=vtom(v);
             break;
             case 3:cv=vtokv(v);
             break;
             case 4:cv=vtomv(v);
             break;
             case 5:cv=vtogv(v);
             break;
             case 6:cv=utov(v);
             break;
             case 7:cv=mtov(v);
             break;
             case 8:cv=kvtov(v);
             break;
             case 9:cv=mvtov(v);
             break;
             case 10:cv=gvtov(v);
             break;
            }

            cout<<"\nThe Converted Value is: "<<cv<<" and the rounded off value is: "<<fixed<<setprecision(2)<<cv<<endl;
            lbv:
            cout<<"\nDo you want to continue ? (y/n):"<<endl;
            cin>>contv;
        }while(contv=='y'||contv=='Y'||contv=='1');
    }

//------------------------------------------ Private Methods -------------------------------------------------------------

    float voltage::vtou(float r)
    {
        return r*1e6;
    }

    float voltage::vtom(float r)
    {
        return r*1000;
    }

    float voltage::vtokv(float r)
    {
        return r/1000;
    }

    float voltage::vtomv(float r)
    {
        return r/1e6;
    }

    float voltage::vtogv(float r)
    {
        return r/1e9;
    }

    float voltage::utov(float r)
    {
        return r/1e6;
    }

    float voltage::mtov(float r)
    {
        return r/1000;
    }

    float voltage::kvtov(float r)
    {
        return r*1000;
    }

    float voltage::mvtov(float r)
    {
        return r*1e6;
    }

    float voltage::gvtov(float r)
    {
        return r*1e9;
    }
