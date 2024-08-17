#include <iostream>

using namespace std;



void ejercicio0(){
    system("cls");

    int n;
    cout<<"Ingresa el numero base: "; cin>>n;

    for(int fila=1; fila <= n; fila++){
        for (int asterisco=1; asterisco <= fila; asterisco++) cout<<"*"; //Este for imprime tantos asteriscos como indique el el valor de fila.
        for (int espacios=1; espacios <= (n-fila)*2; espacios++) cout<<" "; // Este for imprime (n-fila)*2 espacios en cada iteración.
        for (int asterisco=1; asterisco <= fila; asterisco++) cout<<"*";

        cout<<endl;
    }
    cout<<"\n\nEse es el resultado del ejercicio del ejemplo.\n\n";
    system("pause");
}



void ejercicio1(){
    system("cls");

    int n;
    cout<<"Ingresa el numero base: "; cin>>n;

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
    cout<<"\n\nEse es el resultado del ejercicio 1.\n\n";
    system("pause");
}



void ejercicio2(){
    system("cls");

    int numero;
    cout<<"Ingreasa un numero entero: "; cin>>numero;
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
    cout<<"\n\nEse es el resultado del ejercicio 2.\n\n";
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
