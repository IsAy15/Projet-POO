#pragma once
#include "PageClient.h"
#include "PageStats.h"
#include "PageCommande.h"
#include "PagePersonnel.h"
#include "PageStock.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bouton_page_clients;
	protected:

	private: System::Windows::Forms::Button^ bouton_page_statistiques;
	private: System::Windows::Forms::Button^ bouton_page_commande;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;




	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->bouton_page_clients = (gcnew System::Windows::Forms::Button());
			this->bouton_page_statistiques = (gcnew System::Windows::Forms::Button());
			this->bouton_page_commande = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// bouton_page_clients
			// 
			this->bouton_page_clients->Location = System::Drawing::Point(68, 116);
			this->bouton_page_clients->Margin = System::Windows::Forms::Padding(2);
			this->bouton_page_clients->Name = L"bouton_page_clients";
			this->bouton_page_clients->Size = System::Drawing::Size(142, 38);
			this->bouton_page_clients->TabIndex = 0;
			this->bouton_page_clients->Text = L"Gestion Client";
			this->bouton_page_clients->UseVisualStyleBackColor = true;
			this->bouton_page_clients->Click += gcnew System::EventHandler(this, &Main::bouton_page_clients_Click);
			// 
			// bouton_page_statistiques
			// 
			this->bouton_page_statistiques->Location = System::Drawing::Point(68, 219);
			this->bouton_page_statistiques->Margin = System::Windows::Forms::Padding(2);
			this->bouton_page_statistiques->Name = L"bouton_page_statistiques";
			this->bouton_page_statistiques->Size = System::Drawing::Size(223, 38);
			this->bouton_page_statistiques->TabIndex = 1;
			this->bouton_page_statistiques->Text = L"Statistiques";
			this->bouton_page_statistiques->UseVisualStyleBackColor = true;
			this->bouton_page_statistiques->Click += gcnew System::EventHandler(this, &Main::bouton_page_statistiques_Click);
			// 
			// bouton_page_commande
			// 
			this->bouton_page_commande->Location = System::Drawing::Point(215, 116);
			this->bouton_page_commande->Name = L"bouton_page_commande";
			this->bouton_page_commande->Size = System::Drawing::Size(166, 38);
			this->bouton_page_commande->TabIndex = 2;
			this->bouton_page_commande->Text = L"Gestion Commande";
			this->bouton_page_commande->UseVisualStyleBackColor = true;
			this->bouton_page_commande->Click += gcnew System::EventHandler(this, &Main::bouton_page_commande_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(388, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 38);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Gestion Personnel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::bouton_page_personnel);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 78);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(580, 13);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 181);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(580, 13);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(225, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 44);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Bienvenue";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(295, 219);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(239, 38);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Gestion des Stocks";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::bouton_page_stock);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Location = System::Drawing::Point(-18, 288);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(642, 46);
			this->panel1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(26, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"CESI Company";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(517, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Version 5.1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(247, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 16);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Contact : support@cesi.fr";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(-24, -16);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(648, 63);
			this->panel2->TabIndex = 9;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(618, 329);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bouton_page_commande);
			this->Controls->Add(this->bouton_page_statistiques);
			this->Controls->Add(this->bouton_page_clients);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(636, 376);
			this->MinimumSize = System::Drawing::Size(636, 376);
			this->Name = L"Main";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bouton_page_clients_Click(System::Object^ sender, System::EventArgs^ e) {
		ProjetPOO::PageClient page_client;
		page_client.ShowDialog();
	}
	private: System::Void bouton_page_statistiques_Click(System::Object^ sender, System::EventArgs^ e) {
		ProjetPOO::PageStats page_stats;
		page_stats.ShowDialog();
	}
	private: System::Void bouton_page_commande_Click(System::Object^ sender, System::EventArgs^ e) {
		ProjetPOO::PageCommande page_commande;
		page_commande.ShowDialog();
	}

	private: System::Void bouton_page_personnel(System::Object^ sender, System::EventArgs^ e) {
		ProjetPOO::PagePersonnel page_personnel;
		page_personnel.ShowDialog();
	}
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void bouton_page_stock(System::Object^ sender, System::EventArgs^ e) {
	ProjetPOO::PageStock page_stock;
	page_stock.ShowDialog();
	}



};
}
