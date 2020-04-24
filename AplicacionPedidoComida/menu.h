#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "submenu.h"




void menu()
{

    bool salir=false;
    int op;
    system("cls");
    setColor(LIGHTRED);
    cout<<"             *-----------*"<<endl;
    cout<<"             |   LARA    |        "<<endl;
    cout<<"             *-----------*"<<endl;
    cout<<endl;
    cout<<"--->  Bienvenido al sistema de pedidos de comidas LARA,"<<endl;
    cout<<"--->  toque una tecla para ir al menu principal"<<endl;
    cin.get();

    while(!salir)
    {
        system("cls");
        cout<<"         MENU PRINCIPAL"          <<endl;
        cout<<"_________________________________"<<endl;
        cout<<"-1-->PLATOS                     -|"<<endl;
        cout<<"-2-->CLIENTES                   -|"<<endl;
        cout<<"-3-->PEDIDOS                    -|"<<endl;
        cout<<"-4-->REPORTES                   -|"<<endl;
        cout<<"-5-->CONFIGURACION              -|"<<endl;
        cout<<"-0-->SALIR                      -|"<<endl;
        cout<<"_________________________________|"<<endl;
        cout<<"-------Ingrese una opcion--------"<<endl;
        cin>>op;
        cin.ignore();
        switch(op)
        {
        case 1:
        {

            system("cls");
            cout<<"            ~MENU DE PLATOS~        "<<endl;
              menuplatos();


        }
        break;
        case 2:
        {
            system("cls");
            cout<<"               ~CLIENTES~                "<<endl;
        }
        break;
        case 3:
        {
            system("cls");
            cout<<"                 ~PEDIDOS~               "<<endl;
        }
        break;
        case 4:
        {
            system("cls");
            cout<<"                  ~REPORTES~               "<<endl;
        }
        break;
        case 5:
        {
            system("cls");
            cout<<"                 ~CONFIGURACION~          "<<endl;
        }
        break;
        case 0:
        {
            system("cls");
            cout<<"Sesion finalizada, esperamos haberlo podido ayudar. !Hasta luego!"<<endl;
            salir=true;
        }
        break;
        default:
        {
            system("cls");
            cout<<"OPCION NO VALIDA, POR FAVOR INGRESE UNA OPCION DEL MENU"<<endl;

        }
        break;

        }
        cin.get();
    }
}


#endif // MENU_H_INCLUDED
