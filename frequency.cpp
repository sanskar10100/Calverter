#include "frequency.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#define pi 22.0f/7
using namespace std;

//--------------------------------------------------- Public Methods -----------------------------------------------------

void frequency::frequenc()
    {
        float f,cf;
        char contf;
        int chf;
        do
        {   system("cls");
            cout<<"\nWelcome to the Frequency Converter"<<endl;
            cout<<"\n1. Hertz to Kilohertz"<<endl;
            cout<<"2. Hertz to Megahertz"<<endl;
            cout<<"3. Hertz to Gigahertz"<<endl;
            cout<<"4. Hertz to Terahertz"<<endl;
            cout<<"5. Hertz to Radian/S"<<endl;
            cout<<"6. Kilohertz to Hertz"<<endl;
            cout<<"7. Kilohertz to Megahertz"<<endl;
            cout<<"8. Kilohertz to Gigahertz"<<endl;
            cout<<"9. Kilohertz to Terahertz"<<endl;
            cout<<"10. Megahertz to Hertz"<<endl;
            cout<<"11. Megahertz to Kilohertz"<<endl;
            cout<<"12. Megahertz to Gigahertz"<<endl;
            cout<<"13. Megahertz to Terahertz"<<endl;
            cout<<"14. Gigahertz to Hertz"<<endl;
            cout<<"15. Gigahertz to Kilohertz"<<endl;
            cout<<"16. Gigahertz to Megahertz"<<endl;
            cout<<"17. Gigahertz to Terahertz"<<endl;
            cout<<"18. Terahertz to Hertz"<<endl;
            cout<<"19. Terahertz to Kilohertz"<<endl;
            cout<<"20. Terahertz to Megahertz"<<endl;
            cout<<"21. Terahertz to Gigahertz"<<endl;
            cout<<"22. Rad/S to Hertz"<<endl;
            cout<<"Enter your choice (1-22):"<<endl;
            cin>>chf;
            if(chf>22)
            {
                cout<<"Wrong Choice!!"<<endl;
                goto lbf;
            }
            else
            cout<<"Enter Frequency:"<<endl;
            cin>>f;
            switch(chf)
            {
                case 1:cf=hztokhz(f);
                break;
                case 2:cf=hztomhz(f);
                break;
                case 3:cf=hztoghz(f);
                break;
                case 4:cf=hztothz(f);
                break;
                case 5:cf=hztorad(f);
                break;
                case 6:cf=khztohz(f);
                break;
                case 7:cf=khztomhz(f);
                break;
                case 8:cf=khztoghz(f);
                break;
                case 9:cf=khztothz(f);
                break;
                case 10:cf=mhztohz(f);
                break;
                case 11:cf=mhztokhz(f);
                break;
                case 12:cf=mhztoghz(f);
                break;
                case 13:cf=mhztothz(f);
                break;
                case 14:cf=ghztohz(f);
                break;
                case 15:cf=ghztokhz(f);
                break;
                case 16:cf=ghztomhz(f);
                break;
                case 17:cf=ghztothz(f);
                break;
                case 18:cf=thztohz(f);
                break;
                case 19:cf=thztokhz(f);
                break;
                case 20:cf=thztomhz(f);
                break;
                case 21:cf=thztoghz(f);
                break;
                case 22:cf=radtohz(f);
                break;
            }

            cout<<"The converted Frequency is: "<<cf<<" and rounded off result is: "<<fixed<<setprecision(2)<<cf<<endl;
            lbf:
            cout<<"\nDo you want to continue ? (y/n):"<<endl;
            cin>>contf;
        }while(contf=='y'||contf=='Y'||contf=='1');

}

//--------------------------------------------- Private Methods --------------------------------------------------------------

    float frequency::hztokhz(float v)
    {
        return v/1000;
    }

    float frequency::hztomhz(float v)
    {
        return v/1e6;
    }

    float frequency::hztoghz(float v)
    {
        return v/1e9;
    }

    float frequency::hztothz(float v)
    {
        return v/1e12;
    }

    float frequency::hztorad(float v)
    {
        return (2*pi)*v;
    }

    float frequency::khztohz(float v)
    {
        return v*1000;
    }

    float frequency::khztomhz(float v)
    {
        return v/1000;
    }

    float frequency::khztoghz(float v)
    {
        return v/1e6;
    }

    float frequency::khztothz(float v)
    {
        return v/1e9;
    }

    float frequency::mhztohz(float v)
    {
        return v*1e6;
    }

    float frequency::mhztokhz(float v)
    {
        return v*1000;
    }

    float frequency::mhztoghz(float v)
    {
        return v/1000;
    }

    float frequency::mhztothz(float v)
    {
        return v/1e6;
    }

    float frequency::ghztohz(float v)
    {
        return v*1e9;
    }

    float frequency::ghztokhz(float v)
    {
        return v*1e6;
    }

    float frequency::ghztomhz(float v)
    {
        return v*1000;
    }

    float frequency::ghztothz(float v)
    {
        return v/1000;
    }

    float frequency::thztohz(float v)
    {
        return v*1e12;
    }

    float frequency::thztokhz(float v)
    {
        return v*1e9;
    }

    float frequency::thztomhz(float v)
    {
        return v*1e6;
    }

    float frequency::thztoghz(float v)
    {
        return v*1000;
    }

    float frequency::radtohz(float v)
    {
        return v/(pi*2);
    }
