/* Programa para mostrar los archivos de un directorio usando las librerias propuestas*/
#include <iostream>
#include <filesystem>
#include <Windows.h>

using namespace std;
namespace fs = std::filesystem;

int main() {
    /* Establecer la ruta al directorio*/
    /*Clase para establecer ruta de directorio*/const fs::path dirPath = "C:\\Borrar\\";

    /*Repetir sobre todos los archivos en la carpeta e imprimir sus nombres*/
    /* Uso este bucle for y fs::directory_iterator para iterar sobre todos los archivos en la carpeta*/for (const auto& entry : fs::directory_iterator(dirPath)){
        if /*comprueba si es un archivo normal mediante la función is_regular_file()*/(entry.is_regular_file()){/* si lo es imprime su nombre mediante la función path().filename().*/
            cout << entry.path().filename() << endl;
        }
    }

    return 0;
}
