#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
    int opcion;
    cout << "Elige la estructura de datos que deseas manipular:" << endl;
    cout << "1. Vector" << endl;
    cout << "2. Mapa" << endl;
    cout << "3. Set" << endl;
    cout << "Introduce tu opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1: {
            vector<int> vec;
            int n, valor;
            cout << "¿Cuántos elementos quieres añadir al vector? ";
            cin >> n;
            for (int i = 0; i < n; ++i) {
                cout << "Introduce el valor " << i+1 << ": ";
                cin >> valor;
                vec.push_back(valor);
            }
            cout << "Elementos del vector: " << endl;
            for(int elemento : vec) {
                cout << elemento << endl;
            }
            break;
        }
        case 2: {
            map<int, string> mapa;
            int n, clave;
            string valor;
            cout << "¿Cuántos pares clave-valor quieres añadir al mapa? ";
            cin >> n;
            for (int i = 0; i < n; ++i) {
                cout << "Introduce la clave " << i+1 << ": ";
                cin >> clave;
                cout << "Introduce el valor para la clave " << clave << ": ";
                cin >> valor;
                mapa[clave] = valor;
            }
            cout << "Elementos del mapa: " << endl;
            for(const auto& par : mapa) {
                cout << par.first << " -> " << par.second << endl;
            }
            break;
        }
        case 3: {
            set<int> conjunto;
            int n, valor;
            cout << "¿Cuántos elementos quieres añadir al set? ";
            cin >> n;
            for (int i = 0; i < n; ++i) {
                cout << "Introduce el valor " << i+1 << ": ";
                cin >> valor;
                conjunto.insert(valor);
            }
            cout << "Elementos del set: " << endl;
            for(int elemento : conjunto) {
                cout << elemento << " ";
            }
            cout << endl;
            break;
        }
        default:
            cout << "Opcion no valida." << endl;
    }
    return 0;
}
