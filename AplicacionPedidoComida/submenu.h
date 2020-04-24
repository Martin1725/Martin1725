#ifndef SUBMENU_H_INCLUDED
#define SUBMENU_H_INCLUDED
#include "funciones.h"


void menuplatos()
{

    bool volver=false;
    int op;
    system("cls");

    while(!volver)
    {
        setColor(YELLOW);
        system("cls");
        cout<<"         MENU DE PLATOS"          <<endl;
        cout<<"_________________________________"<<endl;
        cout<<"-1-->NUEVO PLATO                -|"<<endl;
        cout<<"-2-->MODIFICAR                  -|"<<endl;
        cout<<"-3-->LISTAR PLATO x ID          -|"<<endl;
        cout<<"-4-->PLATOS POR RESTAURANT      -|"<<endl;
        cout<<"-5-->LISTAR PLATOS              -|"<<endl;
        cout<<"-6-->ELIMINAR PLATO             -|"<<endl;
        cout<<"-0-->VOLVER                     -|"<<endl;
        cout<<"_________________________________|"<<endl;
        cout<<"-------Ingrese una opcion--------"<<endl;
        cin>>op;
        cin.ignore();
        switch(op)
        {
        case 1:
        {

            system("cls");
            cout<<"            ~NUEVO PLATO~        "<<endl;
         cargar_platos();

        }
        break;
        case 2:
        {
            system("cls");
            cout<<"               ~MODIFICAR PLATO~                "<<endl;
        }
        break;
        case 3:
        {
            system("cls");
            cout<<"                 ~LISTAR PLATO x ID~               "<<endl;
        }
        break;
         case 4:
        {
            system("cls");
            cout<<"                 ~PLATOS x RESTAURANTE~               "<<endl;
        }
        break;

        case 5:
        {
            system("cls");
            cout<<"                 ~LISTAR TODOS LOS PLATOS~          "<<endl;
            listar_platos();
        }
        break;
        case 6:
        {
            system("cls");
            cout<<"                  ~ELIMINAR PLATO~               "<<endl;
        }
        break;
        case 0:
        {
                   system("cls");
                   cout<<"TOQUE ENTER PARA VOLVER AL MENU PRINCIPAL"<<endl;
                   volver=true;
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

#endif // SUBMENU_H_INCLUDED
