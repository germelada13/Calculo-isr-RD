# Cálculo del ISR - República Dominicana 2026

Programa en C++ que lee el sueldo mensual de un empleado, calcula el ISR (Impuesto Sobre la Renta) con la escala de la DGII para el año 2026 y muestra el sueldo y el descuento de ISR. Si el sueldo está exento, muestra `0 (N/A)`.

## Resumen

1. El programa pide el sueldo mensual.
2. Lo convierte a anual (x 12), porque la escala de la DGII es anual.
3. Aplica la escala con `if / else if`.
4. Divide el ISR anual entre 12 y muestra el descuento mensual.

## Escala usada (año fiscal 2026)

| Ingreso anual (RD$) | ISR |
|---|---|
| Hasta 416,220.00 | Exento |
| 416,220.01 a 624,329.00 | 15% del excedente de 416,220.00 |
| 624,329.01 a 867,123.00 | 31,216.00 + 20% del excedente de 624,329.00 |
| Más de 867,123.00 | 79,776.00 + 25% del excedente de 867,123.00 |

Fuente: DGII, escala de retención para asalariados.

## Cómo compilar y ejecutar

```
g++ isr_calculo.cpp -o isr
./isr
```

## Escenarios de ejecución

> Aquí van las capturas de pantalla del programa en ejecución.

**Escenario 1: sueldo exento (RD$ 30,000)**

```
Ingrese el sueldo mensual (RD$): 30000
Sueldo mensual: RD$ 30000.00
ISR a descontar: 0 (N/A)
```

**Escenario 2: tramo del 15% (RD$ 45,000)**

```
Ingrese el sueldo mensual (RD$): 45000
Sueldo mensual: RD$ 45000.00
ISR a descontar: RD$ 1547.25 al mes
```

**Escenario 3: tramo del 20% (RD$ 60,000)**

```
Ingrese el sueldo mensual (RD$): 60000
Sueldo mensual: RD$ 60000.00
ISR a descontar: RD$ 4195.85 al mes
```

**Escenario 4: tramo del 25% (RD$ 100,000)**

```
Ingrese el sueldo mensual (RD$): 100000
Sueldo mensual: RD$ 100000.00
ISR a descontar: RD$ 13582.94 al mes
```
