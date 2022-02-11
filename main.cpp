#include <iostream>
using namespace std;

void board();

int checkwin();

char square[10] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int i = 1;
string strJoueur = "";
int main() {
    char a = 'O', b = 'X',choice = ' ', joueur = ' ';
    do{
        board();
        cout << "vous etes le joueur? ";
        cin >> joueur;
        strJoueur = joueur;
    cout << "Joueur " + strJoueur + " veuiller entrer un numero: ";
    cin >> choice;
    if (choice == '1' & joueur == '1')
        square[1] = a;
    else if (choice == '2' & joueur == '1')
        square[2] = a;
    else if (choice == '3' & joueur == '1')
        square[3] = a;
    else if (choice == '4' & joueur == '1')
        square[4] = a;
    else if (choice == '5' & joueur == '1')
        square[5] = a;
    else if (choice == '6' & joueur == '1')
        square[6] = a;
    else if (choice == '7' & joueur == '1')
        square[7] = a;
    else if (choice == '8' & joueur == '1')
        square[8] = a;
    else if (choice == '9' & joueur == '1')
        square[9] = a;
    else if (choice == '1' & joueur == '2')
        square[1] = b;
    else if (choice == '2' & joueur == '2')
        square[2] = b;
    else if (choice == '3' & joueur == '2')
        square[3] = b;
    else if (choice == '4' & joueur == '2')
        square[4] = b;
    else if (choice == '5' & joueur == '2')
        square[5] = b;
    else if (choice == '6' & joueur == '2')
        square[6] = b;
    else if (choice == '7' & joueur == '2')
        square[7] = b;
    else if (choice == '8' & joueur == '2')
        square[8] = b;
    else if (choice == '9' & joueur == '2')
        square[9] = b;
    else cout << "invalid input";
    i = checkwin();
    } while (i==1);
    if (i == 2) {
        board();
        cout << "fin du jeu joueur 1 gagne";
        return 0;
    }
    if (i==3){
        board();
        cout << "fin du jeu joueur 2 gagne";
        return 0;
    }
}

int checkwin() {
   if(square[1] == 'O' & square[1] == square[2] & square[2] == square[3])
       return 2;
   else if (square[4] == 'O' & square[4] == square[5] & square[5] == square[6])
       return 2;
   else if (square[7] == 'O' & square[7] == square[8] & square[8] == square[9])
       return 2;
   else if (square[1] == 'O' & square[1] == square[4] & square[4] == square[7])
       return 2;
   else if (square[2] == 'O' & square[2] == square[5] & square[5] == square[8])
       return 2;
   else if (square[3] == 'O' & square[3] == square[6] & square[6] == square[9])
       return 2;
   else if (square[1] == 'O' & square[1] == square[5] & square[5] == square[9])
       return 2;
   else if (square[3] == 'O' & square[3] == square[5] & square[5] == square[7])
       return 2;
   else if(square[1] == 'X' & square[1] == square[2] & square[2] == square[3])
       return 3;
   else if (square[4] == 'X' & square[4] == square[5] & square[5] == square[6])
        return 3;
   else if (square[7] == 'X' & square[7] == square[8] & square[8] == square[9])
        return 3;
   else if (square[1] == 'X' & square[1] == square[4] & square[4] == square[7])
       return 3;
   else if (square[2] == 'X' & square[2] == square[5] & square[5] == square[8])
       return 3;
   else if (square[3] == 'X' & square[3] == square[6] & square[6] == square[9])
       return 3;
   else if (square[1] == 'X' & square[1] == square[5] & square[5] == square[9])
       return 3;
   else if (square[3] == 'X' & square[3] == square[5] & square[5] == square[7])
       return 3;
   else
       return 1;
}

void board(){
    cout << "      |        |       " << endl;
    cout << "  " << square[1] << "   |   " << square[2] << "    |  " << square[3] << endl;
    cout << "------|--------|-------" << endl;
    cout << "  " << square[4] << "   |   " << square[5] << "    |  " << square[6] << endl;
    cout << "------|--------|-------" << endl;
    cout << "  " << square[7] << "   |   " << square[8] << "    |  " << square[9] << endl;
    cout << "      |        |       " << endl;
}