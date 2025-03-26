#include <iostream>

using namespace std;

int main()
{
    /**
    * el valor CERO (0) significa false
    * un valor diferente de CERO significa true
    **/
    int n{21};
    if( !(n % 2) ) {
        cout << "ES PAR" << endl;
    } else {
        cout << "ES IMPAR" << endl;
    }

    return 0;
}
