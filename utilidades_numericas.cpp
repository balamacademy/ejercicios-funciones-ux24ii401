#include <iostream>
using namespace std;

// Prototipos de funciones
bool esPrimo(int n);
int factorial(int n);
int contarDigitos(int n);
int sumarDigitos(int n);

int main() {
    int opcion, numero;

    do {
        cout << "Seleccione una opcion:\n";
        cout << "1. Verificar si un numero es primo\n";
        cout << "2. Calcular el factorial de un numero\n";
        cout << "3. Contar cuantos digitos tiene un numero\n";
        cout << "4. Sumar los digitos de un numero\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese un numero: ";
                cin >> numero;
                if (esPrimo(numero)) {
                    cout << numero << " es primo.\n";
                } else {
                    cout << numero << " no es primo.\n";
                }
                break;
            case 2:
                cout << "Ingrese un numero: ";
                cin >> numero;
                if (numero < 0) {
                    cout << "El factorial no esta definido para numeros negativos.\n";
                } else {
                    cout << "El factorial de " << numero << " es " << factorial(numero) << ".\n";
                }
                break;
            case 3:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "El numero " << numero << " tiene " << contarDigitos(numero) << " digitos.\n";
                break;
            case 4:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "La suma de los digitos de " << numero << " es " << sumarDigitos(numero) << ".\n";
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

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int factorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int contarDigitos(int n) {
    if (n == 0) return 1;
    int contador = 0;
    n = abs(n); 
    while (n > 0) {
        n /= 10;
        contador++;
    }
    return contador;
}

// Suma los digitos de un numero
int sumarDigitos(int n) {
    int suma = 0;
    n = abs(n); 
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}
