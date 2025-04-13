#include <iostream>
using namespace std;

// Prototipos de funciones
void decimalABinario(int n);
void decimalAOctal(int n);
void decimalAHexadecimal(int n);

int main() {
    int opcion, numero;

    do {
        // Mostrar menu
        cout << "Seleccione una opcion de conversion:\n";
        cout << "1. Decimal a Binario\n";
        cout << "2. Decimal a Octal\n";
        cout << "3. Decimal a Hexadecimal\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese un numero decimal: ";
                cin >> numero;
                cout << "Resultado en Binario: ";
                decimalABinario(numero);
                cout << endl;
                break;
            case 2:
                cout << "Ingrese un numero decimal: ";
                cin >> numero;
                cout << "Resultado en Octal: ";
                decimalAOctal(numero);
                cout << endl;
                break;
            case 3:
                cout << "Ingrese un numero decimal: ";
                cin >> numero;
                cout << "Resultado en Hexadecimal: ";
                decimalAHexadecimal(numero);
                cout << endl;
                break;
            case 4:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
        cout << endl;
    } while (opcion != 4);

    return 0;
}

// Convierte un numero decimal a binario usando recursión
void decimalABinario(int n) {
    if (n > 1) {
        decimalABinario(n / 2);
    }
    cout << (n % 2);
}

// Convierte un numero decimal a octal usando recursión
void decimalAOctal(int n) {
    if (n > 7) {
        decimalAOctal(n / 8);
    }
    cout << (n % 8);
}

// Convierte un numero decimal a hexadecimal usando recursión
void decimalAHexadecimal(int n) {
    if (n > 15) {
        decimalAHexadecimal(n / 16);
    }
    int residuo = n % 16;
    if (residuo < 10) {
        cout << residuo;
    } else {
        cout << char(residuo - 10 + 'A');
    }
}
