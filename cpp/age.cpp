#include<iostream>
using namespace std;
int main()
{
	int age;
	char gender;
	cout<<" Enter age"<<endl;
	cin>>age;
	cout<<"Enter gender M or F"<<endl;
	cin>>gender;
	if(gender=='M')
	 {
	 	cout<<"male";
	 	if(age>=18)
	 	 	cout<<"Adult";
	 	else
	 	 	cout<<"kid";
	 }
	 else
    {
        cout<<"Female ";
        
        if(age < 18)
            cout<<"Kid";
        else
            cout<<"Adult";
    }
    
	 return 0;
}

