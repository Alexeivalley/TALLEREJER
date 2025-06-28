#include <iostream>
#include "src/estudiantes.h"
using namespace std;

Estudiante es;
int main(){

    int opcion;
    struct Estudiante Students[10];
    int Cont = 0;
    int ID;
    int CantEstudiantes = 0;
    bool Encontrado = false;

    cout << "Bienvenido al colegio Julio Cesar" << endl;
    while (true){
        cout << "Que desea ver en el registro?\n1. Agregar\n2. Mostrar todos\n3. Buscar\n4. Salir\n";
        cin >> opcion;

        if (Cont == 9 || opcion == 4){
        cout << "Saliendo...";
        break;
        }

        switch (opcion){
        case 1:
            Students[Cont] = Data();
            Cont++;
            CantEstudiantes++;
            cout << endl;
            break;
        case 2:
            for (int i = 0; i < CantEstudiantes; i++){
                cout << "ESTUDIANTE # " << i+1 << endl;
                ShowDataEstudent(Students[i]); cout << endl;
                Students[i];
            }
            break;
        case 3:
            cout << "Ingrese el ID para encontrar al estudiante" << endl;
            cin >> ID;

            for (int i = 0; i < CantEstudiantes; i++) {
                if (ID == Students[i].ID) {  // ← Comparar con el arreglo correctamente
                    Encontrado = true;
                    ShowDataEstudent(Students[i]);  // ← Mostrar el estudiante encontrado
                    break;  // ← Termina el ciclo, ya que se encontró
                }
            }

            if (!Encontrado) {
                cout << "No se encontro el ID" << endl;
            }
            cout << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }
}
