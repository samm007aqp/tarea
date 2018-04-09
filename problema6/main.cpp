#include <iostream>
using namespace std;

void copiar(char a[], char b[]){
    int i=0;
   while(a[i]!= '\0')
    { a[i]=0;  i++; }
   i=0;
    while(b[i]!= '\0')
      {
       a[i]=b[i];
         i++; }

}

char * copiar_p(char *x , char *y){
    char *p = x;
    char *p2 = y;
    while(*x++ != '\0'){ *x=0;}
    int c2=0;
    while(*y++!= '\0')
      {
         c2++; }//5

   // char *aux = new char[c2+1];
    x = p;
    y = p2;

    for(int i=0; i< c2 ; i++)
    {*x++ = *y++;
    }
    *x='\0';


return x;
}


int main()
{   char  t[] = "hola---";
    char s[] = "sergio***************";

 //   copiar(s,t);
    copiar_p(s,t);
    cout<<endl<<s<< endl;
    return 0;
}
