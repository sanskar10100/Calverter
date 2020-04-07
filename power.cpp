#include "power.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<math.h>
using namespace std;

//---------------------------------------------- Public Methods ------------------------------------------------------------

    void power::powe()
    {
        float p,cp;
        int chp;
        char contp;
        do
        {
            system("cls");
            cout<<"Welcome to the Power Converter"<<endl;
            cout<<"\n1. Brake Horsepower to Kilowatt"<<endl;
            cout<<"2. British Thermal Unit/Hour to Kilowatt"<<endl;
            cout<<"3. British Thermal Unit/Hour to Refrigeration Tons"<<endl;
            cout<<"4. British Thermal Unit/Hour to Watts"<<endl;
            cout<<"5. Decibel-Milliwatts to Milliwatts"<<endl;
            cout<<"6. Decibel-Milliwatts to Watts"<<endl;
            cout<<"7. Gigawatts to Watts"<<endl;
            cout<<"8. Horsepower(Electrical) to Kilowatts"<<endl;
            cout<<"9. Horsepower(Electrical) to Watts"<<endl;
            cout<<"10. Kilowatts to Brake Horsepower"<<endl;
            cout<<"11. Kilowatts to British Thermal Unit/Hour"<<endl;
            cout<<"12. Kilowatts to Horsepower(Electrical)"<<endl;
            cout<<"13. Kilowatts to Milliwatts"<<endl;
            cout<<"14. Kilowatts to Megawatts"<<endl;
            cout<<"15. Kilowatts to Refrigeration Tons"<<endl;
            cout<<"16. Kilowatts to Watts"<<endl;
            cout<<"17. Milliwatts to Watts"<<endl;
            cout<<"18. Milliwatts to Kilowatts"<<endl;
            cout<<"19. Milliwatts to Decibel-Milliwatts"<<endl;
            cout<<"20. Megawatts to Watts"<<endl;
            cout<<"21. Megawatts to Kilowatts"<<endl;
            cout<<"22. Refrigeration Tons to British Thermal Units/Hours"<<endl;
            cout<<"23. Refrigeration Tons to Kilowatts"<<endl;
            cout<<"24. Watts to Milliwatts"<<endl;
            cout<<"25. Watts to Kilowatts"<<endl;
            cout<<"26. Watts to Megawatts"<<endl;
            cout<<"27. Watts to Gigawatts"<<endl;
            cout<<"28. Watts to Decibel-Milliwatts"<<endl;
            cout<<"29. Watts to Horsepower(Electrical)"<<endl;
            cout<<"30. Watts to British Thermal Units/Hour"<<endl;
            cout<<"\nPlease enter your choice (1-30):"<<endl;
            cin>>chp;
            if(chp>30)
            {
                cout<<"Wrong Choice!!"<<endl;
                goto lbp;
            }
            else
                cout<<"\nEnter the Power:"<<endl;
                cin>>p;
                switch(chp)
            {
                case 1:cp=bhptokw(p);
                break;
                case 2:cp=btutokw(p);
                break;
                case 3:cp=btutoton(p);
                break;
                case 4:cp=btutow(p);
                break;
                case 5:cp=dbmtomw(p);
                break;
                case 6:cp=dbmtow(p);
                break;
                case 7:cp=gwtow(p);
                break;
                case 8:cp=hptokw(p);
                break;
                case 9:cp=hptow(p);
                break;
                case 10:cp=kwtobhp(p);
                break;
                case 11:cp=kwtobtu(p);
                break;
                case 12:cp=kwtohp(p);
                break;
                case 13:cp=kwtomw(p);
                break;
                case 14:cp=kwtomgw(p);
                break;
                case 15:cp=kwtoton(p);
                break;
                case 16:cp=kwtow(p);
                break;
                case 17:cp=mwtow(p);
                break;
                case 18:cp=mwtokw(p);
                break;
                case 19:cp=mwtodbm(p);
                break;
                case 20:cp=mgwtow(p);
                break;
                case 21:cp=mgwtokw(p);
                break;
                case 22:cp=tontobtu(p);
                break;
                case 23:cp=tontokw(p);
                break;
                case 24:cp=wtomw(p);
                break;
                case 25:cp=wtokw(p);
                break;
                case 26:cp=wtomgw(p);
                break;
                case 27:cp=wtogw(p);
                break;
                case 28:cp=wtodbm(p);
                break;
                case 29:cp=wtohp(p);
                break;
                case 30:cp=wtobtu(p);
                break;
            }

            cout<<"\nThe converted Power is: "<<cp<<" and rounded off result is: "<<fixed<<setprecision(2)<<cp<<endl;
            lbp:
                cout<<"\nDo you want to continue ? (y/n):"<<endl;
                cin>>contp;
        }while(contp=='y'||contp=='Y'||contp=='1');
    }

//---------------------------------------------- Private Methods ---------------------------------------------------------------

    float power::bhptokw (float w)
    {
        return w*0.745699872;
    }

    float power::btutokw (float w)
    {
        return w/3412.142;
    }

    float power::btutoton(float w)
    {
        return w/12000;
    }

    float power::btutow(float w)
    {
        return w/3.412141633;
    }

    float power::dbmtomw(float w)
    {
        float x=w/10;
        return pow(10,x);
    }

    float power::dbmtow(float w)
    {
        float x=w/10;
        return pow(10,x)/1000;
    }

    float power::gwtow(float w)
    {
        return w*1e9;
    }

    float power::hptokw(float w)
    {
        return w*0.746;
    }

    float power::hptow(float w)
    {
        return w*746;
    }

    float power::kwtobhp(float w)
    {
        return w/0.745699872;
    }

    float power::kwtobtu(float w)
    {
        return w*3412.142;
    }

    float power::kwtohp(float w)
    {
        return w/0.746;
    }

    float power::kwtomw(float w)
    {
        return w*1e6;
    }

    float power::kwtomgw(float w)
    {
        return w/1000;
    }

    float power::kwtoton(float w)
    {
        return w/3.5168525;
    }

    float power::kwtow(float w)
    {
        return w*1000;
    }

    float power::mwtow(float w)
    {
        return w/1000;
    }

    float power::mwtokw(float w)
    {
        return w/1e6;
    }

    float power::mwtodbm(float w)
    {
        return 10*log10(w);
    }

    float power::mgwtow(float w)
    {
        return w*1e6;
    }

    float power::mgwtokw(float w)
    {
        return w*1000;
    }

    float power::tontobtu(float w)
    {
        return w*12000;
    }

    float power::tontokw(float w)
    {
        return w*3.5168525;
    }

    float power::wtomw(float w)
    {
        return w*1000;
    }

    float power::wtokw(float w)
    {
        return w/1000;
    }

    float power::wtomgw(float w)
    {
        return w/1e6;
    }

    float power::wtogw(float w)
    {
        return w*1e9;
    }

    float power::wtodbm(float w)
    {
        float x=1000*w;
        return 10*(log10(x));
    }

    float power::wtohp(float w)
    {
        return w/746;
    }

    float power::wtobtu(float w)
    {
        return w*3.412141633;
    }
