#include<iostream>
using namespace std;

int main ()
{
	//variabili per successione di Taylor
	double p1=1; double p2=1;
	double fr=1;
	int i = 1;
	double ln2=0.6931471805599453;
	double k ;
	double temp; 
	double eps=0.00001;
	double e = 2.718281828459045;
	double f=1;
	double lnx=0; //sarebbe x/2^k
	
	//variabili per x>0 && x<=1
	int h=0;
	bool valido=false;
	
	int ver_log=2;
	
	double log;
	double ln_b = 0;
	double ln_a=0; 

	cout.precision(6);
	double x; cout<<"Inserisci l'argomento del logaritmo : "; cin>>x;   // primo input per ln_a
	double b; cout<<"Inserisci la base del logaritmo : "    ; cin>>b;   // secondo input per ln_b

	// Calcolo ln(x) --> memorizzato in ln_a
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
			ln_a=ln_a+(p1*fr);
			p1=p1*(-1);
			i=i+1;
		}
		ln_a=ln_a+(p1*fr);
		if(h==1)
		{
			ln_a=ln_a*-1;
		}
		valido=true;
	}
	if(x>2)
	{
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
		i = 1;
		p1=1;
		p2=1;
		while(p2/i>eps)
		{
			p2=p2*(temp-1);
			fr=p2/i;
			lnx=lnx+(p1*fr);
			p1=p1*(-1);
			i=i+1;
		}		
		ln_a=k*ln2+lnx;
	}
	else{cout<<"Valore di a non valido";ver_log=ver_log-1;}
	// Calcolo ln(b) --> memorizzato in ln_b
	if(b > 0 && b != 1)
	{
		ln_b = 0;
		p1=1; p2=1; fr=1;
		i=1; h=0;
		k=0; lnx=0;
		temp = b;

		if(b>0&&b<=2)
		{
			if(b>0 && b<=1)
			{
				b=1/b;
				h=1;
			}
			while(p2/i>eps)
			{
				p2=p2*(b-1);
				fr=p2/i;
				ln_b=ln_b+(p1*fr);
				p1=p1*(-1);
				i=i+1;
			}
			ln_b=ln_b+(p1*fr);
			if(h==1)
			{
				ln_b=ln_b*-1;
			}
		}
		else if(b>2)
		{
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
			i = 1;
			p1=1;
			p2=1;
			while(p2/i>eps)
			{
				p2=p2*(temp-1);
				fr=p2/i;
				lnx=lnx+(p1*fr);
				p1=p1*(-1);
				i=i+1;
			}		
			ln_b=k*ln2+lnx;
		}
	}
	else{cout << "\nValore di b non valido";ver_log=ver_log-1;}
	
	log=ln_a/ln_b;
	if(ver_log==2){cout<<log;}	
	return 0;
}

