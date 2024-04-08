#include "src/ComplexNumber.hpp"
#include<iostream>
using namespace std;


int main()
{

    ComplexLibrary::Complex c1(5.5,-10);
    cout<<"il numero c1:"<<c1<<endl;
    ComplexLibrary::Complex c2(5,-10);
    cout<<"c2="<<c2<<endl;
    ComplexLibrary::Complex sum=c1+c2;
    cout<<"sum="<<sum<<endl;
    ComplexLibrary:: Complex s=operator+(c1,c2);
    cout<<"operator="<<s<<endl;
    cout<<"uguaglianza:"<<operator==(c1,c2)<<endl;


    ComplexLibrary::Complex r=coniugate(c2);
    cout<<"coniugate="<<r<<endl;
    ComplexLibrary::Complex sum1=c1+1.5;
    cout<<"somma prova="<<sum1<<endl;
    ComplexLibrary::Complex sum2=operator+(c1,1.5);
    cout<<"somma2="<<sum2<<endl;

    ComplexLibrary::Complex sum3=c1+2;
    cout<<"somma3="<<sum3<<endl;







    return 0;
}
