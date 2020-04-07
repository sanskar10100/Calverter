#include "weight.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

//--------------------------------------------------- Public Methods ----------------------------------------------------

    void weight::weigh()
    {
        float m,cnvt;
        char contw;
        int chw;
        do
        {   system("cls");
            cout<<"\nWelcome to the weight converter"<<endl;
            cout<<"\n1. Grams to Kilograms"<<endl;
            cout<<"2. Grams to Ounces"<<endl;
            cout<<"3. Grams to Pounds"<<endl;
            cout<<"4. Kilograms to Grams"<<endl;
            cout<<"5. Kilograms to Pounds"<<endl;
            cout<<"6. Ounces to Grams"<<endl;
            cout<<"7. Ounces to Pounds"<<endl;
            cout<<"8. Pounds to Grams"<<endl;
            cout<<"9. Pounds to Kilograms"<<endl;
            cout<<"10. Pounds to Ounces"<<endl;
            cout<<"\nPlease select the conversion you want to do (1-10) :"<<endl;
            cin>>chw;
            if(chw>10)
            {
                cout<<"Wrong Choice!!"<<endl;
                goto lbw;
            }
            else
            cout<<"\nPlease enter the weight: "<<endl;
            cin>>m;
            switch(chw)
            {
                case 1:cnvt=gtokg(m);
                break;
                case 2:cnvt=gtoo(m);
                break;
                case 3:cnvt=gtop(m);
                break;
                case 4:cnvt=kgtog(m);
                break;
                case 5:cnvt=kgtop(m);
                break;
                case 6:cnvt=otog(m);
                break;
                case 7:cnvt=otop(m);
                break;
                case 8:cnvt=ptog(m);
                break;
                case 9:cnvt=ptokg(m);
                break;
                case 10:cnvt=ptoo(m);
                break;
            }
            cout<<"\nThe converted weight is: "<<cnvt<<" and the rounded off weight is: "<<fixed<<setprecision(2)<<cnvt<<endl;
            lbw:
                cout<<"\nDo you want to convert weight again ? (y/n):"<<endl;
                cin>>contw;
        }while(contw=='y'||contw=='Y'||contw=='1');
        }

//----------------------------------------------------- Private Methods ----------------------------------------------------

        float weight::gtokg(float o)
        {
            return o/1000;
        }

        float weight::gtoo(float o)
        {
            return o/28.35;
        }

        float weight::gtop(float o)
        {
            return o/453.593;
        }
        float weight::kgtog(float o)
        {
            return o*1000;
        }

        float weight::kgtop(float o)
        {
            return o/0.4539;
        }

        float weight::otog(float o)
        {
            return o*28.349;
        }

        float weight::otop(float o)
        {
            return o/16;
        }

        float weight::ptog(float o)
        {
            return o*453.592;
        }

        float weight::ptokg(float o)
        {
            return o*0.453592;
        }

        float weight::ptoo(float o)
        {
            return o*16;
        }
