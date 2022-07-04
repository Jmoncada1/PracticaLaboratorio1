
#include <iostream>

using namespace std;
int count;
int main()
{
     cout << "Ingrese el monto: " << endl;
            cin >> count;

            cout << "50000: " << count/50000 << endl;
            count = count-count/50000*50000;

            cout << "20000: " <<count/20000 << endl;
            count = count-count/20000*20000;

            cout << "10000: " <<count/10000 << endl;
            count = count-count/10000*10000;

            cout << "5000: " <<count/5000 << endl;
            count = count-count/5000*5000;

            cout << "2000: " <<count/2000 << endl;
            count = count-count/2000*2000;

            cout << "1000: " <<count/1000 << endl;
            count = count-count/1000*1000;

            cout << "500: " <<count/500 << endl;
            count = count-count/500*500;

            cout << "200: " <<count/200 << endl;
            count = count-count/200*200;

            cout << "100: " <<count/100 << endl;
            count = count-count/100*100  ;

            cout << "50: " <<count/50 << endl;
            count = count-count/50*50 ;

            cout << "Faltente:" <<count << endl;

        

    return 0;
}