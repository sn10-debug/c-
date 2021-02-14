#include <iostream>

using namespace std;
void y(string name,int num){
cout<<name<<endl;
cout<<num+1<<endl;
}
void x(string name,int num){
cout<<name<<endl;
cout<<num+2<<endl;
}
float cube(double num){
 int a=num*num*num;

return a/2;

}




int main()
{
    cout << "Hello world!" << endl;
    x("shakti",18);
    y("me",20);
    x("why",1);
    cout<<cube(2);


    return 0;
}
