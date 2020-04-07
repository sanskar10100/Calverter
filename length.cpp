#include "length.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

//---------------------------------------------------- Public Methods -------------------------------------------------------

    void length::lengt()
 {  float l,cl;
    int chl;
    char contl;
    do
    {   system("cls");
        cout<<"\nWelcome to the Length Converter"<<endl;
        cout<<"\n1. Centimeter to Feet"<<endl;
        cout<<"2. Centimeter to Inch"<<endl;
        cout<<"3. Centimeter to Millimeter"<<endl;
        cout<<"4. Feet to Centimeter"<<endl;
        cout<<"5. Feet to Millimeter"<<endl;
        cout<<"6. Feet to Inch"<<endl;
        cout<<"7. Feet to Meter"<<endl;
        cout<<"8. Inch to Centimeter"<<endl;
        cout<<"9. Inch to Feet"<<endl;
        cout<<"10. Inch to Meter"<<endl;
        cout<<"11. Inch to Millimeter"<<endl;
        cout<<"12. Kilometer to Miles"<<endl;
        cout<<"13. Meter to Feet"<<endl;
        cout<<"14. Meter to Inch"<<endl;
        cout<<"15. Miles to Kilometers"<<endl;
        cout<<"16. Millimeter to Feet"<<endl;
        cout<<"17. Millimeter to Inch"<<endl;
        cout<<"\nEnter your choice (1-17):"<<endl;
        cin>>chl;
        if(chl>17)
            {
                cout<<"Wrong Choice!!"<<endl;
                goto lbl;
            }
        else
        cout<<"\nEnter Length: "<<endl;
        cin>>l;
        switch(chl)
        {
            case 1:cl=cmtof(l);
            break;
            case 2:cl=cmtoi(l);
            break;
            case 3:cl=cmtomm(l);
            break;
            case 4:cl=ftocm(l);
            break;
            case 5:cl=ftomm(l);
            break;
            case 6:cl=ftoi(l);
            break;
            case 7:cl=ftom(l);
            break;
            case 8:cl=itocm(l);
            break;
            case 9:cl=itof(l);
            break;
            case 10:cl=itom(l);
            break;
            case 11:cl=itomm(l);
            break;
            case 12:cl=kmtomi(l);
            break;
            case 13:cl=mtof(l);
            break;
            case 14:cl=mtoi(l);
            break;
            case 15:cl=mitokm(l);
            break;
            case 16:cl=mmtof(l);
            break;
            case 17:cl=mmtoi(l);
            break;
        }
        cout<<"\nThe converted length is: "<<cl<<" and the rounded off length is: "<<fixed<<setprecision(2)<<cl<<endl;
        lbl:
            cout<<"\nDo you want to continue ? (y/n):"<<endl;
            cin>>contl;
        }while(contl=='y'||contl=='Y'||contl==1);
 }

//---------------------------------------------- Private Methods --------------------------------------------------------------

    float length::cmtof(float d)
    {
        return d/30.48;
    }

    float length::cmtoi(float d)
    {
        return d/2.54;
    }

    float length::cmtomm(float d)
    {
        return d*10;
    }

    float length::ftocm(float d)
    {
        return d*30.48;
    }

    float length::ftomm(float d)
    {
        return d*304.8;
    }

    float length::ftoi(float d)
    {
        return d*12;
    }

    float length::ftom(float d)
    {
        return d*0.3048;
    }

    float length::itocm(float d)
    {
        return d*2.54;
    }

    float length::itof(float d)
    {
        return d/12;
    }

    float length::itom(float d)
    {
        return d*0.0254;
    }

    float length::itomm(float d)
    {
        return d*25.4;
    }

    float length::kmtomi(float d)
    {
        return d/1.609;
    }

    float length::mtof(float d)
    {
        return d/0.3048;
    }

    float length::mtoi(float d)
    {
        return d/0.0254;
    }

    float length::mitokm(float d)
    {
        return d*1.609;
    }

    float length::mmtof(float d)
    {
        return d/304.8;
    }

    float length::mmtoi(float d)
    {
        return d/25.4;
    }
