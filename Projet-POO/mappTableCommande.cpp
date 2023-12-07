#include "mappTableCommande.h"
#include "mappTableClient.h"
#include "mappTableAdresse.h"
#include "mappTableArticle.h"

using namespace System;

namespace NS_Composants
{
	mappTableCommande::mappTableCommande(void)
	{
		this->Reference = "";
		this->Id_Adresse_livraison = 0;
		this->Id_Adresse_facturation = 0;
		this->Date_emission = DateTime::Now;
		this->Date_livraison = DateTime::Now;
		this->Date_paiement = DateTime::Now;
		this->Date_reglement = DateTime::Now;
		this->Moyen_reglement = "";
		this->Id_Client = 0;
	}

	String^ mappTableCommande::SELECT(void)
	{
		return "SELECT * FROM Commande;";
	}

	String^ mappTableCommande::INSERT(void)
	{
		return "INSERT INTO Commande (Ref_com, ID_adresse_livraison, ID_adresse_facturation, Date_emission, Date_livraison_prevue, Date_paiement, Date_reglement, MoyenPaie, ID_client) VALUES('"

			+ this->getReference() + "', '" + this->getIdAdresseLivraison() + "', '" + this->getIdAdresseFacturation() + "', '" + this->getDateEmission() + "', '" + this->getDateLivraison() + "', '" + this->getDatePaiement() + "', '" + this->getDateReglement() + "', '" + this->getMoyenReglement() + "', '" + this->getIdClient() + "')";
	}

	String^ mappTableCommande::UPDATE(void)
	{
		return "UPDATE Commande SET Reference = '" + this->getReference() + "', Id_Adresse_livraison = '" + this->getIdAdresseLivraison() + "', Id_Adresse_facturation = '" + this->getIdAdresseFacturation() + "', Date_emission = '" + this->getDateEmission() + "', Date_livraison = '" + this->getDateLivraison() + "', Date_paiement = '" + this->getDatePaiement() + "', Date_reglement = '" + this->getDateReglement() + "', Moyen_reglement = '" + this->getMoyenReglement() + "', Id_Client = '" + this->getIdClient() + "' WHERE Reference = '" + this->getReference() + "'";
	}

	String^ mappTableCommande::DELETE(void)
	{
		return "DELETE FROM Commande WHERE Reference = '" + this->getReference() + "'";
	}

	void mappTableCommande::setReference(String^ Reference)
	{
		if (Reference != "")
		{
			this->Reference = Reference;

		}
	}

	void mappTableCommande::setIdAdresseLivraison(int Id_Adresse_livraison)
	{
		if (Id_Adresse_livraison > 0)
		{
			this->Id_Adresse_livraison = Id_Adresse_livraison;
		}
	}

	void mappTableCommande::setIdAdresseFacturation(int Id_Adresse_facturation)
	{
		if (Id_Adresse_facturation > 0)
		{
			this->Id_Adresse_facturation = Id_Adresse_facturation;
		}
	}

	void mappTableCommande::setDateEmission(DateTime Date_emission)
	{
		this->Date_emission = Date_emission;
	}

	void mappTableCommande::setDateLivraison(DateTime Date_livraison)
	{
		this->Date_livraison = Date_livraison;
	}

	void mappTableCommande::setDatePaiement(DateTime Date_paiement)
	{
			this->Date_paiement = Date_paiement;
	}

	void mappTableCommande::setDateReglement(DateTime Date_reglement)
	{
			this->Date_reglement = Date_reglement;
	}

	void mappTableCommande::setMoyenReglement(String^ Moyen_reglement)
	{
		if (Moyen_reglement != "")
		{
			this->Moyen_reglement = Moyen_reglement;
		}
	}

	void mappTableCommande::setIdClient(int Id_Client)
	{
		if (Id_Client > 0)
		{
			this->Id_Client = Id_Client;
		}
	}

	String^ mappTableCommande::getReference(void)
	{
		return this->Reference;
	}

	int mappTableCommande::getIdAdresseLivraison(void)
	{
		return this->Id_Adresse_livraison;
	}

	int mappTableCommande::getIdAdresseFacturation(void)
	{
		return this->Id_Adresse_facturation;
	}

	DateTime mappTableCommande::getDateEmission(void)
	{
		return this->Date_emission;
	}

	DateTime mappTableCommande::getDateLivraison(void)
	{
		return this->Date_livraison;
	}

	DateTime mappTableCommande::getDatePaiement(void)
	{
		return this->Date_paiement;
	}

	DateTime mappTableCommande::getDateReglement(void)
	{
		return this->Date_reglement;
	}

	String^ mappTableCommande::getMoyenReglement(void)
	{
		return this->Moyen_reglement;
	}

	int mappTableCommande::getIdClient(void)
	{
		return this->Id_Client;
	}
}