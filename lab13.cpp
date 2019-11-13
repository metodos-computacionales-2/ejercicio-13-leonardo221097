#include <iostream>
using namespace std;
  


// me guie de https://programacion-innata.blogspot.com/2013/06/producto-de-matrices-en-c.html
int main()
{
    int A[20][20], B[20][20], C[20][20];
    int k, m, n;

    
    cout<<"Filas de A: "; cin>>k;
    m=k;
    cout<<"Columnas de A: "<<m<<endl;
    cout<<endl;
    for(int i=0; i<k; ++i)
        for(int j=0; j<m; ++j)
        {
         
            A[i][j]=(float)1.0 /(i +1) + (j + 1); 
        }

    cout<<"Lectura de matriz B."<<endl;
    cout<<"Filas de B: "<<m<<endl;
    n=m;
    cout<<"Columnas de B: "<<n<<endl;
    cout<<endl;
    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
        {
            
            B[i][j]=(float)1.0 / (i +1) + (j + 1);
        }

    // Inicializamos la matriz C.
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            C[i][j] = 0;

    // Generamos la matriz C.
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                C[i][j] += A[i][z] * B[z][j];

    cout<<"Matriz A: ";
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz B: ";
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matriz C: ";
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}