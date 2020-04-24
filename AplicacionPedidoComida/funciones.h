#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


struct platos
{
    int id;
    char nombre[50];
    float costoPrep;
    float valorventa;
    int timepreparacion;
    int idresto;
    int comision;
    int idcategoria;
    bool estado;
};
const char *RUTA_PLATO="platos.dat";
int buscar_plato(int id_buscado)
{
    platos reg;
    int i=0;
    FILE *p;
    p=fopen(RUTA_PLATO,"rb");
    if(p==NULL)
    {
        return -2;
    }
    while(fread(&reg,sizeof(platos),1,p))
    {
        if(reg.id==id_buscado)
        {
            fclose(p);
            return i;
        }
        i++;
    }
    fclose(p);
    return -1;

}
bool cargar_platos()
{
    int i;
    platos *reg;
    cout<<"INGRESE ID :"<<endl;
    cin >> reg->id;
    i=buscar_plato(reg->id);
    if(i >= 0)
    {
        return false;
    }

    cout<<"INGRESE EL NOMBRE :"<<endl;
    cin.ignore();
    cin.getline(reg->nombre,30);

    cout<<"INGRESE PRECIO :"<<endl;
    cin>>reg->costoPrep;
    if(reg->costoPrep<0)
    {
        return false;
    }

    cout<<"INGRESE EL VALOR DE VENTA:"<<endl;
    cin>>reg->valorventa;
    if(reg->valorventa<0)
    {
        return false;
    }

    cout<<"INGRESE TIEMPO DE PREPARACION:"<<endl;
    cin>>reg->timepreparacion;
    if(reg->timepreparacion<0)
    {
        return false;
    }

    cout<<"INGRESE EL ID DEL RESTAURANTE"<<endl;
    cin>>reg->idresto;
    if(reg->idresto<0)
    {
        return false;
    }

    cout<<"INGRESE COMISION DE RESTAURANTE:"<<endl;
    cin>>reg->comision;
    if(reg->comision<0&&reg->comision>100)
    {
        return false;
    }

    cout<<"INGRESE EL ID DE CATEGORIA:"<<endl;
    cin>>reg->idcategoria;
    if(reg->idcategoria<0)
    {
        return false;
    }

}
bool guardar_plato(platos reg)
{
    bool escribio;
    FILE *p;
    p=fopen(RUTA_PLATO,"ab");
    if(p==NULL)
    {
        return false;
    }
    escribio=fwrite(&reg,sizeof(platos),1,p);
    fclose(p);
    return escribio;
}

int cantidad_platos()
{
    int bytes,cr;
    FILE *p;
    p=fopen(RUTA_PLATO,"rb");
    if(p==NULL)
    {
        return 0;
    }
    fseek(p,0,SEEK_END);
    bytes=ftell(p);
    cr=bytes/sizeof(platos);
    fclose(p);
    return cr;
}




platos leer_plato(int pos)
{
    platos reg;
    FILE *p;
    p=fopen(RUTA_PLATO,"rb");
    if(p==NULL)
    {
        reg.id=-1;
        return reg;
    }
    fseek(p,pos*sizeof(platos),SEEK_SET);
    fread(&reg,sizeof(platos),1,p);
    fclose(p);
    return reg;
}


void listar_plato(platos reg)
{
    cout<<"______________________________"<<endl;
    cout<<"ID|       NOMBRE|    COSTO PREPARACION|       VALOR VENTA|         TIEMPO|       ID RESTO|      COMISION|         ID CAT|"<<endl;
    cout<<reg.id<<endl;
    cout<<     reg.nombre<<endl;
    cout<<          reg.costoPrep<<endl;
    cout<<                   reg.valorventa<<endl;
    cout<<                              reg.timepreparacion<<endl;
    cout<<                                            reg.idresto<<endl;
    cout<<                                                           reg.comision<<endl;
    cout<<                                                                 reg.idcategoria<<endl;




}




void listar_platos()
{
    cls();
    platos reg;
    int cant=cantidad_platos();
    for(int i=0; i<cant; i++)
    {
        cout<<"#"<<i+1<<endl;
        reg=leer_plato(i);
        listar_plato(reg);
        cout<<endl;
    }
}



#endif // FUNCIONES_H_INCLUDED
