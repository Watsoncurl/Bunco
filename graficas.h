#ifndef GRAFICAS_H_INCLUDED
#define GRAFICAS_H_INCLUDED
#include "funciones.h"


void titulo();

void noDisponible();

void menuManual();

void impRonda(int ronda, int puntaje, int tiradas, int tfallidas, int cb);

void impRonda2Jug(int ronda, int puntaje1, int puntaje2, int cb, int cb2, int A, char p1[], char p2[]);

void impFinal(int totalp, int cbunco);

void impFinal2Jug(int puntaje1, int puntaje2, int cb1, int cb2,char jugador1[],char jugador2[]);

void Saludo(char N[],int i, int valor, int valores, int bunco, int valoress );

void puntajeTirada(int puntaje);

void gotoxy(int x, int y);

void unJugadorManual();

void DosJugadoresManual();


///---------------------------------------------------------------------------------------------------------------------------------

void titulo(){
        gotoxy(15,1); cout<<"    88888888ba   88        88  888b      88    ,ad8888ba,    ,ad8888ba,    "<<endl;
        gotoxy(15,2); cout<<"    88      ,8b  88        88  8888b     88   d8`'    '8b   d8'     `'8b   "<<endl;
        gotoxy(15,3); cout<<"    88      ,8P  88        88  88 `8b    88  d8'           d8'        `8b  "<<endl;
        gotoxy(15,4); cout<<"    88aaaaaa8P'  88        88  88  `8b   88  88            88          88  "<<endl;
        gotoxy(15,5); cout<<"    88``````8b,  88        88  88   `8b  88  88            88          88  "<<endl;
        gotoxy(15,6); cout<<"    88      `8b  88        88  88    `8b 88  Y8,           Y8,        ,8P  "<<endl;
        gotoxy(15,7); cout<<"    88      a8P  Y8a.    .a8P  88     `8888   Y8a.    .a8P  Y8a.    .a8P   "<<endl;
        gotoxy(15,8); cout<<"    88888888P`    ``Y8888Y``   88      `888    ``Y8888Y``    ``Y8888Y``    "<<endl;

}



    /*system("cls");
                                cout<<""<<endl;

cout<<"___     ___   ____          ________  ____  ____  ________      ____   ___     ______________  ____     __________ "<<endl;
cout<<"`MM\     `M'  6MMMMb         `MMMMMMMb.`MM' 6MMMMb\ `MMMMMMMb.   6MMMMb  `MM\     `M'`MM`MMMMMMMb.`MM'     `MMMMMMMMM "<<endl;
cout<<" MMM\     M  8P    Y8         MM    `Mb MM 6M'    ` MM    `Mb  8P    Y8  MMM\     M  MM MM    `Mb MM       MM      \ "<<endl;
cout<<" M\MM\     M 6M      Mb        MM     MM MM MM       MM     MM 6M      Mb M\MM\     M  MM MM     MM MM       MM        "<<endl;
cout<<" M \MM\    M MM      MM        MM     MM MM YM.      MM     MM MM      MM M \MM\    M  MM MM    .M9 MM       MM    ,   "<<endl;
cout<<" M  \MM\   M MM      MM        MM     MM MM  YMMMMb  MM    .M9 MM      MM M  \MM\   M  MM MMMMMMM(  MM       MMMMMMM   "<<endl;
cout<<" M   \MM\  M MM      MM        MM     MM MM      `Mb MMMMMMM9' MM      MM M   \MM\  M  MM MM    `Mb MM       MM    `   "<<endl;
cout<<" M    \MM\ M MM      MM        MM     MM MM       MM MM        MM      MM M    \MM\ M  MM MM     MM MM       MM        "<<endl;
cout<<" M     \MMM YM      M9        MM     MM MM       MM MM        YM      M9 M     \MMM  MM MM     MM MM       MM        "<<endl;
cout<<" M      \MM  8b    d8         MM    .M9 MM L    ,M9 MM         8b    d8  M      \MM  MM MM    .M9 MM    /  MM      / "<<endl;
cout<<"_M_      \M   YMMMM9         _MMMMMMM9'_MM_MYMMMM9 _MM_         YMMMM9  _M_      \M _MM_MMMMMMM9'_MMMMMMM _MMMMMMMMM "<<endl;


                                cout<<""<<endl;
                                cout<<""<<endl;
                                system("pause");
                                system("cls");*/


void impRonda(int ronda, int puntaje, int tiradas, int tfallidas, int cb) {
	gotoxy(40,2);cout<<"****************************" << endl;
	gotoxy(51,4);cout <<"RONDA: " << ronda << endl;
	gotoxy(40,6);cout <<"****************************" << endl;
	gotoxy(44,8);cout <<"PUNTAJE: " << puntaje << endl;
	gotoxy(44,9);cout <<"BUNCOS: " << cb << endl;
	gotoxy(44,10);cout <<"TIRADAS FALLIDAS: " << tfallidas << endl;
	gotoxy(44,11);cout <<"LANZAMIENTOS: " << tiradas << endl;
	gotoxy(40,13);cout <<"****************************" << endl;
	cin.get();
	system("cls");
}

void impRonda2Jug(int ronda, int puntaje1, int puntaje2, int cb, int cb2, int A, char p1[], char p2[]) {
	gotoxy(40,2);cout <<"****************************" << endl;
	gotoxy(51,4);cout <<"RONDA: " << ronda <<"\n"<< endl;
	if (A==1)
        {
        gotoxy(44,6);cout <<"PROXIMO TURNO: " << p1 <<"\n"<< endl;
        }else
        {
        gotoxy(44,7);cout <<"PROXIMO TURNO: " << p2 <<"\n"<< endl;
        }

	gotoxy(40,9);cout <<"****************************" << endl;
	gotoxy(40,11);cout <<"PUNTAJE "<< p1 <<": " << puntaje1 <<"\n"<< endl;
	gotoxy(40,12);cout <<"BUNCOS: " << cb <<"\n"<< endl;
	gotoxy(40,14);cout <<"----------------------------" << endl;
	gotoxy(40,16);cout <<"PUNTAJE "<< p2 <<": " << puntaje2<< endl;
	gotoxy(40,17);cout <<"BUNCOS: " << cb2 << endl;
	gotoxy(40,19);cout <<"****************************" << endl;
	cin.get();
	system("cls");
}

void impFinal(int totalp, int cbunco) {
	gotoxy(45,8);cout <<"****************************" << endl;
	gotoxy(52,10);cout <<"FIN DEL JUEGO" << endl;
	gotoxy(45,12);cout <<"TOTAL DE PUNTOS: " << totalp << endl;
	gotoxy(45,13);cout <<"TOTAL BUNCOS: " << cbunco << endl;
	gotoxy(45,15);cout <<"****************************" << endl;

	cin.get();
	system("cls");
}

void impFinal2Jug(int puntaje1, int puntaje2, int cb1, int cb2,char jugador1[],char jugador2[]) {
    if ((puntaje1>puntaje2)||(cb1>cb2))
        {
            gotoxy(45,8);cout <<"****************************\n" << endl;
            gotoxy(55,10);cout <<"GANADOR: "<< jugador1 << endl;
            gotoxy(45,12);cout <<"TOTAL DE PUNTOS: " << puntaje1 << endl;
            gotoxy(45,13);cout <<"TOTAL BUNCOS: " << cb1 << endl;
            gotoxy(45,15);cout <<"****************************" << endl;
        }else if ((puntaje2>puntaje1)||(cb2>cb1))
        {
            gotoxy(45,8);cout <<"****************************\n" << endl;
            gotoxy(55,10);cout <<"GANADOR: "<< jugador2  << endl;
            gotoxy(45,12);cout <<"TOTAL DE PUNTOS: " << puntaje2 << endl;
            gotoxy(45,13);cout <<"TOTAL BUNCOS: " << cb2 << endl;
            gotoxy(45,15);cout <<"****************************" << endl;
        }else
        {
            gotoxy(45,8);cout <<"****************************" << endl;
            gotoxy(55,10);cout <<"EMPATE" << endl;
            gotoxy(45,12);cout <<"TOTAL DE PUNTOS: " << puntaje1 << endl;
            gotoxy(45,13);cout <<"TOTAL BUNCOS: " << cb1 << endl;
            gotoxy(45,14);cout <<"TOTAL DE PUNTOS: " << puntaje2  << endl;
            gotoxy(45,15);cout <<"TOTAL BUNCOS: " << cb2 << endl;
            gotoxy(45,17);cout <<"****************************" << endl;
        }
	cin.get();
	system("cls");
}

void Saludo(char N[],int i, int valor, int valores, int bunco, int valoress ){
        int puntajefinal=valor,cb=bunco,tiros=valores,puntajeparcial=valoress;
        cout<<"Turno de: "<<N<<" |"<<"\t"<<"Ronda Numero: "<<i<<" |"<<"\t"<<"El puntaje acumulado es: "<<puntajefinal<<" |"<<"\t Puntaje de la ronda: "<<puntajeparcial<<endl;
        cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Veces que obtuvo Bunco: "<<cb<<endl;
        cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Lanzamiento Numero: "<<tiros<<endl;
        cout<<"---------------------------------------------------------------------------------------------------------------"<<"\n"<<endl;

}

void puntajeTirada(int puntaje){
            gotoxy(2,18); cout<<"**************************"<<endl;
            gotoxy(2,19); cout<<"|PUNTAJE DE LA TIRADA: "<<puntaje<<" |"<<endl;
            gotoxy(2,20); cout<<"**************************"<<endl;

}

void dado1(int dados[]){
    switch(dados[0]){
            case 1: gotoxy(5,11); cout << "|-----------|" << endl;
                    gotoxy(5,12); cout << "|           |" << endl;
                    gotoxy(5,13); cout << "|     *     |" << endl;
                    gotoxy(5,14); cout << "|           |" << endl;
                    gotoxy(5,15); cout << "|-----------|" << endl;
                    break;
            case 2: gotoxy(5,11); cout << "|-----------|" << endl;
                    gotoxy(5,12); cout << "| *         |" << endl;
                    gotoxy(5,13); cout << "|           |" << endl;
                    gotoxy(5,14); cout << "|         * |" << endl;
                    gotoxy(5,15); cout << "|-----------|" << endl;
                    break;
            case 3: gotoxy(5,11); cout << "|-----------|" << endl;
                    gotoxy(5,12); cout << "| *         |" << endl;
                    gotoxy(5,13); cout << "|     *     |" << endl;
                    gotoxy(5,14); cout << "|         * |" << endl;
                    gotoxy(5,15); cout << "|-----------|" << endl;
                    break;
            case 4: gotoxy(5,11); cout << "|-----------|" << endl;
                    gotoxy(5,12); cout << "| *       * |" << endl;
                    gotoxy(5,13); cout << "|           |" << endl;
                    gotoxy(5,14); cout << "| *       * |" << endl;
                    gotoxy(5,15); cout << "|-----------|" << endl;
                    break;
            case 5: gotoxy(5,11); cout << "|-----------|" << endl;
                    gotoxy(5,12); cout << "| *       * |" << endl;
                    gotoxy(5,13); cout << "|     *     |" << endl;
                    gotoxy(5,14); cout << "| *       * |" << endl;
                    gotoxy(5,15); cout << "|-----------|" << endl;
                    break;
            case 6: gotoxy(5,11); cout << "|-----------|" << endl;
                    gotoxy(5,12); cout << "| *       * |" << endl;
                    gotoxy(5,13); cout << "| *       * |" << endl;
                    gotoxy(5,14); cout << "| *       * |" << endl;
                    gotoxy(5,15); cout << "|-----------|" << endl;
                    break;
            }
}

void dado2(int dados[]){
    switch(dados[1]){
            case 1: gotoxy(20,11); cout << "|-----------|" << endl;
                    gotoxy(20,12); cout << "|           |" << endl;
                    gotoxy(20,13); cout << "|     *     |" << endl;
                    gotoxy(20,14); cout << "|           |" << endl;
                    gotoxy(20,15); cout << "|-----------|" << endl;
                    break;
            case 2: gotoxy(20,11); cout << "|-----------|" << endl;
                    gotoxy(20,12); cout << "| *         |" << endl;
                    gotoxy(20,13); cout << "|           |" << endl;
                    gotoxy(20,14); cout << "|         * |" << endl;
                    gotoxy(20,15); cout << "|-----------|" << endl;
                    break;
            case 3: gotoxy(20,11); cout << "|-----------|" << endl;
                    gotoxy(20,12); cout << "| *         |" << endl;
                    gotoxy(20,13); cout << "|     *     |" << endl;
                    gotoxy(20,14); cout << "|         * |" << endl;
                    gotoxy(20,15); cout << "|-----------|" << endl;
                    break;
            case 4: gotoxy(20,11); cout << "|-----------|" << endl;
                    gotoxy(20,12); cout << "| *       * |" << endl;
                    gotoxy(20,13); cout << "|           |" << endl;
                    gotoxy(20,14); cout << "| *       * |" << endl;
                    gotoxy(20,15); cout << "|-----------|" << endl;
                    break;
            case 5: gotoxy(20,11); cout << "|-----------|" << endl;
                    gotoxy(20,12); cout << "| *       * |" << endl;
                    gotoxy(20,13); cout << "|     *     |" << endl;
                    gotoxy(20,14); cout << "| *       * |" << endl;
                    gotoxy(20,15); cout << "|-----------|" << endl;
                    break;
            case 6: gotoxy(20,11); cout << "|-----------|" << endl;
                    gotoxy(20,12); cout << "| *       * |" << endl;
                    gotoxy(20,13); cout << "| *       * |" << endl;
                    gotoxy(20,14); cout << "| *       * |" << endl;
                    gotoxy(20,15); cout << "|-----------|" << endl;
                    break;
            }
}

void dado3(int dados[]){
    switch(dados[2]){
            case 1: gotoxy(35,11); cout << "|-----------|" << endl;
                    gotoxy(35,12); cout << "|           |" << endl;
                    gotoxy(35,13); cout << "|     *     |" << endl;
                    gotoxy(35,14); cout << "|           |" << endl;
                    gotoxy(35,15); cout << "|-----------|" << endl;
                    break;
            case 2: gotoxy(35,11); cout << "|-----------|" << endl;
                    gotoxy(35,12); cout << "| *         |" << endl;
                    gotoxy(35,13); cout << "|           |" << endl;
                    gotoxy(35,14); cout << "|         * |" << endl;
                    gotoxy(35,15); cout << "|-----------|" << endl;
                    break;
            case 3: gotoxy(35,11); cout << "|-----------|" << endl;
                    gotoxy(35,12); cout << "| *         |" << endl;
                    gotoxy(35,13); cout << "|     *     |" << endl;
                    gotoxy(35,14); cout << "|         * |" << endl;
                    gotoxy(35,15); cout << "|-----------|" << endl;
                    break;
            case 4: gotoxy(35,11); cout << "|-----------|" << endl;
                    gotoxy(35,12); cout << "| *       * |" << endl;
                    gotoxy(35,13); cout << "|           |" << endl;
                    gotoxy(35,14); cout << "| *       * |" << endl;
                    gotoxy(35,15); cout << "|-----------|" << endl;
                    break;
            case 5: gotoxy(35,11); cout << "|-----------|" << endl;
                    gotoxy(35,12); cout << "| *       * |" << endl;
                    gotoxy(35,13); cout << "|     *     |" << endl;
                    gotoxy(35,14); cout << "| *       * |" << endl;
                    gotoxy(35,15); cout << "|-----------|" << endl;
                    break;
            case 6: gotoxy(35,11); cout << "|-----------|" << endl;
                    gotoxy(35,1); cout << "| *       * |" << endl;
                    gotoxy(35,12); cout << "| *       * |" << endl;
                    gotoxy(35,13); cout << "| *       * |" << endl;
                    gotoxy(35,14); cout << "|-----------|" << endl;
                    break;
            }
}

void jugada(int puntaje,bool escalera){
    switch(puntaje){
            case 1: gotoxy(60,11); cout << "+-+-+-+-+-+-+ +-+-+-+-+-+-+" << endl;
                    gotoxy(60,12); cout << "|J|U|G|A|D|A| |S|I|M|P|L|E|" << endl;
                    gotoxy(60,13); cout << "+-+-+-+-+-+-+ +-+-+-+-+-+-+" << endl;
                    break;
            case 2 :if (escalera==true) {
                        gotoxy(60,11); cout << "+-+-+-+-+-+-+-+-+" << endl;
                        gotoxy(60,12); cout << "|E|S|C|A|L|E|R|A|" << endl;
                        gotoxy(60,13); cout << "+-+-+-+-+-+-+-+-+" << endl;
                    }else {
                        gotoxy(60,11); cout << "+-+-+-+-+-+-+ +-+-+-+-+-+" << endl;
                        gotoxy(60,12); cout << "|J|U|G|A|D|A| |D|O|B|L|E|" << endl;
                        gotoxy(60,13); cout << "+-+-+-+-+-+-+ +-+-+-+-+-+" << endl;
                    }
                    break;


            case 3: gotoxy(60,11); cout << "+-+-+-+-+-+-+-+-+-+ +-+-+-+ +-+-+-+-+-+" << endl;
                    gotoxy(60,12); cout << "|D|I|V|I|S|I|B|L|E| |P|O|R| |C|I|N|C|O|" << endl;
                    gotoxy(60,13); cout << "+-+-+-+-+-+-+-+-+-+ +-+-+-+ +-+-+-+-+-+" << endl;
                    break;
            case 5: gotoxy(60,11); cout << "+-+-+-+-+ +-+-+-+-+-+-+-+" << endl;
                    gotoxy(60,12); cout << "|T|R|E|S| |I|G|U|A|L|E|S|" << endl;
                    gotoxy(60,13); cout << "+-+-+-+-+ +-+-+-+-+-+-+-+" << endl;
                    break;
            case 21:gotoxy(60,11); cout << "+-+-+-++-++-+-+-+-+-+-+" << endl;
                    gotoxy(60,12); cout << "|*|B|*|U|*|N|*|C|*|O|*|" << endl;
                    gotoxy(60,13); cout << "+-+-+-+-+-+-+-+-+-+-+-+" << endl;
                    break;
            case 0: gotoxy(60,11); cout << "+-+-+-+-+-+-+ +-+-+-+-+-+-+-+" << endl;
                    gotoxy(60,12); cout << "|T|I|R|A|D|A| |F|A|L|L|I|D|A|" << endl;
                    gotoxy(60,13); cout << "+-+-+-+-+-+-+ +-+-+-+-+-+-+-+" << endl;
                    break;
            }
}

void menuManual(){
    gotoxy(15,0); cout<<"___       ___      _     ___     ______     ___      _     ____     "<<endl;
    gotoxy(15,1); cout<<"`MMb     dMM'     dM.    `MM\     `M`MM'     `M'     dM.    `MM'     "<<endl;
    gotoxy(15,2); cout<<" MMM.   ,PMM     ,MMb     MMM\     M MM       M     ,MMb     MM      "<<endl;
    gotoxy(15,3); cout<<" M`Mb   d'MM     d'YM.    M\MM\     M MM       M     d'YM.    MM      "<<endl;
    gotoxy(15,4); cout<<" M YM. ,P MM    ,P `Mb    M \MM\    M MM       M    ,P `Mb    MM      "<<endl;
    gotoxy(15,5); cout<<" M `Mb d' MM    d'  YM.   M  \MM\   M MM       M    d'  YM.   MM      "<<endl;
    gotoxy(15,6); cout<<" M  YM.P  MM   ,P   `Mb   M   \MM\  M MM       M   ,P   `Mb   MM      "<<endl;
    gotoxy(15,7); cout<<" M  `Mb'  MM   d'    YM.  M    \MM\ M MM       M   d'    YM.  MM      "<<endl;
    gotoxy(15,8); cout<<" M   YP   MM  ,MMMMMMMMb  M     \MMM YM       M  ,MMMMMMMMb  MM      "<<endl;
    gotoxy(15,9); cout<<" M   `'   MM  d'      YM. M      \MM  8b     d8  d'      YM. MM    / "<<endl;
    gotoxy(15,10); cout<<"_M_      _MM_dM_     _dMM_M_      \M   YMMMMM9 _dM_     _dMM_MMMMMMM "<<endl;




    gotoxy(30,13); cout<<"1. Modo un jugador"<<endl;
    gotoxy(30,14); cout<<"2. Modo dos jugadores."<<endl;
    gotoxy(30,15); cout<<"0. Salir"<<endl;

    int op;
        cout<<"\nDigite una opcion: "; cin>>op;
                    system("cls");
                        switch(op){
                        case 1: unJugadorManual();
                                break;
                        case 2: DosJugadoresManual();
                                break;
                        case 0:
                                break;
                        default: cout<<"Error,Ingrese una opcion valida"<<endl;
                        }

}

void puntajeMax(){
gotoxy(5,0);cout<<"  "<<endl;
gotoxy(5,1); cout<<"#    #   ##   #   #  ####  #####  ######  ####     #####  #    # #    # #####   ##        # ######  ####  "<<endl;
gotoxy(5,2); cout<<"##  ##  #  #   # #  #    # #    # #      #         #    # #    # ##   #   #    #  #       # #      #      "<<endl;
gotoxy(5,3); cout<<"# ## # #    #   #   #    # #    # #####   ####     #    # #    # # #  #   #   #    #      # #####   ####  "<<endl;
gotoxy(5,4); cout<<"#    # ######   #   #    # #####  #           #    #####  #    # #  # #   #   ######      # #           # "<<endl;
gotoxy(5,5); cout<<"#    # #    #   #   #    # #   #  #      #    #    #      #    # #   ##   #   #    # #    # #      #    # "<<endl;
gotoxy(5,6); cout<<"#    # #    #   #    ####  #    # ######  ####     #       ####  #    #   #   #    #  ####  ######  ####  "<<endl;
gotoxy(5,7); cout<<"  "<<endl;
}
#endif // GRAFICAS_H_INCLUDED
