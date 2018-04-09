#include <iostream>

using namespace std;

 void duplicar_x_valor(int a, int b, int c){
     a*=2;
     b*=2;
     c*=2;
 }

 void duplicar_x_referencia(int &a, int &b,int &c){
    a*=2;
    b*=2;
    c*=2;
 }
int main()
{   int  x=100, y=200 , z=300 ;
    duplicar_x_valor(x,y,z);
    cout<<"f_valor"<<" x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
    duplicar_x_referencia(x,y,z);
    cout<<"f_ref"<<" x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
    return 0;
}
