#include<iostream>
#include<string>
using namespace std;
int main (){
    cout<<"1. ejercicios:\n ";
    
   //========EJERCICIO 1 ========


    string nombre;
    int edad;
    char genero;
    char estrato;
    float altura;
    bool alergias;
    
    cout<<"por favor ingresa Nombre completo: ";
    getline (cin, nombre);
    
    cout<<"por favor ingresa edad: ";
    cin>> edad;
    
    cout<<"por favor ingresa genero(M= hombre F= mujer): ";
    cin >> genero;
    
    cout<<"por favor ingresa estrato: ";
    cin>> estrato;
    
    cout<<"por favor ingresa altura: ";
    cin>> altura;
    
    cout<<"-¿tienes alergias?: (1= si, 0= no): ";
    cin>> alergias;
    
    
    //========EJERCICIO 2 ========
    cin.ignore();
    
    
    string direccion;
    string telefono;
    string correo;
    
    cout<<"por favor ingresa direccion: ";
    getline(cin, direccion);
    
    cout<<"por favor ingresa telefono: ";
    getline(cin, telefono);
    
    cout<<"por favor ingresa correo: ";
    getline(cin, correo);
    //========EJERCICIO 3 ========
    
    float peso;
    float imc;
    
    cout<<"por favor ingresa el peso en Kg: ";
    cin>> peso;
    
    imc=peso/(altura*altura);
    
    cout<<"tu imc: " <<imc<<"\n";
    
    if (imc<18.5){
      cout<<"clasificacion: bajo peso"<<"\n";
    }
    
    else if (imc<=24.9){
      cout<<"clasificacion normal" <<"\n";  
    }
    
    else{
      cout<<"clasificacion sobrepeso" <<"\n";
    }
    
    return 0;

}