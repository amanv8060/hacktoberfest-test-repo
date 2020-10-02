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
		 	cout<<"x"<<" "<<x<<"\n";
		 }
		 integer operator++()
		 {
		 	integer i;
		 	i.x=++x;
		 	return(i);
		 }
		 integer operator++(int)
		 {
		 	integer i;
		 	i.x=x++;
		 	return(i);
		 }
};
int main()
{
integer i,j;
i.setdata(3);
i.showdata();
j=i++;  //j=i.operator++();  post or pre
i.showdata();
j.showdata();
}
