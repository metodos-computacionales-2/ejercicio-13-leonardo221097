#include <iostream>
using namespace std;
long fib(long n);
 long fib_rec(long n);

int main() {
long n;
  
cout<<"ingrese un numero entero positivo"<<endl;
    cin>>n;
    
     cout<<fib_rec(n)<<endl;
    cout<<fib(n)<<endl;
    
   

   
    return 0;


}
long fib_rec(long n){
    long fibb=0;
    if (n==0){
        fibb=0;
    }
   else if (n==1){
        fibb=1;
   }
    else{
        fibb= fib_rec(n-1)+fib_rec(n-2);
    }
   return fibb; 
}


long fib(long n){
    long fibo=0;
    long a=0;
    long b=1;
    
    if (n==0){
        fibo=0;
    }
   else if (n==1){
        fibo=1;
   }
    else{
    for (int i=0;i<n;i++){
           a+=b;
            fibo=b;
        }
    } 
    
    
    return fibo;
}