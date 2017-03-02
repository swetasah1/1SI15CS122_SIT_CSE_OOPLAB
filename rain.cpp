#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
using namespace std;

class rainguage
{
	char location[30];
	double drainincm;
	public:
	rainguage();
	void readmeasure();
	void displayreading();
	friend double fncalcavg(rainguage[],int);
};

rainguage::rainguage()
{
	drainincm=0;
	strcpy(location,'\0');
}

void rainguage::readmeasure()
{
	int irandval;
	cout<<"enter the rainfall location";
	cin>>location;
	irandval=rand();
	drainincm=((irandval%20+1000)/1000.0)+irandval%19;
}

void rainguage::displayreading()
{
	cout<<"\nlocation:amount of rainfall(cm)\n";
	cout<<location<<":"<<drainincm<<"cm"<<endl;
}

double fncalcavg(rainguage r[],int inum)
{
	int i, davgrain=0.0;
	for(i=0;i<inum;i++)
	{
		davgrain +=r[i].drainincm;
	}
	davgrain/=inum;
	return davgrain;
}

int main()
{
	rainguage r[10];
	double davgrainfall;
	int i,inum;
	srand(time(NULL));
	cout<<"\enter the name of cities\n";
	cin>>inum;
	/*for(i=0;i<inum;i++)
	{
	r[i].readmeasure();
	}
	cout<<"\nrainfall information\n";
	for(i=0;i<inum;i++)
	{
		r[i].displayreading();
	}
	cout<<"\n average rainfall:"<<fncalcavg(r,inum)<<endl;*/
	return 0;
}

