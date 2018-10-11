#include<stdio.h>

class Perro{
	private:
		char*nombre;
		char*raza;
		int edad;
	public:
	void insertar_nombre(char nomb[30]){
		nombre=nomb;
	}
	void insertar_raza(char raz[30]){
			raza=raz;
}
	void insertar_edad(int eda){
			edad=eda;		
	}
	void mostrar(){
			printf("Nombre: %s\n",nombre);
			printf("Raza: %s\n",raza);
			printf("edad %d\n",edad);
	}
};
int main(){
	Perro Toby;
	char nombre[30];char raza[30];int edad;
	printf("Ingrese el nombre del animal:");
	scanf("%s",&nombre);
	printf("Ingrese raza del animal:");
	scanf("%s",&raza);
	printf("Ingrese edad del animal:\n");
	scanf("%d",&edad);
	Toby.insertar_nombre(nombre);
	Toby.insertar_edad(edad);
	Toby.insertar_raza(raza);
	Toby.mostrar();
	return 0;
}
