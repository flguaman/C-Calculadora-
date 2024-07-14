#include <iostream>
using namespace std;

void mostrarMenu() {
    cout << "Calculadora Simple\n";
    cout << "Seleccione una operación:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicación\n";
    cout << "4. División\n";
    cout << "5. Salir\n";
}

int main() {
    int opcion;
    double num1, num2;

    do {
        mostrarMenu();
        cout << "Ingrese su opción: ";
        cin >> opcion;

        if(opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;
        }

        switch(opcion) {
            case 1:
                cout << "Resultado: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Resultado: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Resultado: " << num1 * num2 << endl;
                break;
            case 4:
                if(num2 != 0) {
                    cout << "Resultado: " << num1 / num2 << endl;
                } else {
                    cout << "Error: División por cero\n";
                }
                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }
    } while(opcion != 5);

    return 0;
}
