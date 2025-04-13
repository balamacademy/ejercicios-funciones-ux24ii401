#include <iostream>
using namespace std;

// Prototipos de funciones
float celsiusAFahrenheit(float c);
float fahrenheitACelsius(float f);
float metrosAPies(float m);
float kilogramosALibras(float kg);

int main() {
    int opcion;
    float valor, resultado;

    do {
        cout << "Seleccione una opcion de conversion:\n";
        cout << "1. Celsius a Fahrenheit\n";
        cout << "2. Fahrenheit a Celsius\n";
        cout << "3. Metros a Pies\n";
        cout << "4. Kilogramos a Libras\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese grados Celsius: ";
                cin >> valor;
                resultado = celsiusAFahrenheit(valor);
                cout << "Resultado: " << resultado << " F\n";
                break;
            case 2:
                cout << "Ingrese grados Fahrenheit: ";
                cin >> valor;
                resultado = fahrenheitACelsius(valor);
                cout << "Resultado: " << resultado << " C\n";
                break;
            case 3:
                cout << "Ingrese metros: ";
                cin >> valor;
                resultado = metrosAPies(valor);
                cout << "Resultado: " << resultado << " pies\n";
                break;
            case 4:
                cout << "Ingrese kilogramos: ";
                cin >> valor;
                resultado = kilogramosALibras(valor);
                cout << "Resultado: " << resultado << " libras\n";
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

// Definiciones de funciones
float celsiusAFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheitACelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

float metrosAPies(float m) {
    return m * 3.28084;
}

float kilogramosALibras(float kg) {
    return kg * 2.20462;
}
