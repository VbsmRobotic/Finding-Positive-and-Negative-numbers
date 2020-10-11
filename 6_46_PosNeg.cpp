#include<iostream>

using namespace std ;

template <class T>


T GetPosNeg(T a)
{
    if(a>0)
    {
        cout << "Your Number is Positive \n" ;        
    }else if(a<0)
    {
        cout << "Your Number is Negative \n" ;
    }else
    {
        cout << "Your Number is Zero \n" ;
    }
}

int main()
{
    double x ;
    cout << "Enter Your Number : \n" ;
    cin >> x ;

    GetPosNeg(x) ;
}