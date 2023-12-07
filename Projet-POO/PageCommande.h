#pragma once
#include "CAD.h"
#include "mappTableCommande.h"
#include "mappTableArticle.h"
#include "mappTableClient.h"
#include "mappTableAdresse.h"
#include "mappTableArticleCommande.h"
#include "gestionCommandes.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de PageCommande
	/// </summary>
	public ref class PageCommande : public System::Windows::Forms::Form
	{
	public:
		PageCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~PageCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ DebugBox;
	protected:
	private: System::Windows::Forms::TextBox^ debugText;
	private: System::Windows::Forms::TextBox^ txt_message;
	private: System::Windows::Forms::Label^ lbl_message;
	private: System::Windows::Forms::Button^ btn_enr;
	private: System::Windows::Forms::Button^ btn_sup;
	private: System::Windows::Forms::Button^ btn_maj;
	private: System::Windows::Forms::Button^ btn_nouveau;
	private: System::Windows::Forms::Label^ lbl_commandes;


	private: System::Windows::Forms::Button^ btn_next;
	private: System::Windows::Forms::Button^ btn_last;



	private: System::Windows::Forms::Button^ btn_previous;
	private: System::Windows::Forms::Label^ lbl_ref;
	private: System::Windows::Forms::TextBox^ txt_ref;
	private: System::Windows::Forms::Button^ btn_first;
	private: System::Windows::Forms::DataGridView^ dgv_articles;
	private: System::Windows::Forms::Label^ lbl_articles;

	private: NS_SVC::gestionCommandes^ gestionCommandes;
	private: DataSet^ dsCommande;
	private: DataSet^ dsCommandeArticles;

	private: String^ mode;

	private: int rowsCount;
	private: int index;

	private: System::Windows::Forms::Label^ lbl_moyen_paiement;
	private: System::Windows::Forms::TextBox^ txt_moyen_paiement;
	private: System::Windows::Forms::Label^ lbl_id_client;
	private: System::Windows::Forms::TextBox^ txt_id_client;
	private: System::Windows::Forms::Label^ lbl_id_adresse_livraison;
	private: System::Windows::Forms::TextBox^ txt_id_adresse_livraison;
	private: System::Windows::Forms::Label^ lbl_id_adresse_facturation;
	private: System::Windows::Forms::TextBox^ txt_id_adresse_facturation;
	private: System::Windows::Forms::DateTimePicker^ dt_date_emission;
	private: System::Windows::Forms::Label^ lbl_date_emission;
	private: System::Windows::Forms::DateTimePicker^ dt_date_paiement;
	private: System::Windows::Forms::Label^ lbl_date_paiement;
	private: System::Windows::Forms::DateTimePicker^ dt_date_livraison;
	private: System::Windows::Forms::Label^ lbl_date_livraison;
	private: System::Windows::Forms::DateTimePicker^ dt_date_reglement;
	private: System::Windows::Forms::Label^ lbl_date_reglement;





	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->DebugBox = (gcnew System::Windows::Forms::Label());
			this->debugText = (gcnew System::Windows::Forms::TextBox());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->lbl_message = (gcnew System::Windows::Forms::Label());
			this->btn_enr = (gcnew System::Windows::Forms::Button());
			this->btn_sup = (gcnew System::Windows::Forms::Button());
			this->btn_maj = (gcnew System::Windows::Forms::Button());
			this->btn_nouveau = (gcnew System::Windows::Forms::Button());
			this->lbl_commandes = (gcnew System::Windows::Forms::Label());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_last = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->lbl_ref = (gcnew System::Windows::Forms::Label());
			this->txt_ref = (gcnew System::Windows::Forms::TextBox());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->dgv_articles = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_articles = (gcnew System::Windows::Forms::Label());
			this->lbl_moyen_paiement = (gcnew System::Windows::Forms::Label());
			this->txt_moyen_paiement = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id_client = (gcnew System::Windows::Forms::Label());
			this->txt_id_client = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id_adresse_livraison = (gcnew System::Windows::Forms::Label());
			this->txt_id_adresse_livraison = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id_adresse_facturation = (gcnew System::Windows::Forms::Label());
			this->txt_id_adresse_facturation = (gcnew System::Windows::Forms::TextBox());
			this->dt_date_emission = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbl_date_emission = (gcnew System::Windows::Forms::Label());
			this->dt_date_paiement = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbl_date_paiement = (gcnew System::Windows::Forms::Label());
			this->dt_date_livraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbl_date_livraison = (gcnew System::Windows::Forms::Label());
			this->dt_date_reglement = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbl_date_reglement = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_articles))->BeginInit();
			this->SuspendLayout();
			// 
			// DebugBox
			// 
			this->DebugBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->DebugBox->AutoSize = true;
			this->DebugBox->Location = System::Drawing::Point(1344, 685);
			this->DebugBox->Name = L"DebugBox";
			this->DebugBox->Size = System::Drawing::Size(65, 20);
			this->DebugBox->TabIndex = 39;
			this->DebugBox->Text = L"Debug :";
			// 
			// debugText
			// 
			this->debugText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->debugText->Location = System::Drawing::Point(1422, 678);
			this->debugText->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->debugText->Name = L"debugText";
			this->debugText->Size = System::Drawing::Size(163, 26);
			this->debugText->TabIndex = 38;
			// 
			// txt_message
			// 
			this->txt_message->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_message->Location = System::Drawing::Point(42, 718);
			this->txt_message->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->Size = System::Drawing::Size(1543, 72);
			this->txt_message->TabIndex = 37;
			// 
			// lbl_message
			// 
			this->lbl_message->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_message->AutoSize = true;
			this->lbl_message->Location = System::Drawing::Point(36, 695);
			this->lbl_message->Name = L"lbl_message";
			this->lbl_message->Size = System::Drawing::Size(74, 20);
			this->lbl_message->TabIndex = 36;
			this->lbl_message->Text = L"Message";
			// 
			// btn_enr
			// 
			this->btn_enr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_enr->Location = System::Drawing::Point(1144, 669);
			this->btn_enr->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_enr->Name = L"btn_enr";
			this->btn_enr->Size = System::Drawing::Size(129, 35);
			this->btn_enr->TabIndex = 35;
			this->btn_enr->Text = L"Enregistrer";
			this->btn_enr->UseVisualStyleBackColor = true;
			this->btn_enr->Click += gcnew System::EventHandler(this, &PageCommande::btn_enr_Click);
			// 
			// btn_sup
			// 
			this->btn_sup->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_sup->Location = System::Drawing::Point(1008, 669);
			this->btn_sup->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_sup->Name = L"btn_sup";
			this->btn_sup->Size = System::Drawing::Size(129, 35);
			this->btn_sup->TabIndex = 34;
			this->btn_sup->Text = L"Supprimer";
			this->btn_sup->UseVisualStyleBackColor = true;
			this->btn_sup->Click += gcnew System::EventHandler(this, &PageCommande::btn_sup_Click);
			// 
			// btn_maj
			// 
			this->btn_maj->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_maj->Location = System::Drawing::Point(872, 669);
			this->btn_maj->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_maj->Name = L"btn_maj";
			this->btn_maj->Size = System::Drawing::Size(129, 35);
			this->btn_maj->TabIndex = 33;
			this->btn_maj->Text = L"Mise � jour";
			this->btn_maj->UseVisualStyleBackColor = true;
			this->btn_maj->Click += gcnew System::EventHandler(this, &PageCommande::btn_maj_Click);
			// 
			// btn_nouveau
			// 
			this->btn_nouveau->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_nouveau->Location = System::Drawing::Point(734, 669);
			this->btn_nouveau->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_nouveau->Name = L"btn_nouveau";
			this->btn_nouveau->Size = System::Drawing::Size(129, 35);
			this->btn_nouveau->TabIndex = 32;
			this->btn_nouveau->Text = L"Nouveau";
			this->btn_nouveau->UseVisualStyleBackColor = true;
			this->btn_nouveau->Click += gcnew System::EventHandler(this, &PageCommande::btn_nouveau_Click);
			// 
			// lbl_commandes
			// 
			this->lbl_commandes->AutoSize = true;
			this->lbl_commandes->Location = System::Drawing::Point(10, 8);
			this->lbl_commandes->Name = L"lbl_commandes";
			this->lbl_commandes->Size = System::Drawing::Size(99, 20);
			this->lbl_commandes->TabIndex = 31;
			this->lbl_commandes->Text = L"Commandes";
			// 
			// btn_next
			// 
			this->btn_next->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btn_next->Location = System::Drawing::Point(588, 669);
			this->btn_next->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(60, 35);
			this->btn_next->TabIndex = 29;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &PageCommande::btn_next_Click);
			// 
			// btn_last
			// 
			this->btn_last->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btn_last->Location = System::Drawing::Point(657, 669);
			this->btn_last->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_last->Name = L"btn_last";
			this->btn_last->Size = System::Drawing::Size(60, 35);
			this->btn_last->TabIndex = 28;
			this->btn_last->Text = L">>";
			this->btn_last->UseVisualStyleBackColor = true;
			this->btn_last->Click += gcnew System::EventHandler(this, &PageCommande::btn_last_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btn_previous->Location = System::Drawing::Point(519, 669);
			this->btn_previous->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(60, 35);
			this->btn_previous->TabIndex = 27;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &PageCommande::btn_previous_Click);
			// 
			// lbl_ref
			// 
			this->lbl_ref->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lbl_ref->AutoSize = true;
			this->lbl_ref->Location = System::Drawing::Point(153, 645);
			this->lbl_ref->Name = L"lbl_ref";
			this->lbl_ref->Size = System::Drawing::Size(84, 20);
			this->lbl_ref->TabIndex = 23;
			this->lbl_ref->Text = L"R�f�rence";
			// 
			// txt_ref
			// 
			this->txt_ref->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txt_ref->Location = System::Drawing::Point(159, 669);
			this->txt_ref->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->txt_ref->Name = L"txt_ref";
			this->txt_ref->ReadOnly = true;
			this->txt_ref->Size = System::Drawing::Size(265, 26);
			this->txt_ref->TabIndex = 21;
			// 
			// btn_first
			// 
			this->btn_first->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btn_first->Location = System::Drawing::Point(450, 669);
			this->btn_first->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(60, 35);
			this->btn_first->TabIndex = 20;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &PageCommande::btn_first_Click);
			// 
			// dgv_articles
			// 
			this->dgv_articles->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgv_articles->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_articles->Location = System::Drawing::Point(734, 32);
			this->dgv_articles->Name = L"dgv_articles";
			this->dgv_articles->RowHeadersWidth = 82;
			this->dgv_articles->RowTemplate->Height = 33;
			this->dgv_articles->Size = System::Drawing::Size(850, 608);
			this->dgv_articles->TabIndex = 40;
			// 
			// lbl_articles
			// 
			this->lbl_articles->AutoSize = true;
			this->lbl_articles->Location = System::Drawing::Point(729, 8);
			this->lbl_articles->Name = L"lbl_articles";
			this->lbl_articles->Size = System::Drawing::Size(61, 20);
			this->lbl_articles->TabIndex = 41;
			this->lbl_articles->Text = L"Articles";
			// 
			// lbl_moyen_paiement
			// 
			this->lbl_moyen_paiement->AutoSize = true;
			this->lbl_moyen_paiement->Location = System::Drawing::Point(18, 115);
			this->lbl_moyen_paiement->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_moyen_paiement->Name = L"lbl_moyen_paiement";
			this->lbl_moyen_paiement->Size = System::Drawing::Size(148, 20);
			this->lbl_moyen_paiement->TabIndex = 43;
			this->lbl_moyen_paiement->Text = L"Moyen de paiement";
			// 
			// txt_moyen_paiement
			// 
			this->txt_moyen_paiement->Location = System::Drawing::Point(24, 140);
			this->txt_moyen_paiement->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_moyen_paiement->Name = L"txt_moyen_paiement";
			this->txt_moyen_paiement->Size = System::Drawing::Size(265, 26);
			this->txt_moyen_paiement->TabIndex = 42;
			// 
			// lbl_id_client
			// 
			this->lbl_id_client->AutoSize = true;
			this->lbl_id_client->Location = System::Drawing::Point(18, 195);
			this->lbl_id_client->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_id_client->Name = L"lbl_id_client";
			this->lbl_id_client->Size = System::Drawing::Size(86, 20);
			this->lbl_id_client->TabIndex = 45;
			this->lbl_id_client->Text = L"Id du client";
			// 
			// txt_id_client
			// 
			this->txt_id_client->Location = System::Drawing::Point(24, 220);
			this->txt_id_client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_id_client->Name = L"txt_id_client";
			this->txt_id_client->Size = System::Drawing::Size(265, 26);
			this->txt_id_client->TabIndex = 44;
			// 
			// lbl_id_adresse_livraison
			// 
			this->lbl_id_adresse_livraison->AutoSize = true;
			this->lbl_id_adresse_livraison->Location = System::Drawing::Point(18, 282);
			this->lbl_id_adresse_livraison->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_id_adresse_livraison->Name = L"lbl_id_adresse_livraison";
			this->lbl_id_adresse_livraison->Size = System::Drawing::Size(194, 20);
			this->lbl_id_adresse_livraison->TabIndex = 47;
			this->lbl_id_adresse_livraison->Text = L"Id de l\'adresse de livraison";
			// 
			// txt_id_adresse_livraison
			// 
			this->txt_id_adresse_livraison->Location = System::Drawing::Point(24, 306);
			this->txt_id_adresse_livraison->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_id_adresse_livraison->Name = L"txt_id_adresse_livraison";
			this->txt_id_adresse_livraison->Size = System::Drawing::Size(265, 26);
			this->txt_id_adresse_livraison->TabIndex = 46;
			// 
			// lbl_id_adresse_facturation
			// 
			this->lbl_id_adresse_facturation->AutoSize = true;
			this->lbl_id_adresse_facturation->Location = System::Drawing::Point(18, 374);
			this->lbl_id_adresse_facturation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_id_adresse_facturation->Name = L"lbl_id_adresse_facturation";
			this->lbl_id_adresse_facturation->Size = System::Drawing::Size(214, 20);
			this->lbl_id_adresse_facturation->TabIndex = 49;
			this->lbl_id_adresse_facturation->Text = L"Id de l\'adresse de facturation";
			// 
			// txt_id_adresse_facturation
			// 
			this->txt_id_adresse_facturation->Location = System::Drawing::Point(24, 398);
			this->txt_id_adresse_facturation->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_id_adresse_facturation->Name = L"txt_id_adresse_facturation";
			this->txt_id_adresse_facturation->Size = System::Drawing::Size(265, 26);
			this->txt_id_adresse_facturation->TabIndex = 48;
			// 
			// dt_date_emission
			// 
			this->dt_date_emission->Location = System::Drawing::Point(398, 222);
			this->dt_date_emission->Name = L"dt_date_emission";
			this->dt_date_emission->Size = System::Drawing::Size(262, 26);
			this->dt_date_emission->TabIndex = 51;
			// 
			// lbl_date_emission
			// 
			this->lbl_date_emission->AutoSize = true;
			this->lbl_date_emission->Location = System::Drawing::Point(390, 195);
			this->lbl_date_emission->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_date_emission->Name = L"lbl_date_emission";
			this->lbl_date_emission->Size = System::Drawing::Size(243, 20);
			this->lbl_date_emission->TabIndex = 50;
			this->lbl_date_emission->Text = L"Date d\'�mission de la commande";
			// 
			// dt_date_paiement
			// 
			this->dt_date_paiement->Location = System::Drawing::Point(400, 142);
			this->dt_date_paiement->Name = L"dt_date_paiement";
			this->dt_date_paiement->Size = System::Drawing::Size(262, 26);
			this->dt_date_paiement->TabIndex = 53;
			// 
			// lbl_date_paiement
			// 
			this->lbl_date_paiement->AutoSize = true;
			this->lbl_date_paiement->Location = System::Drawing::Point(393, 115);
			this->lbl_date_paiement->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_date_paiement->Name = L"lbl_date_paiement";
			this->lbl_date_paiement->Size = System::Drawing::Size(257, 20);
			this->lbl_date_paiement->TabIndex = 52;
			this->lbl_date_paiement->Text = L"Date du paiement de la commande";
			// 
			// dt_date_livraison
			// 
			this->dt_date_livraison->Location = System::Drawing::Point(400, 308);
			this->dt_date_livraison->Name = L"dt_date_livraison";
			this->dt_date_livraison->Size = System::Drawing::Size(262, 26);
			this->dt_date_livraison->TabIndex = 55;
			// 
			// lbl_date_livraison
			// 
			this->lbl_date_livraison->AutoSize = true;
			this->lbl_date_livraison->Location = System::Drawing::Point(393, 282);
			this->lbl_date_livraison->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_date_livraison->Name = L"lbl_date_livraison";
			this->lbl_date_livraison->Size = System::Drawing::Size(178, 20);
			this->lbl_date_livraison->TabIndex = 54;
			this->lbl_date_livraison->Text = L"Date de livraison pr�vue";
			// 
			// dt_date_reglement
			// 
			this->dt_date_reglement->Location = System::Drawing::Point(400, 400);
			this->dt_date_reglement->Name = L"dt_date_reglement";
			this->dt_date_reglement->Size = System::Drawing::Size(262, 26);
			this->dt_date_reglement->TabIndex = 57;
			// 
			// lbl_date_reglement
			// 
			this->lbl_date_reglement->AutoSize = true;
			this->lbl_date_reglement->Location = System::Drawing::Point(393, 374);
			this->lbl_date_reglement->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_date_reglement->Name = L"lbl_date_reglement";
			this->lbl_date_reglement->Size = System::Drawing::Size(262, 20);
			this->lbl_date_reglement->TabIndex = 56;
			this->lbl_date_reglement->Text = L"Date de r�glement de la commande";
			// 
			// PageCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1650, 880);
			this->Controls->Add(this->dt_date_reglement);
			this->Controls->Add(this->lbl_date_reglement);
			this->Controls->Add(this->dt_date_livraison);
			this->Controls->Add(this->lbl_date_livraison);
			this->Controls->Add(this->dt_date_paiement);
			this->Controls->Add(this->lbl_date_paiement);
			this->Controls->Add(this->dt_date_emission);
			this->Controls->Add(this->lbl_date_emission);
			this->Controls->Add(this->lbl_id_adresse_facturation);
			this->Controls->Add(this->txt_id_adresse_facturation);
			this->Controls->Add(this->lbl_id_adresse_livraison);
			this->Controls->Add(this->txt_id_adresse_livraison);
			this->Controls->Add(this->lbl_id_client);
			this->Controls->Add(this->txt_id_client);
			this->Controls->Add(this->lbl_moyen_paiement);
			this->Controls->Add(this->txt_moyen_paiement);
			this->Controls->Add(this->lbl_articles);
			this->Controls->Add(this->dgv_articles);
			this->Controls->Add(this->DebugBox);
			this->Controls->Add(this->debugText);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->lbl_message);
			this->Controls->Add(this->btn_enr);
			this->Controls->Add(this->btn_sup);
			this->Controls->Add(this->btn_maj);
			this->Controls->Add(this->btn_nouveau);
			this->Controls->Add(this->lbl_commandes);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_last);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->lbl_ref);
			this->Controls->Add(this->txt_ref);
			this->Controls->Add(this->btn_first);
			this->MinimumSize = System::Drawing::Size(1615, 878);
			this->Name = L"PageCommande";
			this->Text = L"PageCommande";
			this->Load += gcnew System::EventHandler(this, &PageCommande::PageCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_articles))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			private: System::Void PageCommande_Load(System::Object^ sender, System::EventArgs^ e)
			{
				this->initCommande();
				this->txt_message->Text = "Cnx SQL SERVER ok \r\nEnregistrement charg�s";
			}
			private: void initCommande(void)
			{
				this->gestionCommandes = gcnew NS_SVC::gestionCommandes();
				this->dgv_articles->Columns->Clear();
				this->index = 0;
				refresh();
			}
			private: void refresh(void)
			{
				this->dsCommande = this->gestionCommandes->listeCommandes("LesCommandes");
				this->rowsCount = this->dsCommande->Tables["LesCommandes"]->Rows->Count;
				this->txt_ref->Text = Convert::ToString(this->dsCommande->Tables["LesCommandes"]->Rows[this->index]->ItemArray[0]);
				this->txt_moyen_paiement->Text = Convert::ToString(this->dsCommande->Tables["LesCommandes"]->Rows[this->index]->ItemArray[3]);
				this->txt_id_client->Text = Convert::ToString(this->dsCommande->Tables["LesCommandes"]->Rows[this->index]->ItemArray[6]);
				this->txt_id_adresse_livraison->Text = Convert::ToString(this->dsCommande->Tables["LesCommandes"]->Rows[this->index]->ItemArray[7]);
				this->txt_id_adresse_facturation->Text = Convert::ToString(this->dsCommande->Tables["LesCommandes"]->Rows[this->index]->ItemArray[8]);
				this->dt_date_emission->Value = Convert::ToDateTime(this->dsCommande->Tables["LesCommandes"]->Rows[this->index]->ItemArray[1]);
				this->dt_date_paiement->Value = Convert::ToDateTime(this->dsCommande->Tables["LesCommandes"]->Rows[this->index]->ItemArray[4]);
				this->dt_date_livraison->Value = Convert::ToDateTime(this->dsCommande->Tables["LesCommandes"]->Rows[this->index]->ItemArray[2]);
				this->dt_date_reglement->Value = Convert::ToDateTime(this->dsCommande->Tables["LesCommandes"]->Rows[this->index]->ItemArray[5]);
				this->dsCommandeArticles = this->gestionCommandes->listeArticlesCommande(this->txt_ref->Text, "Articles");
				this->dgv_articles->DataSource = this->dsCommandeArticles;
				this->dgv_articles->DataMember = "Articles";
				this->txt_message->Text = "Chargement de l'enregistrement : " + (this->index + 1);
			}
	private: System::Void btn_first_Click(System::Object^ sender, System::EventArgs^ e) {
		this->index = 0;
		refresh();
	}
private: System::Void btn_previous_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index > 0)
	{
		this->index--;
		refresh();
	}
}
private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index < this->rowsCount - 1)
	{
		this->index++;
		refresh();
	}
}
private: System::Void btn_last_Click(System::Object^ sender, System::EventArgs^ e) {
	this->index = this->rowsCount - 1;
	refresh();
}
private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txt_ref->Text = "";
	this->txt_moyen_paiement->Text = "";
	this->txt_id_client->Text = "";
	this->txt_id_adresse_livraison->Text = "";
	this->txt_id_adresse_facturation->Text = "";
	this->dt_date_emission->Value = DateTime::Now;
	this->dt_date_paiement->Value = DateTime::Now;
	this->dt_date_livraison->Value = DateTime::Now;
	this->dt_date_reglement->Value = DateTime::Now;
	this->mode = "nouveau";
	this->txt_message->Text = "Nouvel enregistrement";
}
private: System::Void btn_enr_Click(System::Object^ sender, System::EventArgs^ e) {
if (this->mode == "nouveau")
	{
		this->gestionCommandes->ajouter(Convert::ToInt32(this->txt_id_adresse_livraison->Text), Convert::ToInt32(this->txt_id_adresse_facturation->Text), this->dt_date_emission->Value, this->dt_date_livraison->Value, this->dt_date_paiement->Value, this->dt_date_reglement->Value, this->txt_moyen_paiement->Text, Convert::ToInt32(this->txt_id_client->Text));
		this->txt_message->Text = "Enregistrement ajout�";
	}
	else if (this->mode == "modifier")
	{
		this->gestionCommandes->modifier(this->txt_ref->Text, Convert::ToInt32(this->txt_id_adresse_livraison->Text), Convert::ToInt32(this->txt_id_adresse_facturation->Text), this->dt_date_emission->Value, this->dt_date_livraison->Value, this->dt_date_paiement->Value, this->dt_date_reglement->Value, this->txt_moyen_paiement->Text, Convert::ToInt32(this->txt_id_client->Text));
		this->txt_message->Text = "Enregistrement modifi�";
	}
	else if (this->mode == "supprimer")
	{
		this->gestionCommandes->supprimer(this->txt_ref->Text);
		this->txt_message->Text = "Enregistrement supprim�";
	}
	this->initCommande();
}
private: System::Void btn_maj_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "modifier";
	this->txt_message->Text = "Modification de l'enregistrement";
}
private: System::Void btn_sup_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "supprimer";
	this->txt_message->Text = "Suppression de l'enregistrement";
}
};
}
