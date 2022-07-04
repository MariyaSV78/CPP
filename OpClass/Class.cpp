#include <string>

// creation de la class
class Personnage
{
	void	attaquer (Personnage &cible);
	{

	}

	void changerArme(string nomNouvelleArme, int degatsNouvelleArme)
	{

	}

	bool estVivant()
	{


	}

	int	m_vie;
	int	m_mana;
	string	m_nomArme;
};

//utilisation de l'objet
int	main ()
{
	Personage david, goliath; //creation de2 objets de type Personage

	goliath.attaquer(david);
	goliath.changerArme("Doble hache", 40);

	

	return (0);

}
