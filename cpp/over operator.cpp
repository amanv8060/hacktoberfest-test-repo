#include<iostream>
using namespace std;
class integer
{
	private :
		 int x;
    public :
    	 void setdata(int a)
    	 {
    	 	x=a;
		 }
		 void showdata()
		 {
		 	cout<<"x"<<x;
		 }
		 integer operator++()
		 {
		 	integer i;
		 	i.x=++x;
		 	return(i);
		 }
};
int main()
{
integer i,j;
i.setdata(3);
i.showdata();
j=++i;  //j=i.operator++();
i.showdata();
j.showdata();
}
