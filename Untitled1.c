#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>

using namespace std;

 int menu();

int main(){
  cout <<  " Hello! Choise size please!" << endl;
  int question = 0;
  int a1 = 0;
  int b1 = 0;
  do{
    question = menu();
      switch(question){
        case 0:{
          a1 = 5;
          b1 = 5;
          size(a1,b1);
             Map();
            Cell game;
                game.generateCell();
    game.runCell();
          Map();
            cout << "\nTo return to the menu, press 1\n";
          cin >> question;
            break;
        }
        case 1:{
          a1 = 10;
          b1 = 10;
          size(a1,b1);
              Map();
            Cell game;
                game.generateCell();
    game.runCell();
          Map();
              cout << "\nTo return to the menu, press 1\n";
          cin >> question;
            break;
        }
        case 2:{
    a1 = 15;
          b1 = 15;
          size(a1,b1);
              Map();
            Cell game;
                game.generateCell();
    game.runCell();

                  cout << "\nTo return to the menu, press 1\n";
              cin >> question;
              break;
        }
        case 3:{
          a1 = 20;
          b1 = 20;
          size(a1,b1);
              Map();
            Cell game;
              game.generateCell();
    game.runCell();
          Map();
                  cout << "\nTo return to the menu, press 1\n";
            cin >> question;
            break;
        }
        case 4:{
          cout << "ENTER SIZE PLEASE!"<< endl << "Width X Heigb"<< endl ;
          cin >> a1;
          cin>> b1;
          size(a1,b1);
              Map();
            Cell game;
            game.generateCellManualy();
    game.runCell();
          Map();
                  cout << "\nTo return to the menu, press 1\n";
            cin >> question;
            }
            break;
       case 5:{
             cout << "Exiting the program..." << endl;
        return 0;
    }
    }  } while(question);
  return 0;
}

   int menu() {
  int key = 0;
  int code = 0;
  do {
    system("cls");
    key = (key + 6) % 6;

    cout << "=========================(Choose a size)============================" << endl;

    if (key == 0){

      cout << "--------------" << endl;
      cout << "-> (Size 5x5)"  << endl;
      cout << "--------------" << endl;  }
    else{

      cout << "----------" << endl;
      cout << "(Size 5x5)"  << endl;
      cout << "----------" << endl;  }
    if (key == 1){

      cout << "---------------" << endl;
      cout << "-> (Size 10x10)"  << endl;
      cout << "---------------" << endl;  }
    else{

     cout << "----------" << endl;
      cout <<"(Size 10x10)"  << endl;
      cout << "----------" << endl;  }
    if (key == 2){

      cout << "--------------" << endl;
      cout << "-> (Size 15x15)"  << endl;
      cout << "--------------" << endl;  }
    else{

     cout << "-----------" << endl;
      cout <<"(Size 15x15)"  << endl;
      cout << "-----------" << endl;  }
    if (key == 3){
      cout << "--------------" << endl;
      cout << "-> (Size 20x20)"  << endl;
      cout << "--------------" << endl;  }
    else{

      cout << "-----------" << endl;
      cout <<"(Size 20x20)"  << endl;
      cout << "-----------" << endl;  }
    if (key == 4)  {
      cout << "-----------------"<< endl;
      cout << "-> (Enter manualy)" << endl;
       cout << "-----------------"<< endl;  }
    else{

     cout << "--------------"<< endl;
      cout << "(Enter manualy)" << endl;
       cout <<"--------------"<< endl;  }
    if (key == 5){

     cout << "--------"<< endl;
      cout << "-> (Exit)" << endl;
       cout << "--------"<< endl;  }
    else{

     cout << "------"<< endl;
      cout << "(Exit)" << endl;
       cout << "-----"<< endl;  }
    code = getch();
    if (code == 80)
      key++;
    if (code == 72)
      key--;
  } while (code != 13);
  system("cls");

  return key;
}

void Map() {
system("cls");
 cout << endl; cout <<"                         (|_-_|)"<<"                 HELLO!                            /) /)"<< endl;
 cout <<"                         (='.'=)"<<"                  GAME                           =( '.' )= "<< endl;
 cout <<"                         (0)_(0)"<<"                 START                            (,   ,)"<< endl;

}
