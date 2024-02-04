#include<iostream>
using namespace std;
int main()
{
    int n1 = 0;
    int n2 = 1;    
    int n3, i, number;
    cout << "Enter the number of elements: ";
    cin >> number;
    cout << n1 << " " << n2 << " "; //printing 0 and 1

    for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed    
    { 
        n3=n1+n2;    
        cout<<"\n" << n3<<" ";    
        n1=n2;    
        n2=n3;    
    }    
    return 0;
}