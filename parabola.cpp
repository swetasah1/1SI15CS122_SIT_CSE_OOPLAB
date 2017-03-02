#include<iostream>
#include<cmath>
using namespace std;

class PARABOLA_TYPE
{
	double dcoeffa,dcoeffb,dcoeffc;
	public:
	void fnsetvalue(double,double,double);
	void fnshowvalue();
	double fncalcarea(double,double);
};
void PARABOLA_TYPE::fnsetvalue(double a, double b,double c)
{
	dcoeffa=a;
	dcoeffb=b;
	dcoeffc=c;
}
void PARABOLA_TYPE::fnshowvalue()
{
	cout<<"the parabola is"<<dcoeffa<<"x*x+"<<dcoeffb<<"x"<<dcoeffc<<endl;
}
double PARABOLA_TYPE::fncalcarea(double leftlimit,double rightlimit)
{
	double c,d,e;
	c=(dcoeffa*(pow(leftlimit-rightlimit,3)/3;
	d=(dcoeffb*(pow(leftlimit-rightlimit,2)/2;
	e=(dcoeffa*(leftlimit-rightlimit));
	return(c+d+e);
}
int main()
{
	PARABOLA_TYPE p;
	double a,b,c;
	double leftlimit,rightlimit,area;
	cout<<"enter the coefficients of a,b,c of the equation of parabola\n";
	cin>>a>>b>>c;
	p.fnsetvalue(a,b,c);
	p.fnshowvalue();
	cout<<"enter leftlimit and rightlimit";
	cin>>leftlimit>>rightlimit;
	area=p.fncalcarea(leftlimit,rightlimit);
	cout<<"area of the given parabola="<<area<<"sq.units";
	return 0;
}
