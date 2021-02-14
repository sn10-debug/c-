#include <iostream>

using namespace std;

double multiply (double num1,double num2){
return num1*num2 ;

}
double divide(double num1,double num2){
return num1/num2;
}
int main()
{
    double a,b;
    cout << "Hello world!" << endl;
    cout<<"enter the number 1: "<<endl;
    cin>>a;
    cout<<"enter the second number: "<<endl;
    cin>>b;
    cout<<"the sum is:"<<a+b<<endl;

    cout<<"the ratio is"<<divide(a,b)<<endl;
    cout<<multiply(a,b)<<endl;

    return 0;
}
