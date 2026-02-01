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
	int valido ;
	double cos;
	double sin;
	double tan;
	int fase =1;
	
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
	
	
	//l'idea consiste nell usare una sola serie di taylor 
	//nella prima fase si calcola il cos e nella seconda il sin
	//per poi ottenre la tangente
	if(x==0){tan=0;}
	else
	{
		while (fase<=2)
		{				
			if(fase==2){x=pi/2-x;}
			
	        s = 1; p1 = 1; p2 = 1; f = 1; i = 1;
			    
			while(pi*p2/f>eps)
			{
				p1=p1*(-1);
				p2=p2*x*x;
				f=f*(2*i-1)*(2*i);
				s=s+(p2/f)*p1;
				i=i+1;
			}	
			if (fase==1){cos=s;}
			else{sin=s;} 
			fase=fase+1;
		}
		tan=sin/cos;
	}
	
	cout<<tan;
		
	return 0;
}
