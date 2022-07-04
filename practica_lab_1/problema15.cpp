/******************************************************************************

/*
             *Problema 15. Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
             *se genera una espiral de números como la siguiente:
             *21 22 23 24 25
             *20  7  8  9 10
             *19  6  1  2 11
             *18  5  4  3 12
             *17 16 15 14 13
             *En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
             *Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
             *de una espiral de nxn.
             */
/*******************************************************************************/
#include <iostream>

using namespace std;
int A,res,m,M;
int main()
{
    cout << "Ingrese un numero impar: " << endl;
        cin >> A;
        res = 1, m = 0;
        for(M = 3; M <= A; M += 2){
            m += 2;
            res+=4*M*M-6*m;
            }
        cout << "en una espiral " << M << 'X' << M << " es: " << res << endl;
    return 0;
}