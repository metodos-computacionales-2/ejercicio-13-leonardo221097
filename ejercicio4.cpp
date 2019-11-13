#include <iostream>
using namespace std;

int getmax(int a, int b);
double getmaximo(double c, double d);

int main(){
    int a;
    int b;
    double c;
    double d;

 cout<<"ingrese un numero"<<endl;
    cin>>a;
 cout<<"ingrese otro numero"<<endl;
    cin>>b;
 cout<<"el entero mayor es"<<" "<< getmax(a,b)<<endl;
  cout<<"ingrese un numero"<<endl;
    cin>>c;
 cout<<"ingrese otro numero"<<endl;
    cin>>d;
    
  
   cout<<"el numero tipo double mayor es"<<" "<< getmaximo(c,d)<<endl;
  
    return 0;
}

int getmax(int a, int b){
if(a>b){return a;}
 else{return b;}

}

double getmaximo(double c, double d){
if(c>d){return c;}
 else{return d;}

}