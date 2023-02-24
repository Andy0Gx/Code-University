//										//^-----	GAME LIBRARY	-----^\\										\\

// ! 		::::::::: LIBRARIES ::::::::::

#include <iostream>
#include <string>
using namespace std;

// ! 		::::::::: STRUCTURE ::::::::::

struct Game {
	string GameName ; 		//Nombre del juego
	string ReleaseDate ; 	//Fecha de lanzamiento
	float Rating; 			//Calificacion
	string Platforms ;	    //Plataformas
	string Genre ;			//Genero
	string Developer ;		//Desarrollador
	Game *next;				//Puntero al next nodo
};

// ! 		::::::::: PROTOTYPES ::::::::::

void addGame (Game *&, string, string, float, string, string, string); //Añadir juego
void ShowAllGames (Game *);											 //Mostrar todos los juegos
void ShowGame (Game *);							 					 //Mostrar un juego
void SearchGame (Game *, string);									 //Buscar un juego
void DeleteGame (Game *&, string);									 //Eliminar un juego
void ModifyGame (Game *&, string);									 //Modificar un juego





// $ 		::::::::: MAIN FUNCTION ::::::::::

int main() {
	Game *GameLibrary = NULL; 										//Declaracion de la lista
	float Rating; 								        			//Declaracion de variables
	bool menu = true;												//Declaracion de variables
	string GameName, ReleaseDate, Platforms, Genre, Developer; 		//Declaracion de variables

	do {
		int option;                                                 //Declaracion de variables
		system("cls");
		//-------------------------Menu-------------------------
		cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
		cout << "\t\t1. Agregar un Juego." 			<< endl;
		cout << "\t\t2. Buscar un Juego." 			<< endl;
		cout << "\t\t3. Modificar un Juego." 		<< endl;
		cout << "\t\t4. Eliminar un Juego." 		<< endl;
		cout << "\t\t5. Ver Juegos." 				<< endl;
		cout << "\t\t6. Salir." 					<< endl;
		cout << "\n\t\t--------------------------";
		cout << "\n\n\t\tSeleccione una opcion: ";

		while( ( cin>>option ).fail() ) { 
			cin.clear(); 
			fflush(stdin); 
			cout<<"\n\t\tPor Favor introduzca numeros del 1 al 6."<<endl;
			cout << "\t\t" << system("pause");
			system("cls");
			cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
			cout << "\t\t1. Agregar un Juego." 				<< endl;
			cout << "\t\t2. Buscar un Juego." 				<< endl;
			cout << "\t\t3. Modificar un Juego." 			<< endl;
			cout << "\t\t4. Eliminar un Juego." 			<< endl;
			cout << "\t\t5. Ver Juegos." 					<< endl;
			cout << "\t\t6. Salir." 						<< endl;
			cout << "\n\t\t--------------------------";
			cout<<"\n\n\t\tSeleccione una opcion: ";  
    	}

		switch (option) {
			case 1: 	//* --> ADD A GAME
				system("cls");
				cin.ignore();
				cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
				cout << "\t\tIntroduzca el nombre del juego: ";		getline(cin, GameName);
				cout << "\t\tIntroduzca la fecha de lanzamiento (DD/MM/AAAA): "; getline(cin, ReleaseDate);
				cout << "\t\tIntroduzca la valoracion 0/10: ";		
				while( ( cin>>Rating ).fail() or Rating < 0 or Rating > 10 ) { 
					cin.clear(); 
					fflush(stdin); 
					cout<<"\n\t\tPor Favor introduzca numeros del 0 al 10."<<endl;
					cout << "\t\t" << system("pause");
					system("cls");
					cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
					cout << "\t\tIntroduzca el nombre del juego: " << GameName << endl;		
					cout << "\t\tIntroduzca la fecha de lanzamiento (DD/MM/AAAA): " << ReleaseDate << endl;
					cout << "\t\tIntroduzca la valoracion 0/10: "; 
				}
				cin.ignore();
				cout << "\t\tIntroduzca las plataformas: "; 		getline(cin, Platforms);
				cout << "\t\tIntroduzca el genero: "; 				getline(cin, Genre);
				cout << "\t\tIntroduzca el desarrollador: "; 		getline(cin, Developer);
				addGame(GameLibrary, GameName, ReleaseDate, Rating, Platforms, Genre, Developer); //Añadir juego a la lista
				break;

			case 2: 	//* --> SEARCH A GAME
				system("cls");
				cin.ignore();
				cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
				cout << "\t\tIntroduzca el nombre del juego: ";		getline(cin, GameName);
				SearchGame(GameLibrary, GameName);
				cout << "\n\t\t--------------------------\n";
				cout << "\n\t\t" << system("pause");
				break;

			case 3:		//* --> MODIFY A GAME
				system("cls");
				cout << "\n\t\t-----The Game Library-----\n";
				ShowAllGames(GameLibrary);
				cout << "\n\n\t\t--------------------------\n";
				cin.ignore();
				cout << "\n\t\tIntroduzca el nombre del juego: ";	getline(cin, GameName);

				ModifyGame(GameLibrary, GameName);
				cout << "\n\t\t" << system("pause");
				
				break;

			case 4:		//* --> DELETE A GAME
				system("cls");
				cin.ignore();
				cout << "\n\t\t-----The Game Library-----\n";
				ShowAllGames(GameLibrary);
				cout << "\n\n\t\t--------------------------\n";
				
				cout << "\n\t\tIntroduzca el nombre del juego: ";	getline(cin, GameName);
				system("cls");
				cout << "\n\t\t-----The Game Library-----\n";
				DeleteGame(GameLibrary, GameName);
				cout << "\n\t\t--------------------------\n";
				cout << "\n\t\t" << system("pause");
				break;

			case 5:		//* --> SHOW ALL GAMES
				system("cls");
				cout << "\n\t\t-----------Games----------\n";
				ShowAllGames(GameLibrary);
				cout << "\n\n\t\t--------------------------";
				cout << "\n\n\t\t" << system("pause");
				break;

			case 6:		//* --> EXIT
				system("cls");
				cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
				cout << "\t\tMAY THE FORCE BE WITH YOU!" << endl;
				cout << "\n\t\t--------------------------\n" << endl;
				menu = false;
				break;

			default:	//* --> DEFAULT
				system("cls");
				cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
				cout << "\t\tIntroduzca una opcion valida..." << endl;
				cout << "\n\t\t--------------------------\n" << endl;
				cout << "\n\t\t" << system("pause");
				break;
		}
	} while (menu == true);

	return 0;
}





// ! 		:::::::::: FUNCTIONS :::::::::: 

//* 1	----> ADD GAME <----	 *//

void addGame (Game *& GameLibrary, string GameName, string ReleaseDate, float Rating, string Platforms, string Genre, string Developer) {
	Game *NewGame = new Game();
	NewGame -> GameName = GameName;
	NewGame -> ReleaseDate = ReleaseDate;
	NewGame -> Rating = Rating;
	NewGame -> Platforms = Platforms;
	NewGame -> Genre = Genre;
	NewGame -> Developer = Developer;

	Game *pointer = GameLibrary;

	GameLibrary = NewGame;
	NewGame -> next = pointer;

	cout << "\n\t\tEl juego se agrego correctamente a la biblioteca de juegos." << endl;
}

//* 2	----> SEARCH GAME <----	 *//

void SearchGame (Game *GameLibrary, string GameName) {
 	Game *Position = new Game();
 	Position = GameLibrary;
	bool found = false;

	while (Position != NULL) {
		if (Position -> GameName == GameName){
			found = true;
			ShowGame(Position);
		} 
		Position = Position -> next;
	}
	if (found == false ){
		cout<< "\t\tEl Juego "<<GameName<<" no se encontro en la biblioteca. \n";
	}
}

void ShowGame (Game *Position){
	cout << "\t\tNombre del juego: " << Position -> GameName << endl;
	cout << "\t\tFecha de lanzamiento: " << Position -> ReleaseDate << endl;
	cout << "\t\tValoracion: " << Position -> Rating << endl;
	cout << "\t\tPlataformas: " << Position -> Platforms << endl;
	cout << "\t\tGenero: " << Position -> Genre << endl;
	cout << "\t\tDesarrollador: " << Position -> Developer << endl;
}

//* 3	----> MODIFY GAME <----	 *//

void ModifyGame (Game *& GameLibrary, string GameName) {
	Game *Position = new Game();
	Position = GameLibrary;
	bool found = false;
	string ReleaseDate = Position -> ReleaseDate, Platforms = Position -> Platforms, Genre = Position -> Genre, Developer = Position -> Developer;
	float Rating = Position -> Rating;

	while (Position != NULL) {
		if (Position -> GameName == GameName){
			found = true;
			system("cls");
			cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
			cout << "\t\tNombre del juego: " << GameName << endl;
			cout << "\t\tFecha de lanzamiento: " << ReleaseDate << endl;
			cout << "\t\tValoracion: " << Rating << endl;
			cout << "\t\tPlataformas: " << Platforms << endl;
			cout << "\t\tGenero: " << Genre << endl;
			cout << "\t\tDesarrollador: " << Developer << endl;
			cout << "\n\t\t--------------------------\n" << endl;

			cout << "\t\tIntroduzca el nuevo nombre del juego: ";		getline(cin, Position -> GameName);
			cout << "\t\tIntroduzca la nueva fecha de lanzamiento (DD/MM/AAAA): ";	getline(cin, Position -> ReleaseDate);
			cout << "\t\tIntroduzca la nueva valoracion 0/10: ";			
				while( ( cin >> Position -> Rating).fail() or Position -> Rating < 0 or Position -> Rating > 10 ) { 
					cin.clear(); 
					fflush(stdin); 
					cout<<"\n\t\tPor Favor introduzca numeros del 0 al 10."<<endl;
					cout << "\t\t" << system("pause");
					system("cls");

					cout << "\n\t\t-----The Game Library-----\n" 	<< endl;
					cout << "\t\tNombre del juego: " << GameName << endl;
					cout << "\t\tFecha de lanzamiento: " << ReleaseDate << endl;
					cout << "\t\tValoracion: " << Rating << endl;
					cout << "\t\tPlataformas: " << Platforms << endl;
					cout << "\t\tGenero: " << Genre << endl;
					cout << "\t\tDesarrollador: " << Developer << endl;
					cout << "\n\t\t--------------------------\n" << endl;

					cout << "\n\t\tIntroduzca el nuevo nombre del juego: " << Position -> GameName << endl;		
					cout << "\t\tIntroduzca la nueva fecha de lanzamiento (DD/MM/AAAA): " << Position -> ReleaseDate << endl;
					cout << "\t\tIntroduzca la nueva valoracion 0/10: "; 
				}
			cin.ignore();
			cout << "\t\tIntroduzca las nuevas plataformas: ";			getline(cin, Position -> Platforms);
			cout << "\t\tIntroduzca el nuevo genero: ";				getline(cin, Position -> Genre);
			cout << "\t\tIntroduzca el nuevo desarrollador: ";			getline(cin, Position -> Developer);

			cout << "\n\t\tEl juego se modifico correctamente." << endl;
		} 
		Position = Position -> next;
	}
	if (found == false ){
		cout<< "\t\tEl Juego "<<GameName<<" no se encontro en la biblioteca. \n";
	}
}

//* 4	----> DELETE GAME <----	 *//

void DeleteGame (Game *& GameLibrary, string GameName) {
	Game *Position = new Game();
	Game *Previous = new Game();
	Position = GameLibrary;

	while (Position != NULL && Position -> GameName != GameName) {
		Previous = Position;
		Position = Position -> next;
	}

	if (Position == NULL) {
		cout << "\n\t\tEl juego no se encontro en la biblioteca." << endl;
	} else if (Position == GameLibrary) {
		GameLibrary = GameLibrary -> next;
		delete Position;
		cout << "\n\t\tEl juego se elimino correctamente." << endl;
	} else {
		Previous -> next = Position -> next;
		delete Position;
		cout << "\n\t\tEl juego se elimino correctamente." << endl;
	}
}

//* 5	----> SHOW ALL GAMES <----	 *//

void ShowAllGames (Game *GameLibrary){
	float i = 1;
	Game *Position = new Game();
	Position = GameLibrary;

	while (Position != NULL) {
		cout<< "\n\t\t" << i << "._ " << Position -> GameName << ".";
		Position = Position -> next;
		i++;
	}
}


