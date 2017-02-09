/******************************************************/
/**    Whoever said that progress is a slow process **/
/**         wasnt talking about me                 **/
/**              Créer par Cazio                  **/
/**       Geologist and computer enthusiast      **/
/*************************************************/

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Melange.h"
using namespace std;


int main()
{
	
	string motMystere, motMelange, motDeviner;
	char nvlePartie = 0;
	int i,j=5;

		srand(time(0));

	do // grosse boucle qui reprend le jeu si on decide de continuer
	{

	
	//----------------------------------------------------------------------------------
	// 1. On pioche un mot mystere dans notre dico
	//----------------------------------------------------------------------------------

		ifstream fichier("E:/Aziz/Documents/ConsoleApplication1/ConsoleApplication1/dico.txt");

		if (fichier) //échoue si le fichier n'est pas ouvert

		{
			int nbAleatoire(0);
			int nbreLignes=0; //une variable pour stocker le nbre de lignes 
			string ligne; //Une variable pour stocker les lignes lues

			//---------------------------------------------------------------
			// on compte le nombre de lignes
			//---------------------------------------------------------------
			while (!fichier.eof())
			{
						(getline(fichier, ligne));
						nbreLignes++;
			}

			//---------------------------------------------------------------
			// on choisi un nombre aleatoire
			//---------------------------------------------------------------
			nbAleatoire = rand() % (nbreLignes);
			fichier.seekg(0, ios::beg);

			//---------------------------------------------------------------
			// on tire un mot correspondant au nombre aléatoire
			//---------------------------------------------------------------
			while (!fichier.eof())
			{
				(getline(fichier, ligne));
				
			}
			
								
			
			
			
		}

		else

		{

			cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;

		}

	//----------------------------------------------------------------------------------
	//On ajoute plusieurs saut de lignes pour empecher le joueur de voir le mot mystere
	//----------------------------------------------------------------------------------

		for (i = 0; i < 1000; i++) { cout << " " << endl; }

	//----------------------------------------------------------------------------------
	// 2. on melange le mot mystere (fonction melange.cpp)
	//----------------------------------------------------------------------------------

	motMelange = melangerLettres(motMystere);

	//----------------------------------------------------------------------------------
	// 3. on demande de deviner le mot mystere
	//----------------------------------------------------------------------------------

	
		do
		{
		    j -= 1;
			cout << "Quel est ce mot ? " << motMelange << endl;
			cin >> motDeviner;

			if (motDeviner == motMystere)
			{
				cout << "Bravo ! " << endl;
			}

			else
			{
				cout << "Non ce n'est pas le bon mot ! " << endl;
				cout << "il vous reste "  << j << " chances !" << endl;
			}

		} while (motDeviner != motMystere && j > 0); // tant qu'on a pas le bon mot et qu'on a des coups le programme continue de tourner

		if (j == 0) { cout << " desole il ne vous reste plus de coup " << endl; } // le programme s'arrete apres cinq échecs
		cout << "voulez vous faire une autre partie ? "<<" y/n "; 
		cin >> nvlePartie;

	} while (nvlePartie == 'y'); 
	//------------------------------------------------------------------------------------

	//------------------------------------------------------------------------------------

	cout << "Appuyez sur une touche pour continuer." << endl;
	cin.ignore();
	cin.get();

	return EXIT_SUCCESS;

	
}

