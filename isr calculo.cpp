// Calculo del ISR - Republica Dominicana 2026 (escala DGII)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sueldo, anual, isr;

    cout << "Ingrese el sueldo mensual (RD$): ";
    cin >> sueldo;

    cout << fixed << setprecision(2);
    anual = sueldo * 12;

    if (anual <= 416220) {
        isr = 0;
    } else if (anual <= 624329) {
        isr = (anual - 416220) * 0.15;
    } else if (anual <= 867123) {
        isr = 31216 + (anual - 624329) * 0.20;
    } else {
        isr = 79776 + (anual - 867123) * 0.25;
    }

    cout << "Sueldo mensual: RD$ " << sueldo << endl;
    if (isr == 0) {
        cout << "ISR a descontar: 0 (N/A)" << endl;
    } else {
        cout << "ISR a descontar: RD$ " << isr / 12 << " al mes" << endl;
    }

    return 0;
}
