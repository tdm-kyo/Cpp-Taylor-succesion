#include<iostream>
using namespace std;
int main()
{
	double s=1;
	double pi=3.141592653589793;
	double eps=0.00001;
	double p1=1;
	double p2=1;
	double f=1;
	double i=1;	
	double x; cin>>x;

	if(x<0)
	{
		while(x<2*pi)
		{
			x=x+(2*pi);
		}
	}

	while(x>2*pi)
	{
		x=x-(2*pi);
	}

    
	while(pi*p2/f>eps)
	{
		p1=p1*(-1);
		p2=p2*x*x;
		f=f*(2*i-1)*(2*i);
		s=s+(p2/f)*p1;
		i=i+1;
	}
	
	cout<<s;
		
	return 0;
}
