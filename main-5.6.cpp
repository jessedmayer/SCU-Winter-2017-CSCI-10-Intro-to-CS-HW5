#include <iostream>

using namespace std;

bool convertToLowestTerms(int& numerator,int& denominator){
    if(denominator==0) return false;
    int GCD=1;
    int lowest=numerator;
    if(denominator<numerator) lowest=denominator;
    for(int i=1; i<=lowest; i++){
        if(numerator%i==0 && denominator%i==0){
            GCD=i;
        }
    }
    numerator=numerator/GCD;
    denominator=denominator/GCD;

    return true;
}

int main()
{
{

int n=15;
int d=3;
convertToLowestTerms(n,d);
cout<<"Reduced n: "<<n<<endl;
cout<<"Reduced d: "<<d<<endl;
}
{
int n=9;
int d=27;
convertToLowestTerms(n,d);
cout<<"Reduced n: "<<n<<endl;
cout<<"Reduced d: "<<d<<endl;
}
{
int n=14;
int d=0;
    if(convertToLowestTerms(n,d)){
        cout<<"Reduced n: "<<n<<endl;
        cout<<"Reduced d: "<<d<<endl;
    }else{
    cout<<"Invalid Input"<<endl;
    }
}
    return 0;
}
