#include <iostream>
#include <cmath>
using namespace std;

void compute(double a,double b,double c,double& area, double& perimeter){
perimeter=a+b+c;
double s=(perimeter/2);
double t=(s*(s-a)*(s-b)*(s-c));
area=pow(t,0.5);
}

int main()
{
double a,b,c;
double area=0;
double perimeter=0;

cout<<"Enter first side length of triangle"<<endl;
cin>>a;
cout<<"Enter second side length of triangle"<<endl;
cin>>b;
cout<<"Enter third side length of triangle"<<endl;
cin>>c;
if ((a>0)&(b>0)&(c>0)){
    if ((a+b>c)&(a+c>b)&(b+c>a)){
    compute(a,b,c,area,perimeter);
    cout<<"Area of triangle is "<<area<<endl;
    cout<<"Perimeter of triangle is "<<perimeter<<endl;
    }
    else{
    cout<<"Inaccurate triangle side lengths entered, please check Triangle Inequality Theorem"<<endl;
    }
}
else{
    cout<<"Zero or negative values entered for side length, please use positive values only"<<endl;
}
    return 0;
}
