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
    return 0;
}