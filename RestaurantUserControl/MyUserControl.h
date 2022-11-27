#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace RestaurantUserControl {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
		{
			InitializeComponent();
			/*if (restaurant->isRestaurant) {
				this->lblRestName->Text = restaurant->name;
				this->lblRestDesc -> Text = "not implemented yet";
			}
			else {
				return;
			}*/
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyUserControl()
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
	private: System::Windows::Forms::Panel^ dsgPanel;


	protected:

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
			this->lblRestName = (gcnew System::Windows::Forms::Label());
			this->RestaurantLogo = (gcnew System::Windows::Forms::PictureBox());
			this->lblRestDesc = (gcnew System::Windows::Forms::Label());
			this->btnRestAccess = (gcnew System::Windows::Forms::Button());
			this->dsgPanel = (gcnew System::Windows::Forms::Panel());
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
			this->lblRestDesc->Name = L"lblRestDesc";
			this->lblRestDesc->Size = System::Drawing::Size(115, 13);
			this->lblRestDesc->TabIndex = 2;
			this->lblRestDesc->Text = L"Restaurant Description";
			// 
			// btnRestAccess
			// 
			this->btnRestAccess->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnRestAccess->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnRestAccess->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRestAccess->ForeColor = System::Drawing::Color::Black;
			this->btnRestAccess->Location = System::Drawing::Point(497, 4);
			this->btnRestAccess->Name = L"btnRestAccess";
			this->btnRestAccess->Size = System::Drawing::Size(34, 89);
			this->btnRestAccess->TabIndex = 3;
			this->btnRestAccess->Text = L">";
			this->btnRestAccess->UseVisualStyleBackColor = false;
			// 
			// dsgPanel
			// 
			this->dsgPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dsgPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->dsgPanel->Location = System::Drawing::Point(0, 90);
			this->dsgPanel->Name = L"dsgPanel";
			this->dsgPanel->Size = System::Drawing::Size(496, 10);
			this->dsgPanel->TabIndex = 4;
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->Controls->Add(this->dsgPanel);
			this->Controls->Add(this->btnRestAccess);
			this->Controls->Add(this->lblRestDesc);
			this->Controls->Add(this->RestaurantLogo);
			this->Controls->Add(this->lblRestName);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(534, 96);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RestaurantLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
