#include<conio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float f,m1,m2;
	int d;
	float const k=6.67e-11;
	cout<<"\n\n\t\t\t\t\tFORCE CALCULATOR BETWEEN TWO BODIES";
	cout<<"\n\n Enter the Mass of the 1st Body in Kgs               : ";
	cin>>m1;
	cout<<" Enter the Mass of the 2nd Body in Kgs               : ";
	cin>>m2;
	cout<<" Enter the distance between 1st & 2nd Body in Metres : ";
	cin>>d;
	f=k*((m1*m2)/d*d);
	cout<<"\n The force between two bodies                        = "<<f;
	
	getch();
	return 0;
}
