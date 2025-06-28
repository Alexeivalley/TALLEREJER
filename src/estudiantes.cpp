#include <iostream>
#include "estudiantes.h"
using namespace std;

Estudiante Data(){
    struct Estudiante es;
    cin.ignore();
    cout << "Apellidos: "; getline(cin, es.apellido);
    cout << "Nombres: "; getline(cin, es.nombre);
    cout << "ID: "; cin >> es.ID;
    cout << "Nota Matematicas: "; cin >> es.NotMat;
    cout << "Nota Lenguaje: "; cin >> es.NotLen;
    cout << "Nota Ciencias: "; cin >> es.NotCien;
    cout << "Nota Sociales: "; cin >> es.NotSoc;
    return es;
}

void ShowDataEstudent(Estudiante& es){
    float Prom = (es.NotMat + es.NotLen + es.NotCien + es.NotSoc)/4;
    string Status = (Prom >= 7) ? "\033[32mAPROBADO\033[0m":"\033[31mREPROBADO\033[0m";
    cout << "Nombre del estudiante: " << es.apellido << " " << es.nombre << endl;
    cout << "ID del estudiante: " << es.ID << endl << endl;
    cout << "  --CALIFICACIONES--" << endl;
    cout << "Matematicas:     " << es.NotMat << endl;
    cout << "Lenguaje:        " << es.NotLen << endl;
    cout << "Ciencias:        " << es.NotCien << endl;
    cout << "Sociales:        " << es.NotSoc << endl;
    cout << "Promedio Global: " << Prom << endl;
    cout << "Estado: " << Status << endl;
}