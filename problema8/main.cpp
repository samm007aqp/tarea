#include <iostream>

using namespace std;
string fswap(string a)
{   string b=a;
    int c1=0;
    while(a[c1]!= '\0')
      {
         c1++; }
    for (int i=1; i<=c1 ;i++ )
      {     b[i-1]=a[c1-i];
      }
    return b;
}
char fswap(char *a){
    int c1=0;
    char *p = a;

    while(*a++!= '\0')
      {
         c1++; }
        cout <<c1<<endl;
    char *b = new char[c1];
    char *p2 = b;
     a = p;
    for(int i=0; i<c1; i++) *b++ = *a++;
    b[c1]='\0';
    a = p; //b= p2;
    b--;
    for (int i=0; i<c1 ;i++ )
      {     *a++ = *b--;

      }
    *a='\0';
    a=p;
    delete b;
}


int main()
{
    string cadena= "sergio-montesinos-apaza";
    cout<<cadena<<endl;
    cadena=fswap(cadena);
    cout<<cadena<<endl;
    char *aux = &cadena[0];
    fswap(aux);
    cout<<aux<<endl;
    return 0;


}
