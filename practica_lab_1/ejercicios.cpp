#include <iostream>
#include <string>   // string, getline()
#include <cstdlib> 
using namespace std;

int main()
{
    int num, A, B, C, N, M, m, res, count, value;
    short int hour;
    float resf;
    char K;
    bool is;
    do{
        cout << "Ingrese el numero del ejercicio: " ;
        cin >> num;
        switch(num){

        case 1:

            /*
              Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
              de la división A/B.
             */

            cout << " Ingrese 2 numeros A y B: ";
            cin >> A >> B;
            if(B!=0) cout << "El residuo de la division " << A << '/' << B << " es " << A%B << endl;
            else cout << "La division por 0 no esta definida" << endl;

            break;

        case 2:
            /*
             * Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
             */
            cout<<"ingrese un numero N: ";
            cin >> N;
            if (N % 2 == 0) cout << N <<"es par "<< endl;
            else cout << N << "es impar " << endl;

            break;

        case 3:
            /*
             * Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
             */
            cout << "ingrese 2 numeros A y B: ";
            cin >> A >> B;

            if(A > B) cout << "El mayor es " << A << endl;
            else if(A < B) cout << "El mayor es " << B << endl;
            else cout << "Son el mismo numero" << endl;

            break;

        case 4:
            /*
             * Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
             */
            cout << "Ingrese dos numeros A y B: " << endl;
            cin >> A >> B;
            if (A < B) cout << "El menor es: "<< A << endl;
            else if (A > B)cout << "El menor es: " << B << endl;
            else cout << "Son el mismo numero" << endl;
            break;

        case 5:
            /*
             *Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división
             *A/B con redondeo.
             */
            cout << " Ingrese 2 numeros A y B: " << endl;
            cin >> A >> B;
            if (B != 0){
                if (2*(A%B)>=B) cout << A << '/' << B << '=' << A/B+1 <<endl;
                else cout << A << '/' << B << '=' << A/B <<endl;
            }
            else cout << "La division por 0 no esta definida" << endl;

            break;
        case 6:
            /*
             *Ejercicio 6. Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
             *AB, sin hacer uso de librerías matemáticas.
             */
            cout << "Ingrese 2 numeros A y B: " << endl;
            cin >> A >> B;
            res = 1;
            for (int i = 0; i < B; i++) res *= A;
            cout << A << '^' << B << '=' << res << endl;
            break;

        case 7:
            /*
             *Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
             *los números entre 0 y N (incluyéndose el mismo).
             */
            cout << "Ingrese un numero N: " << endl;
            cin >> N;
            res = 0;
            for (int i = 0; i <= N; i++) res += i;
            cout << "La sumatoria  desde 0 hasta " << N << " es " << res << endl;

            break;
        case 8:
            /*
             *Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
             */
            cout << "Ingrese un numero N: " << endl;
            cin >> N;
            res = 1;
            for (int i = 1; i < N + 1; i++) res *= i;
            cout <<"el factorial de "<< N << "es igual " << res << endl;

            break;
        case 9:
            /*
             *Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
             *círculo con radio N.
             */
            cout << "Ingrese el radio N: " << endl;
            cin >> N;
            cout << "Perimetro: " << 6.2832*N << '\n' << "Area: " << 3.1416*N*N << endl;

            break;

        case 10:
            /*
             *Ejercicio 10. Escriba un programa que pida un número N e imprima en pantalla todos los múlti-
             *plos de dicho número entre 1 y 100.
             */
            do{
            cout << "Ingrese un numero N: " << endl;
            cin >> N;
            }while(N <= 0);
            if (N < 100){
                cout << "Multiplos de \"" << N << "\" menores que 100: " << endl;
                for (int i = 1; i * N < 100; i++) cout << i * N << endl;
            }
            else cout << N << " no tiene multiplos menores que 100." << endl;

            break;

        case 11:
            /*
             *Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de mul-
             *tiplicar hasta 10xN.
             */
            cout << "Ingrese un numero: " << endl;
            cin >> N;
            for (int i = 1; i<=10; i++) cout << N << '*' << i << '=' << N*i << endl;

            break;

       case 12:
            /*
             *Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N1
             *hasta N5
             */
            cout << "Ingrese un numero N: " << endl;
            cin >> N;
            res = 1;
            for (int i = 1; i < 6; i++) {
                res *= N;
                cout << N << '^' << i << '=' << res << endl;
            }

            break;

        case 13:
            /*
             *Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N.
             */

            cout << "Ingrese un numero n: " << endl;
            cin >> N;
            if (N == 0){
                cout << "Los divisores de n son infinitos" << endl;

            }
            cout << "Los divisores de n son: " << endl;
            for (int i = 1; i<=N/2; i++){
                if (N%i==0) cout << i << endl;
            }
            cout << N << endl;

            break;
        case 14:
            /*
             *Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los números del
             *1 al 50 y otra con los números del 50 al 1.
             */
            for(int i = 1; i <= 50; i = i + 1) cout << i << '\t' << 51 - i << endl;

            break;

        case 15:
            /*
             *Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
             *mero cero e imprima en pantalla la suma de todos los números ingresados.
             */
            res = 0;
            do{
                cout << "Ingrese un numero: ";
                cin >> N;
                res += N;
            }while(N != 0);
            cout << "Resultado de la suma: " << res << endl;

            break;

        case 16:
            /*
             *Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
             *mero cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
             */
            resf = 0;
            count = 0;
            do{
                cout << "Ingrese un numero: " << endl;
                cin >> N;
                resf += N;
                count += 1;
            }while(N != 0);
            resf = resf/(count - 1);
            cout << "el promedio es: " << resf << endl;
            break;

        case 17:
            /*
             *Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
             *mero cero e imprima en pantalla el mayor de todos los números ingresados.
             */
            res = 0;
            do{
                cout << "Ingrese un numero: " << endl;
                cin >> N;
                if (N > res) res = N;
            }while(N != 0);
            cout << "El numero mayor fue: "<< res << endl;

            break;
        case 18:
            /*
             *Ejercicio 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado per-
             *fecto.
             */

            do{
            cout << "Ingrese un numero N: " << endl;
            cin >> N;
            }while(N < 0);
            is = 0;
            for (int i = 0; i <= N/2; i++) if (i * i == N) {
                cout << N << " es un cuadrado perfecto." << endl;
                is = 1;
                break;
            }
            if (is == 0) cout << N << " no es un cuadrado perfecto." << endl;

            break;

        case 19:
            /*
             *Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
             */
            is = 1;
            do{
            cout << "Ingrese un numero: " << endl;
            cin >> N;
            }while(N<0);
            if (N<=2){
                if(N==2)cout <<"2 es un numero primo." << endl;
                else cout << N <<" no es un numero primo." << endl;
                break;
            }
            for (int i = 2; i<=N/2; i++){
                if (N % i == 0){
                    cout << N <<" no es un numero primo." << endl;
                    is = 0;
                    break;
                }
            }
            if (is) cout << N <<" es un numero primo." << endl;

            break;

        case 20:
            /*
             *Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
             *(igual de derecha a izquierda que de izquierda a derecha).
             */
            bool esPalindromo(unsigned int num)
            {
                if(num<10)
                    return true;
                if((num<10) && (num < 100))
                    {
                    if(!(num % 11))
                        return true;
                    }
                if((num<100) && (num < 1000))
                    {
                    if((num % 10) == (num/100))
                        return true;
                    }
                return false;
            }
            unsigned int numero = 0;
            cout << "ingrese el numero" << endl;
            cin >> numero;
            if (!esPalindromo (numero))
              {
               cout << "no es palindromo " << endl;
               return 0;
             }
           cout << "si es palindromo " << endl;
           }

  
            break;

        case 21:
            /*
             *Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
             *mayúscula a minúscula y viceversa e imprimirla.
             */
            cout << " ingrese un carater C: " << endl;//colocar algo para que entre un solo caracter
            cin >> K;
            if((K >= 65 && K <= 90) || (K >= 97 && K <= 122)){
                if((K >= 65 && K <= 90)) cout << "Letra convertida: " << char(K + 32) << endl;
                else cout << "Letra convertida: " << char(K - 32) << endl;
            }

            break;

        case 22:
            /*
             *Ejercicio 22. Escriba un programa que pida una cantidad entera de segundos y la imprima en
             *formato horas:minutos:segundos.
             */
            cout << "introduce los segundos: ";
            cin >> hour;

            A = hour / 3600;
            hour = hour % 3600;
            B = hour / 60;
            C = hour % 60;

            cout<<A<<" : "<<B<<" : "<<C<<endl;

            break;

        case 23:
            /*
             *Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
             *común múltiplo entre los dos.
             */
            do{
                cout << "Ingrese 2 numeros A y B: " << endl;
                cin >> A >> B;
            }while(A<=0 && B<=0);
            if (A>B) M=A, m=B;
            else M=B, m=A;
            while(M%m!=0){
                C = M%m, M = m, m = C;
            }
            cout << "El minimo comun multiplo de " << A << " y " << B << " es: " << (A*B)/m << endl;
            break;
            break;

            break;

        case 24:
            /*
             *Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
             *tamaño, los bordes del cuadrado deben estar hechos con el carácter `+' y el interior debe estar vacío.
             */
            cout << "Ingrese el valor del lado del cuadrado: "<< endl;
            cin >> N;
            for (int fila = 0; fila < N; fila++) {
                for (int columna = 0; columna < N; columna++){
                    if (fila == 0 || fila == N - 1 || columna == 0 || columna == N - 1) cout << '*';
                    else cout << ' ';
                }
                cout << endl;
            }

          break;

        case 25:
            cout << "Ingrese un numero N: " << endl;
            cin >> N;
            res = 0;
            if (N == 0) res = 1;
            for (int i = N; i != 0; i /= 10 ){
                res += 1;
            }
            cout << N << " tiene " << res << " digitos." << endl;
            break;

        case 26:
            /*
             *Ejercicio 26. Escriba un programa que pida tres números e imprima el tipo de triangulo (isósce-
             *les, equilátero, escaleno) que se formaría, si sus lados tienen la longitud denida por los números
             *ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
             */
            cout << "Ingrese los 3 lados de un triangulo: " << endl;
            cin >> A >> B >> C;
            if (A+B < C || A+C < B || B+C < A)  cout << "El triangulo no existe" << endl;
            else{
                if (A == B && A == C) cout << "Es un triangulo equilatero" << endl;
                else if (A == B || A == C || B == C) cout << "Es un trianculo isoceles" << endl;
                else cout << "Es un triangulo escaleno" << endl;
            }
            break;
        case 27:
            /*
             *Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
             *resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar.
             */
            cout << "Ingrese los operandos y el operador: " << endl;
            cin >> A >> K >> B;
            res = 0;
            if (K == '+') res = A + B;
            else if (K == '-') res = A - B;
            else if (K == '*') res = A * B;
            else if (K == '/') res = A / B;

            cout << A << K << B << '=' << res << endl;

            break;
        case 28:
            /*
             *Ejercicio 28. Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente
             *suma innita:
             */
            cout << "Ingrese un numero: ";
            cin >> N;
            resf = 0, c1 = 1.0;
            for (int i = 1;i <= N; i++){
                if (i % 2 != 0 ) resf+=4/c1;
                else resf-=4/c1;
                c1 += 2.0;
            }
            cout << "Pi es aproximadamente " << resf << endl;

            break;

        case 29:
            /*
             *Ejercicio 29. Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
             *usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
             *el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor, menor o igual
             *que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
             *repetira el proceso hasta acertar el número seleccionado por usuario.
             */
            cout << "Piense en un numero entre el 0 y el 100" << endl;
            do{
                cout << "Ingrese la letra R para comenzar";
                cin >> K;
            }while(K != 'R');
            m = 0, M = 101, A = 50;
            A += A;
            do{
                A =(m+M)/2;
                cout << "su numero es: " << A << endl;
                cin >> K;
                if (K == '<') M = A;
                else if (K == '>') m = A;
            }while(K != '=');
            cout << "He adivinado su numero" << endl;

            break;

        case 30:
            /*
             *Ejercicio 30. Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
             *usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B es mayor o menor
             *que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa le dirá
             *el número de intentos que tardo el usuario en adivinar el número.
             */
            string respuesta;
            int fallos= 0;
            
            srand((unsigned)time(NULL));
            
            while(true){
                int num =1+rand()%(101-1);
                cout<<"el numer que estas pensando es: "<<num<<endl;
                (void)gettline(cin,respuesta);
                
                if(respuesta == "si"){
                    cout<<"lo sabia, he ganado \nHe fallado: "<<fallos<<"veces"<<endl;
                    break;
                }else{
                    cout <<"\n";
                    ++fallos;
                }
            }
        }while(num!=0);
    }    