




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

		//On choisit un num�ro de lettre au hasard dans le mot

		position = rand() % mot.size();

		//On ajoute la lettre dans le mot m�lang�

		melange += mot[position];

		//On retire cette lettre du mot myst�re

		//Pour ne pas la prendre une deuxi�me fois

		mot.erase(position, 1);

	}


	//On renvoie le mot m�lang�

	return melange;
}