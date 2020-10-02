// it makes difference while using 9 or 9.0 due to type casting.
//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int cel1 = 47;
    int cel2 = 29;
    
    cout << "47 deg Celsius in Fahrenheit: " << (9/5*cel1 + 32) << endl; 
    cout << "29 deg Celsius in Fahrenheit: " << (9/5*cel2 + 32) << endl;
    return 0;
}

