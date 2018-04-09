#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    string x ="6546.13165224991231";
    int c =0; bool f= false;
    double result = 0;
    int comaflotante=0;
    while (x[c]!='\0') c++;
    cout<<c<<endl;
    for (int i=0; i<c;i++){
        if (!isdigit(x[i])){
            if (x[i]=='.'){
                comaflotante = i;
                f= true;}
            else   { cout<<"numero incorrecto"<<endl;
                 return 0;   }
        }

    }

    if (!(f)){
        for(int i=c; i>0 ; i--){
        result = result + ((x[c-i]-48)*pow(10,i-1 ));
        //cout<< ((x[c-i]-48)*pow(10,i) )<<endl;
        }
    cout.setf(ios::fixed);
    cout << setprecision(0) << result <<endl;

    }
    else{
    for(int i=comaflotante-1; i>=0 ; i--){
        result = result + ((x[comaflotante-(i+1)]-48)*pow(10,i) );
        cout<< ((x[comaflotante-(i+1)]-48)*pow(10,i) )<<endl;
        }
     cout.setf(ios::fixed);
     cout << setprecision(c-comaflotante-1) << result<<endl;

    double aux = 1;
    double aux2 =0;
    for(int i=comaflotante; i< c; i++){

       aux*=1.0/10.0;
       cout<<aux<<"---";
       aux2=(int(x[i+1]-48.0)*aux);
       cout<<aux2<<endl;
       result = result + aux2;
    }
    }
    cout<<result<<endl;
    return 0;
}
