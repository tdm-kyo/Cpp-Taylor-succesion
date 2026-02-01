#include<iostream>
using namespace std;

int main ()
{
	double p=1; double p2=1; int k;
	double f=1;
	double s=1;
	double inte, deci;
	int i = 0;
	double x; cin>>x;
	double eps=0.00001;
	double e = 2.718281828459045;
	if(x>=0 && x<=1)
	{
		while (e*p /f > eps)
		{
			p=p*x;
			f=f*(i+1);
			s=s+p/f;
			i=i+1;
		}	
	}	
	else
	{
		if(x<1){x=x*-1; k=1;}
		deci=x;
		while(deci>=1)
		{
			deci=deci-1;
		}
		inte=x-deci;
		while (e*p /f > eps)
		{
			p=p*deci;
			f=f*(i+1);
			s=s+p/f;   //parte  decimale
			i=i+1;
		}
		i=0;
		while(i<inte)
		{
			p2=p2*e; //parte intera
			i=i+1;
		}
		s=s*p2;
		if(k==1){s=1/s;}
	}
	cout<<s;
	return 0;
}
