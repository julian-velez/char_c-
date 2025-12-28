#include <iostream> 
// Incluye la librería iostream, que permite usar entrada y salida estándar
// como cout (para imprimir en pantalla)

int main() {
    // Función principal del programa, aquí comienza la ejecución

    // 1. Declaración de un solo carácter
    char var = 'B';
    // Se declara una variable de tipo char llamada 'var'
    // 'B' es un carácter, internamente se guarda como un número ASCII (66)

    char digito = '5';
    // Se declara otra variable char llamada 'digito'
    // '5' también es un carácter, su valor ASCII es 53

    std::cout << digito + var;
    // Aquí NO se concatenan caracteres
    // Se suman los valores ASCII:
    // '5' = 53
    // 'B' = 66
    // 53 + 66 = 119
    // Se imprime el número 119 en pantalla

}
