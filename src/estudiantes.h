#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H
#include <string>
using namespace std;

    struct Estudiante{
        string apellido;
        string nombre;
        int ID;
        float NotMat;
        float NotLen;
        float NotCien;
        float NotSoc;
        float NotGlobal;
    };

Estudiante Data();
void ShowDataEstudent(Estudiante& es);
void BuscarStudent(Estudiante& es);

#endif