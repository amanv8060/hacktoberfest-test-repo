#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
        cin>>arr[i];
	sort(arr,arr+n,c++);
	cout<<c++;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" "<<endl;
	return 0;
}
