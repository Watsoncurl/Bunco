#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "graficas.h"

//int contarNumerosRepetidos(int v[], int tam , int numero);///cuenta la cantidad de veces que se repite un //número en el vector

//int NumerosRepetidos(int[], int tam); /// Verifico cuantas veces se repite cada numero del vector

void lanzar(int dados[], int tam); /// carga un vector con valores aleatorios

void cargarVector(int v[], int tam);/// asigna valores a cada una de las posiciones del vector

void mostrarVector(int v[], int tam);/// muestra lo que contiene cada una de las posiciones del vector

void cargarAleatorio(int v[], int tam, int limite);///asigna valores aleatorios a cada al vector

void ordenarVector(int v[], int tam );/// ordena de menor a mayor un vector

void gotoxy(int x, int y);

void unJugadorManual();

void DosJugadoresManual();

///-------------------------------------------------------------------------------------------------------
void gotoxy(int x, int y){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD dvPos;
    dvPos.X = x;
    dvPos.Y = y;
    SetConsoleCursorPosition(hCon,dvPos);

}

int DadosIguales(int v[],int tam){
    int t=0;
    if(v[0] == v[1] && v[1] == v[2]){
        t++;
    }
    return t;
}
//Funciones para las reglas del juego
///Calculo Puntos 1
int CadaDadoCoincidenciaConRonda(int v[], int tam, int i){
    int x,puntaje=0;

    for(x=0;x<=2;x++){
        if(v[x]==i){
            puntaje+=1;
        }
    }
    return puntaje;

}
///Calculos Puntos 2
int DadosEscalera(int v[],int tam, bool escalera){
    int puntaje=0;
    ordenarVector(v,3);
        if((v[2]-v[1])==1){
            if(v[1]-v[0]==1){
                puntaje=2;
                escalera=true;
            }
    }
    return puntaje;
}
///Calculos Puntos 3
int  NumeroDivisible(int v[],int tam){
    int puntaje=0;
        if((v[0]+v[1]+v[2]) % 5 == 0){
                    puntaje=3;
                }
       return puntaje;
    }
///Calculos Puntos 4
int DadosIgualesPeroNoRonda(int v[],int tam,int i){
    int x,puntaje=0,t;
        t = DadosIguales(v,3);
        if(t == 1){
            for(x=0;x<=2;x++){
               if(v[x]!=i){
                puntaje=5;
               }
        }
    }
        return puntaje;
}
///Calculos Puntos 5

int DadosCoincideConRonda(int v[],int tam,int i){
    int x,c=0;
    for(x=0;x<=2;x++){
        if(v[x]==i){
            c++;
        }
    }
    if (c==3)
    return 21;

    return 0;
}
///-------------------------------------------------------------------------------------------------------

void lanzar(int dados[], int tam)
{
	int  j;
	srand(time(NULL));
	cout << "Presione para lanzar" << endl;
	cin.get();
	for (j = 0; j <= 2; j++) {
		dados[j] = 1 + (rand() % 6);
	}
}

void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}



void NumerosRepetidos(int v[], int tam){
    int i,c,x;

    for(i=0; i<tam; i++){
        c = 0;
        for(x=0; x<tam; x++){
            if(v[i] == v[x]){
                c++;
            }
        }
        cout<<"\n""El numero: "<<v[i]<<" Se repite: "<<c<<" veces"<<endl;
    }
}

int CompararMaximo(int vm[], int tam){
        int i,vmax = vm[0];
        for(i=0;i<=4;i++){
           if(vm[i] > vmax){
            vmax = vm[i];
           }
        }

    return vmax;
}

void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
  }
}

void mostrarVector(int v[], int tam){
    int i,c=1;
    for(i=0;i<tam;i++){
        cout<<"Valor del dado "<<c++<<" Es: "<<v[i]<<"\n"<<endl;
    }
}


void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"INGRESE NUMERO: ";
        cin>>v[i];
    }
}

void CalcularMod1(int v[],int tam,char vn[],int buncos[],int valor){
         int may=0;
         if(valor==1){
    if(v[0]>=may){
        may = v[0];
        gotoxy(20,9);cout<<"~~MODO UN JUGADOR~~"<<endl;
        gotoxy(15,10);cout<<" "<<endl;
        gotoxy(15,11);cout<<" Nombre: "<<vn<<endl;
        gotoxy(15,12);cout<<" Puntaje: "<<may<<endl;
        gotoxy(15,13);cout<<" Cantidad de buncos: "<<buncos[0]<<endl;

     }

}
     else{
    gotoxy(15,11);cout<<"No se encontro ningun dato"<<endl;
     }
}

void CalcularMod2(int v[],int tam,char nombre1[], char nombre2[], int buncos[],int valores){
    int may2 = 0;
    if(valores==1){
    gotoxy(75,9);cout<<"~~MODO DOS JUGADOR~~"<<endl;
    if(v[1] < v[2]){
            may2 = v[2];
        gotoxy(70,10);cout<<" "<<endl;
        gotoxy(70,11);cout<<" Nombre: "<<nombre2<<endl;
        gotoxy(70,12);cout<<" Puntaje: "<<may2<<endl;
        gotoxy(70,13);cout<<" Cantidad de buncos: "<<buncos[2]<<endl;
        }
    else{
         may2 = v[1];
        gotoxy(70,10);cout<<" "<<endl;
        gotoxy(70,11);cout<<" Nombre: "<<nombre1<<endl;
        gotoxy(70,12);cout<<" Puntaje: "<<may2<<endl;
        gotoxy(70,13);cout<<" Cantidad de buncos: "<<buncos[1]<<endl;
        }

    }
    else{
    gotoxy(70,10);cout<<"No se registro datos"<<endl;
    }
}

///MOSTRAR PUNTUACION ALTA

void PuntuacionAlta(int v[],int tam,char vn[],char vj1[],char vj2[],int vcb[],int ac,int ca){
    int op;
                    gotoxy(30,8); cout<<"A continuacion ingrese la puntuacion del modo a su preferencia"<<endl;
                    gotoxy(30,11);cout<<"1. Puntuacion Alta del Modo jugador"<<endl;
                    gotoxy(30,12);cout<<"2. Puntuacion Alta del Modo dos jugadores"<<endl;
                    gotoxy(30,13);cin>>op;
    switch(op){
        case 1: CalcularMod1(v,3,vn,vcb,ac);
        break;
        case 2: CalcularMod2(v,3,vj1,vj2,vcb,ca);
        break;
        default: cout<<"Ingrese una opcion correcta"<<endl;
    }

}

///MODO 1 JUGADOR (ALEATORIO)
void unJugador(int v[],int tam,char vn[],int vcb[],int valor){
        int ronda,tiros,puntaje,puntajefinal=0,vm[5],tf=0,ctf=0,resultadofinal=0,cb=0,puntajeparcial=0, Dados[3],PMax;
        char nombre[50];
        bool escalera=false;
        system("cls");
        valor = 1;
        gotoxy(2,2); cout<<"*********************************"<<endl;
        gotoxy(2,3); cout<<"|INGRESE EL NOMBRE DEL JUGADOR: |"<<endl;
        gotoxy(2,4); cout<<"*********************************"<<endl;
        gotoxy(2,5); cin>>nombre;

        system("cls");

        for(ronda=1;ronda<=2;ronda++){
         tiros=0;
         puntaje=0;
        while(puntajeparcial<21){
            tiros++;
            Saludo(nombre,ronda,puntajefinal,tiros,cb,puntajeparcial); //Interfaz de ronda
            cargarVector(Dados,3);
            //lanzar(Dados,3);
            dado1(Dados);
            dado2(Dados);
            dado3(Dados);

           cin.get();

            ///Puntos 1
            puntaje = CadaDadoCoincidenciaConRonda(Dados,3,ronda);
            vm[0] = puntaje;

            ///Puntos 2
            puntaje = DadosEscalera(Dados,3,ronda);
            escalera = DadosEscalera(Dados,3,escalera);
            vm[1] = puntaje;

            ///Puntos 3
            puntaje = NumeroDivisible(Dados,3);
            vm[2] = puntaje;


            ///Puntos 4
            puntaje = DadosIgualesPeroNoRonda(Dados,3,ronda);
            vm[3] = puntaje;


            ///Puntos 5
            puntaje = DadosCoincideConRonda(Dados,3,ronda);
            vm[4] = puntaje;

            if(vm[4]==21){
                cb++;
            }

            puntaje = CompararMaximo(vm,5);

            if(puntaje == 0){
                tf+=2;
                ctf++;
            }

            jugada(puntaje, escalera);
            puntajeTirada(puntaje);

                puntajeparcial+=puntaje;
                puntajefinal+=puntaje;
                escalera=false;
                cin.get();
                system("cls");
        }
            impRonda(ronda, puntajeparcial, tiros, ctf, cb);
            puntajeparcial=0;
    }
    impFinal(puntajefinal,cb);

    if (puntajefinal>v[0]){v[0] = puntajefinal; strcpy(vn,nombre); vcb[0] = cb;}
}




///MODO 2 JUGADORES
void DosJugadores(int v[], int tam, char vj1[],char vj2[], int vcb[],int valores) {
    int a = 1, c = 0, lanzamiento1 = 0, lanzamiento2 = 0, r1 = 1, r2 = 1, vjug1 = 0, vjug2 = 0, tf = 0, tf2 = 0;
    int dados[3], vm[5], puntaje, cb=0, cb2=0, puntajefinal=0, puntajefinal2=0, ctf=0 ;
    bool escalera=false;
    char nombre1[50], nombre2[50];
    valores=1;
    gotoxy(2,2); cout<<"***********************************"<<endl;
    gotoxy(2,3); cout<<"|INGRESE EL NOMBRE DEL JUGADOR 1: |"<<endl;
    gotoxy(2,4); cout<<"***********************************"<<endl;
    gotoxy(2,5); cin>> nombre1;

    system("cls");

    gotoxy(2,2); cout<<"***********************************"<<endl;
    gotoxy(2,3); cout<<"|INGRESE EL NOMBRE DEL JUGADOR 2: |"<<endl;
    gotoxy(2,4); cout<<"***********************************"<<endl;
    gotoxy(2,5); cin>> nombre2;

	while (c<2) {
            system("cls");
		if (a==1) {
		    lanzamiento1 = 0;
			while ((vjug1<21) && (tf==0)) {

				lanzamiento1++;

				Saludo(nombre1,r1,puntajefinal,lanzamiento1,cb,vjug1);
                cargarVector(dados,3);
				//lanzar(dados,3);
				dado1(dados);
                dado2(dados);
                dado3(dados);

                cin.get();

                ///Puntos 1
                puntaje = CadaDadoCoincidenciaConRonda(dados,3,r1);
                vm[0] = puntaje;

                ///Puntos 2
                puntaje = DadosEscalera(dados,3,escalera);
                escalera = DadosEscalera(dados,3,escalera);
                vm[1] = puntaje;

                ///Puntos 3
                puntaje = NumeroDivisible(dados,3);
                vm[2] = puntaje;

                ///Puntos 4
                puntaje = DadosIgualesPeroNoRonda(dados,3,r1);
                vm[3] = puntaje;

                ///Puntos 5
                puntaje = DadosCoincideConRonda(dados,3,r1);
                vm[4] = puntaje;

                if(vm[4]==21){
                    cb++;
                }
                puntaje = CompararMaximo(vm,5);

                if(puntaje == 0){
                    tf=1;
                    ctf++;
                }

                jugada(puntaje,escalera);
                puntajeTirada(puntaje);

                vjug1+=puntaje;
                puntajefinal+=puntaje;
                escalera=false;
                cin.get();
                system("cls");


			}
			c = c+1;
			r1 = r1+1;
			vjug2 = 0;
			tf2 = 0;
			a = 2;
		} else {
		    lanzamiento2 = 0;
			while ((vjug2<21) && (tf2==0)) {

				lanzamiento2++;

				Saludo(nombre2,r2,puntajefinal2,lanzamiento2,cb2,vjug2);
                cargarVector(dados,3);
				//lanzar(dados,3);
                dado1(dados);
                dado2(dados);
                dado3(dados);

                cin.get();

                     ///Puntos 1
                puntaje = CadaDadoCoincidenciaConRonda(dados,3,r2);
                vm[0] = puntaje;

                ///Puntos 2
                puntaje = DadosEscalera(dados,3,escalera);
                escalera = DadosEscalera(dados,3,escalera);
                vm[1] = puntaje;

                ///Puntos 3
                puntaje = NumeroDivisible(dados,3);
                vm[2] = puntaje;

                ///Puntos 4
                puntaje = DadosIgualesPeroNoRonda(dados,3,r2);
                vm[3] = puntaje;

                ///Puntos 5
                puntaje = DadosCoincideConRonda(dados,3,r2);
                vm[4] = puntaje;
                if(vm[4]==21){
                    cb2++;
                }

                puntaje = CompararMaximo(vm,5);

                if(puntaje == 0){
                    tf2=1;
                    ctf++;
                }

                jugada(puntaje,escalera);
                puntajeTirada(puntaje);

                vjug2+=puntaje;
                puntajefinal2+=puntaje;
                escalera=false;
                cin.get();
                system("cls");


			}

			c = c+1;
			r2 = r2+1;
			vjug1 = 0;
			tf = 0;
			a = 1;
		}
        if(r2<=6){impRonda2Jug( r2, puntajefinal, puntajefinal2, cb, cb2, a, nombre1 , nombre2 );}


	}
	impFinal2Jug(puntajefinal,puntajefinal2,cb,cb2,nombre1,nombre2);
	if (puntajefinal>v[1]){v[1] = puntajefinal; strcpy(vj1,nombre1); vcb[1] = cb;}
    //v[1] = puntajefinal;
    if (puntajefinal2>v[2]){v[2] = puntajefinal2; strcpy(vj2,nombre2); vcb[2] = cb2;}
    //v[2] = puntajefinal2;
}
///MODO 1 JUGADOR MANUAL (DEL MODO SIMULADO)
void unJugadorManual(){
        int ronda,tiros,puntaje,puntajefinal=0,vm[5],tf=0,ctf=0,resultadofinal=0,cb=0,puntajeparcial=0, Dados[3];
        char nombre[50];
        bool escalera=false;
        system("cls");

        gotoxy(2,2); cout<<"*********************************"<<endl;
        gotoxy(2,3); cout<<"|INGRESE EL NOMBRE DEL JUGADOR: |"<<endl;
        gotoxy(2,4); cout<<"*********************************"<<endl;
        gotoxy(2,5); cin>>nombre;

        system("cls");

        for(ronda=1;ronda<=2;ronda++){
         tiros=0;
         puntaje=0;
        while(puntajeparcial<21){
            tiros++;
            Saludo(nombre,ronda,puntajefinal,tiros,cb,puntajeparcial); //Interfaz de ronda
            cargarVector(Dados, 3);
            dado1(Dados);
            dado2(Dados);
            dado3(Dados);

            cin.get();

            ///Puntos 1
            puntaje = CadaDadoCoincidenciaConRonda(Dados,3,ronda);
            vm[0] = puntaje;

            ///Puntos 2
            puntaje = DadosEscalera(Dados,3,escalera);
            escalera = DadosEscalera(Dados,3,escalera);
            vm[1] = puntaje;

            ///Puntos 3
            puntaje = NumeroDivisible(Dados,3);
            vm[2] = puntaje;


            ///Puntos 4
            puntaje = DadosIgualesPeroNoRonda(Dados,3,ronda);
            vm[3] = puntaje;


            ///Puntos 5
            puntaje = DadosCoincideConRonda(Dados,3,ronda);
            vm[4] = puntaje;

            if(vm[4]==21){
                cb++;
            }

            puntaje = CompararMaximo(vm,5);

            if(puntaje == 0){
                tf+=2;
                ctf++;
            }

            jugada(puntaje, escalera);
            puntajeTirada(puntaje);

                puntajeparcial+=puntaje;
                puntajefinal+=puntaje;
                escalera=false;
                cin.get();
                system("cls");
        }
            impRonda(ronda, puntajeparcial, tiros, ctf, cb);
            puntajeparcial=0;
    }
    impFinal(puntajefinal, cb);

}
///MODO 2 JUGADORES MANUAL (DEL MODO SIMULADO)
void DosJugadoresManual() {
    int a = 1, c = 0, lanzamiento1 = 0, lanzamiento2 = 0, r1 = 1, r2 = 1, vjug1 = 0, vjug2 = 0, tf = 0, tf2 = 0;
    int dados[3], vm[5], puntaje, cb=0, cb2=0, puntajefinal=0, puntajefinal2=0, ctf=0 ;
    bool escalera=false;
    char nombre[50], nombre2[50];

    gotoxy(2,2); cout<<"***********************************"<<endl;
    gotoxy(2,3); cout<<"|INGRESE EL NOMBRE DEL JUGADOR 1: |"<<endl;
    gotoxy(2,4); cout<<"***********************************"<<endl;
    gotoxy(2,5); cin>> nombre;

    system("cls");

    gotoxy(2,2); cout<<"***********************************"<<endl;
    gotoxy(2,3); cout<<"|INGRESE EL NOMBRE DEL JUGADOR 2: |"<<endl;
    gotoxy(2,4); cout<<"***********************************"<<endl;
    gotoxy(2,5); cin>> nombre2;

	while (c<12) {
            system("cls");
		if (a==1) {
		    lanzamiento1 = 0;
			while ((vjug1<21) && (tf==0)) {

				lanzamiento1++;

				Saludo(nombre,r1,puntajefinal,lanzamiento1,cb,vjug1);
                cargarVector(dados,3);
				//lanzar(dados, 3);
				dado1(dados);
                dado2(dados);
                dado3(dados);

                cin.get();

                ///Puntos 1
                puntaje = CadaDadoCoincidenciaConRonda(dados,3,r1);
                vm[0] = puntaje;

                ///Puntos 2
                puntaje = DadosEscalera(dados,3,escalera);
                escalera = DadosEscalera(dados,3,escalera);
                vm[1] = puntaje;

                ///Puntos 3
                puntaje = NumeroDivisible(dados,3);
                vm[2] = puntaje;

                ///Puntos 4
                puntaje = DadosIgualesPeroNoRonda(dados,3,r1);
                vm[3] = puntaje;

                ///Puntos 5
                puntaje = DadosCoincideConRonda(dados,3,r1);
                vm[4] = puntaje;
                if(vm[4]==21){
                    cb++;
                }

                puntaje = CompararMaximo(vm,5);

                if(puntaje == 0){
                    tf=1;
                    ctf++;
                }

                jugada(puntaje,escalera);
                puntajeTirada(puntaje);

                vjug1+=puntaje;
                puntajefinal+=puntaje;
                escalera=false;
                cin.get();
                system("cls");


			}
			c = c+1;
			r1 = r1+1;
			vjug2 = 0;
			tf2 = 0;
			a = 2;
		} else {
		    lanzamiento2 = 0;
			while ((vjug2<21) && (tf2==0)) {

				lanzamiento2++;

				Saludo(nombre2,r2,puntajefinal2,lanzamiento2,cb2,vjug2);
                cargarVector(dados,3);
				//lanzar(dados, 3);
                dado1(dados);
                dado2(dados);
                dado3(dados);

                cin.get();

                ///Puntos 1
                puntaje = CadaDadoCoincidenciaConRonda(dados,3,r2);
                vm[0] = puntaje;

                ///Puntos 2
                puntaje = DadosEscalera(dados,3,escalera);
                escalera = DadosEscalera(dados,3,escalera);
                vm[1] = puntaje;

                ///Puntos 3
                puntaje = NumeroDivisible(dados,3);
                vm[2] = puntaje;

                ///Puntos 4
                puntaje = DadosIgualesPeroNoRonda(dados,3,r2);
                vm[3] = puntaje;

                ///Puntos 5
                puntaje = DadosCoincideConRonda(dados,3,r2);
                vm[4] = puntaje;
                if(vm[4]==21){
                    cb2++;
                }

                puntaje = CompararMaximo(vm,5);

                if(puntaje == 0){
                    tf2=1;
                    ctf++;
                }

                jugada(puntaje,escalera);
                puntajeTirada(puntaje);
                vjug2+=puntaje;
                puntajefinal2+=puntaje;
                escalera=false;
                cin.get();
                system("cls");


			}

			c = c+1;
			r2 = r2+1;
			vjug1 = 0;
			tf = 0;
			a = 1;
		}
        if(r2<=6){impRonda2Jug( r2, puntajefinal, puntajefinal2, cb, cb2, a, nombre, nombre2);}


	}
	impFinal2Jug(puntajefinal,puntajefinal2,cb,cb2,nombre,nombre2);
}

void PAlta(int v[],int tam,char vn[],char vj1[],char vj2[],int vcb[],int valor,int valores){
        puntajeMax();
        CalcularMod1(v,3,vn,vcb,valor);
        CalcularMod2(v,3,vj1,vj2,vcb,valores);
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        system("pause>pa");
        system("cls");

}





#endif // FUNCIONES_H_INCLUDED
