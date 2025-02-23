#include <iostream>

int main() 
{
    double edad, descuento_estudiante = 50, descuento_senior = 30,  descuento_menor5 = 100,  precio_boleto = 100;
    char tipo_boleto;

    // Entrada de datos por medio de la terminal
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;
    std::cout << "Elija un tipo de boleto entre:\n"
              << "(N) Normal\n"
              << "(E) Estudiante (descuento del 50%)\n"
              << "(S) Senior (descuento del 30% para mayores de 60 años)\n";
    std::cin >> tipo_boleto;

    // Análisis del descuento por asignar al usuario
    if (edad <= 5)
    {
        precio_boleto = precio_boleto - (precio_boleto * descuento_menor5 / 100);
    }
    else if (tipo_boleto == 'S' || edad >= 60) // Usar == para comparar
    {
        precio_boleto = precio_boleto - (precio_boleto * descuento_senior / 100);
    }
    else if (tipo_boleto == 'E') // Usar == para compararx
    {
        precio_boleto = precio_boleto - (precio_boleto * descuento_estudiante / 100);
    }

    // Impresión de los datos finales
    std::cout << "El precio a pagar por su boleto es: " << precio_boleto << std::endl;

    return 0;
}