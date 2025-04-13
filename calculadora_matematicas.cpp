#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b == 0) {
        cout << "Error: No se puede dividir entre cero." << endl;
        return 0;
    }
    return static_cast<float>(a) / b;
}

void mostrarMenu() {
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Sumar dos numeros" << endl;
    cout << "2. Restar dos numeros" << endl;
    cout << "3. Multiplicar dos numeros" << endl;
    cout << "4. Dividir dos numeros" << endl;
    cout << "5. Salir" << endl;
}

int main() {
    int opcion, a, b;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                cin >> a >> b;
                cout << "Resultado: " << sumar(a, b) << endl;
                break;
            case 2:
                cin >> a >> b;
                cout << "Resultado: " << restar(a, b) << endl;
                break;
            case 3:
                cin >> a >> b;
                cout << "Resultado: " << multiplicar(a, b) << endl;
                break;
            case 4:
                cin >> a >> b;
                cout << "Resultado: " << dividir(a, b) << endl;
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}
