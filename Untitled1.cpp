#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int countAlive = 0;	
 int a = 10+2;
 int b = 10+2;
 void size (int a1, int b1){
 	a = a1+2;
 	b = b1+2;
 }

class Cell {
	int **space = new int* [a];
	void arr();
	int checkRule(int i, int j);
	void printSpace();
	public:
	void generateCell();
	void generateCellManualy ();
	Cell();
	void runCell();
	~Cell();	
};
 void Map(); 
 int menu();
 
int main(){
	
	
	return 0;
}


Cell::Cell(){
	arr();
for (int i = 0; i<a; i++){
for (int j = 0; j<b; j++){
space[i][j]=0;}	
}	
}
Cell::~Cell(){
	for (int i = 0; i < a; i++) {
		delete[] space[i];
	}
	delete[] space;
}
void Cell::printSpace(){
	countAlive = 0;
for (int i = 1; i<a-1; i++){
for (int j = 1; j<b-1; j++){
if(space[i][j]==1){
	cout<< "@";
	countAlive++;
}else{
	cout << " ";
}

}
cout << endl;
}
Sleep(1000);
	system("cls");
	}
void Cell:: arr(){
	
		for (int i = 0; i < a; i++){
			space[i] = new int [b];
		}
}
void Cell::generateCellManualy(){
	int status = 0;
cout << "if the cell is alive put 1 if it is dead 0 "<< endl;
for (int i = 1; i<a-1; i++){
for (int j = 1; j<b-1; j++){
cin>>status;
space[i][j]=status;	}
}}
void Cell::generateCell(){
for (int i = 1; i<a-1; i++){
for (int j = 1; j<b-1; j++){

space[i][j]=rand()%2;	}
}}
void Cell::runCell(){
	int key = 0;
	printSpace();
	Sleep(100);
	system("cls");
while(countAlive != 0){
	for (int i = 1; i<a-1; i++){
	for (int j = 1; j<b-1; j++){
	
	checkRule(i, j);
}
Sleep(100);

}
printSpace();	
	system("cls");
}
cout << "GAME OVER!!"<< endl<< "Enter 1 to continue";
cin >> key;
}
int Cell::checkRule(int i, int j){
	int cellCount = 0;
	for (int k = i-1; k<i+2; k++){
for (int n = j; n<j+2; n++){
cellCount =	cellCount+space[k][n];
if(space[k][n]==0){
}
}
}

cellCount =	cellCount-space[i][j];

if (cellCount==3 && space[i][j]==0 ){
	space[i][j] = 1;
}
if ((cellCount<2 || cellCount>3)&&space[i][j] == 1 ){
	space[i][j] = 0;
}
	
		return space[i][j];}
