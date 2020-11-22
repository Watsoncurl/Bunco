#ifndef RESOLUCION_H_INCLUDED
#define RESOLUCION_H_INCLUDED
#include "graficas.h"


 ///Esta funcion la hice para poder mostrar el mensaje directamente sin tener que poner todo este codigo al main
            MostrarMensaje(){

            int op,v[3]{0,0,0},vcb[3]{0,0,0};
            char vn[50],vj1[50],vj2[50];
            bool cargado=false;
            int ac=0;
            int ca=0;
            while(true){
                    titulo();

                    gotoxy(30,11); cout<<"1. Juego nuevo para un jugador"<<endl;
                    gotoxy(30,12); cout<<"2. Juego nuevo para dos jugadores."<<endl;
                    if(cargado){
                    gotoxy(30,13); cout<<"3. Modo simulado (Carga de datos manual)"<<endl;
                    gotoxy(30,14); cout<<"4. Mostrar puntuacion alta."<<endl;
                    gotoxy(30,15); cout<<"0. Salir"<<endl;
                    }else{
                    gotoxy(30,13); cout<<"3. Modo simulado (Carga de datos manual)"<<endl;
                    gotoxy(30,14); cout<<"0. Salir"<<endl;
                    gotoxy(70,18); cout<<"Nicolas Romero"<<endl;
                    gotoxy(70,19); cout<<"Diego Altamirano"<<endl;
                    }
                    cout<<"\nDigite una opcion: "; cin>>op;

                    system("cls");
                        switch(op){
                        case 1: unJugador(v,3,vn,vcb,ac);
                        cargado=true;
                        ac=1;
                    break;
                        case 2: DosJugadores(v,3,vj1,vj2,vcb,ca);
                        cargado=true;
                        ca=1;
                    break;
                        case 3: menuManual();
                        cargado=true;
                    break;
                        case 4:
                        cargado=true; PAlta(v,1,vn,vj1,vj2,vcb,ac,ca);
                    break;
                        case 0: cout<<"FIN DEL PROGRAMA"<<endl;
                            return 0;
                    break;
                        default: cout<<"Error,Ingrese una opcion valida"<<endl;
                        }


            }
    }





#endif // RESOLUCION_H_INCLUDED
