#include <cstdio> //Para scanf, fgets, printf, puts
#include <print> //Para std::println (C++23)
#include <string> //Para std::string
#include <iostream> //Para cin, cout, getline
using namespace std; //directiva para no escribir std::cout, std::cin, etc.
int main(){
    //Variables que usaremos en los ejemplos
    char nombre_c[50]; //Arreglo estilo C
    string nombre_cpp; //String estilo C++
    int edad; //Variable edad
    //========================================
    //Bloque 1: Estilo C tradicional (scanf + prinf)
    //=======================================
    //LImitaciín de Lectura: scanf con %s solo lee la primera palabra (Sin espacios)
    printf("--[Bloque 1 - Tradicional en C: scanf + printf]--\n");
    printf("Escribe un primer NOMBRE Y EDAD (ej: Carlos 23): ");
    scanf("%49s %d", nombre_c, &edad); //Leemos nombre y edad
    
    //Salida con printf usando especificadores de formato
    printf("Resultado 1 -> Nombre: %s, Edad: %d años\n\n", nombre_c, edad);
    //Limpieza obligatoria del búfer del teclado para los siguientes ejemplos
    int c; while (( c = getchar()) != '\n' && c != EOF);
    
    // =========================================================================
    // BLOQUE 2: Estilo C seguro (fgets + puts)
    // =========================================================================
    // VENTAJA: Permite espacios. LIMITACIÓN: Guarda el salto de línea al presionar Enter.
    printf("--- [BLOQUE 2: fgets + puts] ---\n");
    printf("Escribe NOMBRE COMPLETO para fgets: ");
    fgets(nombre_c, 50, stdin); 
    
    // Puts solo imprime texto plano, así que mostramos un mensaje fijo
    puts("Resultado 2 -> Nombre guardado de forma segura con fgets:");
    puts(nombre_c); // Nota: puts añade un salto de línea automático al final

    // =========================================================================
    // BLOQUE 3: Estilo C++ clásico (std::cin >> + std::cout)
    // =========================================================================
    // LIMITACIÓN DE LECTURA: Al igual que scanf, cin >> se detiene en el primer espacio.
    std::cout << "--- [BLOQUE 3: cin + cout] ---\n";
    std::cout << "Escribe un primer NOMBRE y EDAD para cin (ej: Ana 30): ";
    std::cin >> nombre_cpp >> edad;
    
    // Salida encadenada clásica de C++ con el operador <<
    std::cout << "Resultado 3 -> Nombre: " << nombre_cpp << ", Edad: " << edad << " anos\n\n";


    // Limpieza del búfer de cin para que la siguiente lectura no se salte
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 0;
}