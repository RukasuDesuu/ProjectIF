#pragma once
#include "MainForm.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectIF {

	/// <summary>
	/// Summary for RestaurantUC
	/// </summary>
	public ref class RestaurantUC : public System::Windows::Forms::UserControl
	{
	public:
		Restaurant^ restaurante = nullptr;
		RestaurantUC(Restaurant^ restaurant)
		{
			InitializeComponent();
			this->lblRestName->Text = restaurant->name;
			this->lblRestDesc->Text = restaurant->descricao;
			restaurante = restaurant;
			if (restaurant->isDog) {
				this->lblDog->Text = "Accepts Dog";
			}
			else{
				this->lblDog->Text = "No dogs";
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RestaurantUC()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblRestName;
	protected:
	private: System::Windows::Forms::PictureBox^ RestaurantLogo;
	private: System::Windows::Forms::Label^ lblRestDesc;
	private: System::Windows::Forms::Button^ btnRestAccess;
	private: System::Windows::Forms::Label^ lblDog;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RestaurantUC::typeid));
			this->lblRestName = (gcnew System::Windows::Forms::Label());
			this->RestaurantLogo = (gcnew System::Windows::Forms::PictureBox());
			this->lblRestDesc = (gcnew System::Windows::Forms::Label());
			this->btnRestAccess = (gcnew System::Windows::Forms::Button());
			this->lblDog = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RestaurantLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// lblRestName
			// 
			this->lblRestName->AutoSize = true;
			this->lblRestName->Location = System::Drawing::Point(4, 4);
			this->lblRestName->Name = L"lblRestName";
			this->lblRestName->Size = System::Drawing::Size(87, 13);
			this->lblRestName->TabIndex = 0;
			this->lblRestName->Text = L"RestaurantName";
			// 
			// RestaurantLogo
			// 
			this->RestaurantLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RestaurantLogo.Image")));
			this->RestaurantLogo->Location = System::Drawing::Point(7, 20);
			this->RestaurantLogo->MaximumSize = System::Drawing::Size(64, 64);
			this->RestaurantLogo->MinimumSize = System::Drawing::Size(64, 64);
			this->RestaurantLogo->Name = L"RestaurantLogo";
			this->RestaurantLogo->Size = System::Drawing::Size(64, 64);
			this->RestaurantLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->RestaurantLogo->TabIndex = 1;
			this->RestaurantLogo->TabStop = false;
			// 
			// lblRestDesc
			// 
			this->lblRestDesc->AutoSize = true;
			this->lblRestDesc->Location = System::Drawing::Point(78, 30);
			this->lblRestDesc->MaximumSize = System::Drawing::Size(400, 0);
			this->lblRestDesc->Name = L"lblRestDesc";
			this->lblRestDesc->Size = System::Drawing::Size(396, 143);
			this->lblRestDesc->TabIndex = 2;
			this->lblRestDesc->Text = resources->GetString(L"lblRestDesc.Text");
			// 
			// btnRestAccess
			// 
			this->btnRestAccess->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnRestAccess->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnRestAccess->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRestAccess->ForeColor = System::Drawing::Color::Black;
			this->btnRestAccess->Location = System::Drawing::Point(500, 0);
			this->btnRestAccess->Name = L"btnRestAccess";
			this->btnRestAccess->Size = System::Drawing::Size(34, 96);
			this->btnRestAccess->TabIndex = 3;
			this->btnRestAccess->Text = L">";
			this->btnRestAccess->UseVisualStyleBackColor = false;
			this->btnRestAccess->Click += gcnew System::EventHandler(this, &RestaurantUC::btnRestAccess_Click);
			// 
			// lblDog
			// 
			this->lblDog->AutoSize = true;
			this->lblDog->Location = System::Drawing::Point(4, 87);
			this->lblDog->Name = L"lblDog";
			this->lblDog->Size = System::Drawing::Size(50, 13);
			this->lblDog->TabIndex = 4;
			this->lblDog->Text = L"Cachorro";
			// 
			// RestaurantUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->Controls->Add(this->lblDog);
			this->Controls->Add(this->btnRestAccess);
			this->Controls->Add(this->lblRestDesc);
			this->Controls->Add(this->RestaurantLogo);
			this->Controls->Add(this->lblRestName);
			this->Name = L"RestaurantUC";
			this->Size = System::Drawing::Size(534, 173);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RestaurantLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: event System::EventHandler ^changetab;
	
	private: System::Void btnRestAccess_Click(System::Object^ sender, System::EventArgs^ e) {
		changetab(restaurante, e);
	}

};
}
