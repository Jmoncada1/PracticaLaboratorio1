/******************************************************************************

 * Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:

                    *
                   ***
                  *****
                 *******
                  *****
                   ***
                    *
*******************************************************************************/
#include <iostream>

using namespace std;
int N,M;
int main()
{
     
            
            cout << "Ingrese un numero impar: " << endl; //Pedir numero
            cin >> N;
            M = 1;
            for(int fila = 0; fila < N; fila++){ //ciclo for para crear filas
                for(int columna = 0; columna < N; columna++){ //ciclo for para columnas
                    if (fila <= N/2){
                        if (columna < (N-2*fila-1)/2) cout << ' ';
                        else if (columna < (N+2*fila+1)/2) cout << '*';
                        else cout << ' ';
                    }
                    else{
                        if (columna < (N-2*fila+2*M+1)/2) cout << ' ';
                        else if (columna < (N+2*fila-2*M-1)/2) cout << '*';
                        else cout << ' ';
                        }
                    }
                if (fila > N/2) M+=2;
                    cout << endl;
                }
                cout << endl;

    return 0;
}