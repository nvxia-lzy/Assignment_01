#include <iostream>

using namespace std;

int tripleByValue(int); //function prototype (value pass)
void tripleByReference(int&); //function prototype (reference pass)

int main()
{
    int c;//value to triple using tripleByValue and tripleByReference

    cin >>c; //read the integer from user to c1

    //demonstrate tripleByValue

    cout <<"Value returned by tripleByValue: " << tripleByValue(c) << endl;
    cout <<"c= "<<c<<" after tripleByValue\n"<< endl;

    //demonstrate tripleByReference
    tripleByReference(c);
    cout <<"c= "<<c<<" after tripleByReference "<< endl;

} //end main

int tripleByValue(int number)
{
    return number*number*number ;// caller's argument not modified
} //end function tripleByValue

void tripleByReference( int &numberRef)
{
    numberRef=numberRef*numberRef*numberRef ; //caller's argument modified
} //end function tripleByReference
