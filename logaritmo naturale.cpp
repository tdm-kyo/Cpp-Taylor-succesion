#include<iostream>
using namespace std;

int main ()
{
	double p1=1; double p2=1;
	double fr=1;
	double s=0;
	int i = 1;
	double ln2=0.6931471805599453;
	double k ;
	double temp; 
	double x; cin>>x;
	double eps=0.00001;
	double e = 2.718281828459045;
	double f=1;
	double lnx=0;
	int h=0;
	bool valido=false;
	cout.precision(6);
	if(x>0&&x<=2)
	{
		if(x>0 && x<=1)
		{
			x=1/x;
			h=1;
		}
		while(p2/i>eps)
		{
			p2=p2*(x-1);
			fr=p2/i;
			s=s+(p1*fr);
			p1=p1*(-1); //dopo sommatoria necessariamente
			i=i+1;
		}
		s=s+(p1*fr);
		if(h==1)
		{
			s=s*-1;
		}
		valido=true;
	}
	if(x>2)
	{
		//calcolo di k 
		temp=x;
        while (temp>=2) 
		{
			temp=temp/2;
            k=k+1;
        } 
        while (i<k)
        {
        	p1=p1*2;
        	i=i+1;
		}
		//re-iniziallizare le variabili usate
		i = 1;
		p1=1;
		while(p2/i>eps)
		{
			p2=p2*(temp-1);
			fr=p2/i;
			lnx=lnx+(p1*fr);
			p1=p1*(-1); //dopo sommatoria necessariamente
			i=i+1;
		}		
		s=k*ln2+lnx	;
		valido=true;
	}
	if(x==0){cout<<"ERRORE";}
	if(valido){cout<<s;}
	return 0;
}
