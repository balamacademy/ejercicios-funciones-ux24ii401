#include <iostream>
using namespace std;


float bitsABytes(float bits);
float kilobytesABytes(float kb);
float megabytesAKilobytes(float mb);
float gigabytesAMegabytes(float gb);

int main() {
    int opcion;
    float valor, resultado;

    do {
        
        cout << "Seleccione una opcion de conversion:\n";
        cout << "1. Bits a Bytes\n";
        cout << "2. Kilobytes a Bytes\n";
        cout << "3. Megabytes a Kilobytes\n";
        cout << "4. Gigabytes a Megabytes\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor en Bits: ";
                cin >> valor;
                resultado = bitsABytes(valor);
                cout << "Resultado: " << resultado << " Bytes\n";
                break;
            case 2:
                cout << "Ingrese el valor en Kilobytes: ";
                cin >> valor;
                resultado = kilobytesABytes(valor);
                cout << "Resultado: " << resultado << " Bytes\n";
                break;
            case 3:
                cout << "Ingrese el valor en Megabytes: ";
                cin >> valor;
                resultado = megabytesAKilobytes(valor);
                cout << "Resultado: " << resultado << " Kilobytes\n";
                break;
            case 4:
                cout << "Ingrese el valor en Gigabytes: ";
                cin >> valor;
                resultado = gigabytesAMegabytes(valor);
                cout << "Resultado: " << resultado << " Megabytes\n";
                break;
            case 5:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
        cout << endl;
    } while (opcion != 5);

    return 0;
}


float bitsABytes(float bits) {
    return bits / 8.0;
}

float kilobytesABytes(float kb) {
    return kb * 1024.0;
}

float megabytesAKilobytes(float mb) {
    return mb * 1024.0;
}

float gigabytesAMegabytes(float gb) {
    return gb * 1024.0;
}
