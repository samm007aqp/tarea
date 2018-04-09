#include <iostream>

using namespace std;
int c1=0;
string fswap(string a)
{   string b=a;

    while(a[c1]!= '\0')
      {
         c1++; }
    for (int i=1; i<=c1 ;i++ )
      {     b[i-1]=a[c1-i];
    b[c1]='\0';
      }
    return b;
}
bool palindrome(string x){

    string x2 = fswap(x);
    bool respuesta= true;
    for (int i=0; i < c1; i++)
        if (x[i]!=x2[i]) respuesta= false;


return respuesta;
}


int main()
{
    string cad="mariairam";
    if (palindrome(cad)) cout<< "si es un palimdrome"<<endl;
    else cout<< "NO es un palimdrome"<<endl;
    return 0;
}
