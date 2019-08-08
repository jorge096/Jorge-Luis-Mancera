/* multiplicacion de matriz de 3x3 con vector
por Jorge Luis Mancera A1 PI LAD*/

#include <iostream>
using namespace std;

int main () {
    float a[1][3], b[3][3], c[1][3];
    int i=0, k=0, l=0 ;


    for (int j=0;j<3;j++){
    cout<<"Ingrese el elemento "<< i <<","<< j <<" del vector: ";
        cin>>a[i][j];
    }
cout<<endl;

    for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        cout<<"Ingrese el elemento "<< i <<","<< j <<" de la matriz: ";
        cin>>b[i][j];
    }
    }
          cout<<endl;

   c[0][0]=(a[0][0])*(b[0][0])+(a[0][1])*(b[1][0])+(a[0][2])*(b[2][0]);
   c[0][1]=(a[0][0])*(b[0][1])+(a[0][1])*(b[1][1])+(a[0][2])*(b[2][1]);
   c[0][2]=(a[0][0])*(b[0][2])+(a[0][1])*(b[1][2])+(a[0][2])*(b[2][2]);


     cout<<"La multiplicacion de: "<<endl<<endl<<endl;

 cout<< a[0][0]<<" ";
 cout<< a[0][1]<<" ";
 cout<< a[0][2]<<" "<<endl<<endl<<endl;


     cout<<"y "<<endl<<endl<<endl;

 cout<< b[0][0]<<" ";
 cout<< b[0][1]<<" ";
 cout<< b[0][2]<<" "<<endl<<endl;
 cout<< b[1][0]<<" ";
 cout<< b[1][1]<<" ";
 cout<< b[1][2]<<" "<<endl<<endl;
 cout<< b[2][0]<<" ";
 cout<< b[2][1]<<" ";
 cout<< b[2][2]<<" ";
 cout<<endl<<endl<<endl;

      cout<<"es: "<<endl<<endl<<endl;

 cout<< c[0][0]<<" ";
 cout<< c[0][1]<<" ";
 cout<< c[0][2]<<" "<<endl<<endl;

return 0;
}
