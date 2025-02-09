#include <iostream>
#include <unistd.h>
using namespace std;


int main() {
    float num1;
    float num2;
    float suma;
    float producto;
    cout << "Ingrese un numero: ";
    cin >> num1;  
    
    cout << "Ingrese otro numero: ";
    cin >> num2; 
    suma = num1 + num2;
    producto = num1 * num2;

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Producto: " << producto << std::endl;
    sleep(3);
}