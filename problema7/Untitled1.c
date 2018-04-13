
void concatenar(char a[], char b[])
{   int i=0;
      while (a[i]!='\0')
        i++;
    int j=0;
    while (b[j]!='\0')
    {   a[i+j] = b[j];
    j++;
    }
    a[i+j] ='\0';

}
char concaternar_p(char **a, char **b)
{   char *p = *a;
    char *p2 = *b;
    while (*p!='\0')p++;
    while (*p2!='\0')p2++;
    cout<< (p-*a)+(p2-*b)<<endl;
    char *p3 = new char [(p-*a)+(p2-*b)+1];
    char *p4 = p3;
    p=*a; p2=*b;
    while (*p2!='\0'){*p3= *p2; p2++;p3++; }
    while (*p!='\0'){*p3= *p; p++;p3++; }
    *p3='\0';
    cout<< p4 <<endl;
   // *b= p4;

}

int main()
{
    char *t = "hola---";
    char *s = "sergio***";
    concatenar(t,s);
    concaternar_p(&t,&s);
  // cout<<s<<endl;
}
