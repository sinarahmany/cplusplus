#include <iostream>
#include "complex.h"
#include <functional>
using namespace std;

int main()
{
    cout<<"------------Hey i`m Sina wellcome to my program----------------- \n"<<endl;

    Complex reallycomplex(1,-4) ;
    Complex notthatmuch(1,-4);
    //plus operator
    Complex multi = notthatmuch + reallycomplex;
    cout<<"("<<reallycomplex.getReal()<<","<<reallycomplex.getImaginary()<<"i) + ("
    <<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) =  "<<multi.getReal()<<","<<multi.getImaginary()<<"i"<<endl;

    Complex Plus = notthatmuch * reallycomplex;
    cout<<"("<<reallycomplex.getReal()<<","<<reallycomplex.getImaginary()<<"i) * ("
    <<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) =  "<<Plus.getReal()<<","<<Plus.getImaginary()<<"i"<<endl;
    //comparing operator
    Complex Compare = notthatmuch == reallycomplex;

    cout<<"("<<reallycomplex.getReal()<<","<<reallycomplex.getImaginary()<<"i) == ("
    <<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) ->  ";

    if(Compare.getReal()==1){
        cout<<"they are equal"<<endl;
    }
    else{
        cout<<"they are not equal"<<endl;
    }
    //++ operator
    Complex PLuslpUS = ++ notthatmuch ;

    cout<<"++ ("<<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) =  "<<PLuslpUS.getReal()<<","<<PLuslpUS.getImaginary()<<"i"<<endl;
    //operator -- (no matter if you put -- before or after the class it will work anyway!!!!!!!!!!!!)
    Complex Minusminus = notthatmuch--  ;

    cout<<"operator -- =  "<<Minusminus.getReal()<<","<<Minusminus.getImaginary()<<"i"<<endl;

    // -- operator
    Complex Minusminus2 = --notthatmuch  ;
    cout<<"-- operator =  "<<Minusminus2.getReal()<<","<<Minusminus2.getImaginary()<<"i"<<endl;

    //uncomparing operator
    Complex UnCompare = notthatmuch == reallycomplex;

    cout<<"("<<reallycomplex.getReal()<<","<<reallycomplex.getImaginary()<<"i) == ("
    <<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) ->  ";

    if(UnCompare.getReal()!=1){
        cout<<"!=false they are equal"<<endl;
    }
    else{
        cout<<"!=true they are not equal"<<endl;
    }
    bool flag=true;
    string choice;
    Complex mvm;
    Complex compree(0,0);
    while(flag==true){
        cout<<"\n\n<< - to print \n>> to enter your own numbers"<<endl;
        cin>>choice;

           if(choice=="<<"){
                cout <<"("<< mvm.getReal() <<","<< mvm.getImaginary()<<"i)"<<endl;
           }
            if (choice ==">>"){
                cout<<"Type your first number"<<endl;
                int rr;
                cin>>rr;
                mvm.setReal(rr);
                cout<<"Type your second number"<<endl;
                int ii;
                cin>>ii;
                mvm.setImaginary(ii);
                cout <<"("<< mvm.getReal() <<","<< mvm.getImaginary()<<"i) \n"<<endl;
            }
            if (choice =="++"){
                if(mvm.getReal() == compree.getReal()){
                cout<<"you didn`t type the new number yet"<<endl;
                }
            else{
                Complex plusmvm = ++ mvm ;
                mvm = plusmvm;
                cout <<"("<< mvm.getReal() <<","<< mvm.getImaginary()<<"i) \n"<<endl;}
            }

    }


}
