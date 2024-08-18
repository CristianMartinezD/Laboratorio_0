#include <iostream>

using namespace std;


int obtener_entero(){

    string numero_en_texto;
    string NUMEROS = "1234567890";
    int validador = 0;
    cout<<"Ingresa el numero entero: "; cin>>numero_en_texto;

    while (validador < numero_en_texto.length())
    {
        for (int i = 0; i < numero_en_texto.length(); i++)
        {

            if (NUMEROS.find(numero_en_texto[i]) != string::npos) {
                validador += 1;
            } else{
                cout<<"Ingresa un numero valido: "; cin>>numero_en_texto;
                validador = 0;
                break;
            }
        }
        if (validador != 0) validador += 1;
    }
    return stoi(numero_en_texto);

}



void ejercicio0(){
    system("cls");

    int n = obtener_entero();

    for(int fila=1; fila <= n; fila++){
        for (int asterisco=1; asterisco <= fila; asterisco++) cout<<"*"; //Este for imprime tantos asteriscos como indique el el valor de fila.
        for (int espacios=1; espacios <= (n-fila)*2; espacios++) cout<<" "; // Este for imprime (n-fila)*2 espacios en cada iteración.
        for (int asterisco=1; asterisco <= fila; asterisco++) cout<<"*";

        cout<<endl;
    }
    cout<<"\nEse es el resultado del ejercicio del ejemplo.\n\n";
    system("pause");
}



void ejercicio1(){
    system("cls");

    int n = obtener_entero();

    for(int fila=1; fila <= n; fila++){
        for (int asterisco=1; asterisco <= fila; asterisco++) cout<<"*"; //Este for imprime tantos asteriscos como indique el el valor de fila.
        for (int espacios=1; espacios <= (n-fila)*2; espacios++) cout<<" "; // Este for imprime (n-fila)*2 espacios en cada iteración.
        for (int asterisco=1; asterisco <= fila; asterisco++) cout<<"*";

        cout<<endl;
    }


    for (int fila=n-1; fila>=1; fila--){
        for (int asterisco=1; asterisco <= fila; asterisco++) cout<<"*";
        for (int espacios=1; espacios <= (n-fila)*2; espacios++) cout<<" ";
        for (int asterisco=1; asterisco <= fila; asterisco++) cout<<"*";

        cout<<endl;
    }
    cout<<"\nEse es el resultado del ejercicio 1.\n\n";
    system("pause");
}



void ejercicio2(){
    system("cls");

    int numero = obtener_entero();

    if (numero < 0) numero = -1*numero;

    int digito;
    int suma = 0;

    while (numero > 0) {
        digito = numero%10;
        digito = digito*digito;
        suma = suma+digito;
        numero = numero/10;

    }

    cout<<"\n\nLa suma da: "<<suma<<"\n";
    cout<<"\nEse es el resultado del ejercicio 2.\n\n";
    system("pause");
}






int main()
{
    int opcion = 7;
    while (opcion != 3) {

        cout<<"Cual de los ejercicios quieres probar?"
                "\n 0. El ejemplo"
                "\n 1. El primero"
                "\n 2. El segundo"
                "\n 3. Deseo salir"
                "\nIngresa una de las anteriores opciones (0-3): "; cin >> opcion;

        switch (opcion) {
        case 0: {ejercicio0(); break;}
        case 1: {ejercicio1(); break;}
        case 2: {ejercicio2(); break;}
        case 3: {opcion = 3; break;}
        }

    }

    return 0;
}
