#include <iostream>
#include <unistd.h>
#include <cmath>
#include <iomanip>

using namespace std;

void groupI(int day, int month, int year) {
  char c;
  cout << u8"\033[2J\033[1;1H";
  cout << "#### GRUPO I ####" << endl;
  cout << "1 - Existem 3 tipos de pavimentacoes regulares:\n" << "\tx Com triangulos equilatros \n\tx Com Quadrados \n\tx Com hexagonos regulares\n" << endl;
  cout << "2 - o grupo das isometrias e constituido por rotacoes, translacoes, reflexoes e...\n\tx reflexoes deslizantes\n" << endl;
  cout << "3 - Um friso é um desenho que se obtem por\n" << endl;
  cout << "4 - Uma embalagem tem as seguintes dimensoes (em centimetros): comprimento m+d; largura d e altura m. Calcule o Volume.\n\t" << (month+day)*day*month << " cm³\n" << endl;
  cout << "5 - Uma embalagem tem as seguintes dimensoes (em centimetros): comprimento d; largura d+m e altura m. Calcule o Volume.\n\t" << day*(month+day)*month << " cm³\n" << endl;
  cout << "\'n\' para continuar";
  cin >> c;
}

void groupII(int day, int month, int year) {
  char c;
  cout << u8"\033[2J\033[1;1H";
  cout << "#### GRUPO II ####" << endl;
  cout << "1 - Os pontos A, B, C e D definem um:\n" << "\tx Quadrado\n" << endl;
  cout << "2 - O perimetro do poligono definido pelos pontos A, B, C e D e:\n\t" << hypot(month, month) << " cm\n" << endl;
  cout << "3 - A area do poligono definido pelos pontos A, B, c e D e:\n\t" << hypot(month, month)*4 << " cm²\n" << endl;
  cout << "4 - Os pontos A e C sao:\n\t" << "x Simetricos em relacoa ao eixo Oy\n" << endl;
  cout << "5 - Determina o ponto medio do segmento de reta [EF]:\n\t" << "M(" << float (day+month)/2 << "," << float (day+month)/2 << ")\n" << endl;
  cout << "\'n\' para continuar";
  cin >> c;
}

void groupIII(int day, int month, int year) {
  char c;
  cout << u8"\033[2J\033[1;1H";
  cout << "#### GRUPO III ####" << endl;
  cout << "1 - A area total do cubo:\n\t";
  float pergunta1 = (month*month*month);
  printf("%.2lf", pergunta1);
  cout << " cm²\n" << endl;
  cout << "2 - O comprimento do segmento de reta [AC]:\n\t" << setprecision(3) << hypot(month, month) << " cm\n" << endl;
  cout << "3 - O comprimento do segmento de reta [AG]:\n\t" << setprecision(3) << hypot(hypot(month, month),month) << " cm\n" << endl;
  cout << "4 - A soma do comprimento das arestas do cubo:\n\t" << month*12 << " cm\n" << endl;
  cout << "5 - O volume do cubo:\n\t" << month*month*month << " cm\n" << endl;
  cout << "\'n\' para continuar";
  cin >> c;
}

void groupIV(int day, int month, int year) {
  char c;
  cout << u8"\033[2J\033[1;1H";
  cout << "#### GRUPO IV ####" << endl;
  cout << "1 - O declive da reta y=mx+d:\n\t" << month << endl << endl;
  cout << "2 - A ordenada na origem da reta y=mx+d" << day << endl << endl;
  cout << "\'n\' para continuar";
  cin >> c;
}

int main() {
  int menu = 0;
  int bdate_c = 0;
  int day;
  int month;
  int year;

  while (bdate_c != 1) {
    cout << u8"\033[2J\033[1;1H";
    cout << "#### Data de Nascimento ####\n";
    cout << "Dia :";
    cin >> day;
    cout << "Mes :";
    cin >> month;
    cout << "Ano :";
    cin >> year;
    cout << "Data (dd-mm-yyyy): " << day << "-" << month << "-" << year << "\n" << "Precione \'1\' para confirmar ou \'0\' para repetir :";
    cin >> bdate_c;
  }
  cout << u8"\033[2J\033[1;1H";

  do {
    cout << "#### TESTE MATEMATICA ####\n";
    cout << "       (" << day << "-" << month << "-" << year << ")" << endl;
    cout << "Mostrar respostas do Grupo I   : 1\n";
    cout << "Mostrar respostas do Grupo II  : 2\n";
    cout << "Mostrar respostas do Grupo III : 3\n";
    cout << "Mostrar respostas do Grupo IV  : 4\n";
    cout << "Parar Programa                 : 5\n";
    cout << "Selecione Opcao :";
    cin >> menu;

    switch (menu) {
      case 1:
        groupI(day, month, year);
        break;
      case 2:
        groupII(day, month, year);
        break;
      case 3:
        groupIII(day, month, year);
        break;
    }
    cout << u8"\033[2J\033[1;1H";
  } while (menu != 5);

}
