#include "arithmetic.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

//------------------------------------------------- Public Methods -----------------------------------------------------------

    void arithmetic::arithmeti()
    {
        float a,b,res;
        char cont,ch;
        cont='1';
        lba:
        do
{       system("cls");
        cout<<endl<<"Welcome to the Basic Arithmetic Calculator"<<endl;
        cout<<endl<<"\nEnter first value, operator and second value respectively, or 0 to exit:"<<endl;
        cin>>a;
        if(a==0)
            return;
        else
            cin>>ch>>b;
        switch(ch)
        {
            case '+':res=add(a,b);
            break;
            case '-':res=sub(a,b);
            break;
            case '*':res=mult(a,b);
            break;
            case '/':res=div(a,b);
            break;
            default:cout<<"Wrong Operator"<<endl;
            goto lba;
        }
        cout<<"\nThe result is: "<<res<<endl;
        getch();
        }while(cont=='1');
    }

//--------------------------------------------- Private Methods --------------------------------------------------------------

    float arithmetic::add(float a,float b)
    {
        return a+b;
    }

    float arithmetic::sub(float a,float b)
    {
        return a-b;
    }

    float arithmetic::mult(float a,float b)
    {
        return a*b;
    }

    float arithmetic::div(float a,float b)
    {
        return a/b;
    }
