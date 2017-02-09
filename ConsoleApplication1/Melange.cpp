




#include"stdafx.h"
#include"Melange.h"
#include <string>







std::string melangerLettres(std::string mot)

{

	std::string melange;

	int position(0);


	//Tant qu'on n'a pas extrait toutes les lettres du mot

	while (mot.size() != 0)

	{

		//On choisit un numéro de lettre au hasard dans le mot

		position = rand() % mot.size();

		//On ajoute la lettre dans le mot mélangé

		melange += mot[position];

		//On retire cette lettre du mot mystère

		//Pour ne pas la prendre une deuxième fois

		mot.erase(position, 1);

	}


	//On renvoie le mot mélangé

	return melange;
}