#include <iostream>
#include <string>

using namespace std;

///TODO : Rajouter le choix du coefficient d'activité
void main()
{
	char sexe;
	
	cout << "Veuillez choisir votre sexe : (m pour masculin, f pour femme) " << endl;
	cin >> sexe;
	if (sexe == 'm')
	{
		cout << "Veuillez entrer votre poids en kilos" << endl;
		double poidsKilo = 0;
		cin >> poidsKilo;
		cout << "Veuillez entrer votre taille en centimetres" << endl;
		double taille = 0;
		cin >> taille;
		cout << "Veuillez entrer votre Age" << endl;
		double age = 0;
		cin >> age;
		
		double result = 66.5 + (13.75 * poidsKilo) + (5 * taille) - (6.77 * age);
		cout << "Vous avez besoin de " << result*1.4 << " calories par jour afin de vivre, "
		<<"tout cela, en prenant en compte que vous faites 30 minutes de marche par jour"
		<<" et que votre travail est sédentaire" << endl;


	}
	else if (sexe == 'f')
	{
		//version pour femme
		cout << "Veuillez entrer votre poids en kilos" << endl;
		double poidsKilo = 0;
		cin >> poidsKilo;
		cout << "Veuillez entrer votre taille en centimetres" << endl;
		double taille = 0;
		cin >> taille;
		cout << "Veuillez entrer votre Age" << endl;
		double age = 0;
		cin >> age;

		double result = 655.1 + (9.56 * poidsKilo) + (1.85 * taille) - (4.67 * age);
		
		cout << "Vous avez besoin de " << result*1.4 << " calories par jour afin de vivre, "
		<<"tout cela, en prenant en compte que vous faites 30 minutes de marche par jour"
		<<" et que votre travail est sédentaire" << endl;

	}
	else
	{
		cout << "Mauvais choix, please try again.";
	}

}