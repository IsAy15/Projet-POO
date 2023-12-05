#pragma once
using namespace System;
namespace NS_Composants
{
	ref class mappPersonnes
	{
	protected:
		int ID;
		String^ Nom;
		String^ Prenom;
		String^ Date_naissance;
	public:
		mappPersonnes(void);
		virtual String^ SELECT(String^ table);
		virtual String^ INSERT(void) = 0;
		virtual String^ UPDATE(void) = 0;
		virtual String^ DELETE(String^ table, String^ id_name);
		virtual void setID(int) = 0;
		virtual void setPrenom(String^) = 0;
		virtual void setNom(String^) = 0;
		virtual void setDateNaissance(String^) = 0;
		virtual int getId(void) = 0;
		virtual String^ getNom(void) = 0;
		virtual String^ getPrenom(void) = 0;
		virtual String^ getDateNaissance(void) = 0;
	};
}