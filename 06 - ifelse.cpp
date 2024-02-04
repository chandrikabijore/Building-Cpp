#include<iostream>
using namespace std;
int main()
{
    int savings;
    cout << "Enter your Savings broo : ";
    cin >> savings;


    if (savings > 5000)
    {    
        if (savings > 10000)
        {
            cout<<"Roadtrip with neha";
        }
        else
        {
            cout<<"Shoping with neha";
        }   
    }
    else if(savings > 2000)
    {
        cout<<"Rashmi";
    }
    else 
    {
        cout<<"Friends";
    } 
    return 0;
}
