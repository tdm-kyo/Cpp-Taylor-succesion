#include<iostream>
using namespace std;
int main()
{
	double pi=3.141592653589793;
	double eps=0.00001;
	double p1=1;
	double f=1;
	int i=1;	
	double x; cin>>x;
	double k;
	double originale=x;
	if(x<0){x=-x ;}
	if(x>1){x=1/x;}
	double s=x;
	double p2=x;
	while(f>eps)
	{
		k=2*i+1;
		p1=p1*(-1);	
		p2=p2 * x* x;
		f=p2/k;
		s=s+ (p1* f );
		i=i+1;
	}
	if(originale>1){s=(pi/2)-s;}	
	if(originale<0){s=-s;}	
	cout<<s;		
	return 0;
}
