#include <iostream>
#include "autor.h"

using namespace std;

void MostrarDatos(Cautor*arreglo, int n){
	for(int i=0;i<n;i++){
		cout<<"Nombre: "<<arreglo[i].getnombre()<<endl; 
		cout<<"Apellido: "<<arreglo[i].getapellido()<<endl; 
		cout<<"Nacionalidad: "<<arreglo[i].getnacionalidad()<<endl; 
		cout<<"Mejor obra: "<<arreglo[i].getmejorobra()<<endl; 
		cout<<"Anio publicacion: "<<arreglo[i].getaniopublicacion()<<endl; 
		cout<<"Edad en Publicacion: "<<arreglo[i].getedadpublicacion()<<endl; 
		cout<<endl;
	}
}

void ListarNacionalidad(Cautor*arreglo,int n, string nacionalidad){
	cout<<"Los autores Argentinos: "<<endl;
	for(int i=0;i<n;i++){
		if(arreglo[i].getnacionalidad() == nacionalidad){
			cout<<"-"<<arreglo[i].getnombre()<<" "<<arreglo[i].getapellido()<<endl;
		}
	}
	cout<<endl;
}

void ListarAnioPublicacion(Cautor*arreglo,int n){
	cout<<"Autores con publicacion entre 1960 y 1980: "<<endl;
	for(int i=0;i<n;i++){
		if(arreglo[i].getaniopublicacion() >= 1960 && arreglo[i].getaniopublicacion() <= 1980){
			cout<<"-"<<arreglo[i].getnombre()<<" "<<arreglo[i].getapellido()<<endl;
		}
	
	}
	cout<<endl;
}
void PromedioEdadPublicacion(Cautor* arreglo, int n) {
    int sumaEdades = 0;
    for (int i = 0; i < n; i++) {
        sumaEdades += arreglo[i].getedadpublicacion();
    }
    int promedio = sumaEdades / n;
    cout << "El promedio de edad de publicacion es: " << promedio << endl;
}



int main(){
	
	Cautor*autores= new Cautor[8];
	
autores[0] = Cautor("Gabriel", "Garcia Marquez", "Colombiano", "Cien anos de soledad", 1967, 40);
autores[1] = Cautor("Julio", "Cortazar", "Argentino", "Rayuela", 1963, 48);
autores[2] = Cautor("Isabel", "Allende", "Chilena", "La casa de los espiritus", 1982, 40);
autores[3] = Cautor("Jorge Luis", "Borges", "Argentino", "Ficciones", 1944, 45);
autores[4] = Cautor("Clarice", "Lispector", "Brasilenia", "La hora de la estrella", 1977, 56);
autores[5] = Cautor("Juan", "Rulfo", "Mexicano", "Pedro Paramo", 1955, 38);
autores[6] = Cautor("Carlos", "Fuentes", "Mexicano", "La region mas transparente", 1958, 29);
autores[7] = Cautor("Eduardo", "Galeano", "Uruguayo", "Las venas abiertas de America Latina", 1971, 31);


 MostrarDatos(autores,8);
 ListarNacionalidad(autores,8,"Argentino");
 ListarAnioPublicacion(autores,8);
 PromedioEdadPublicacion(autores,8);
 
	return 0;
}
