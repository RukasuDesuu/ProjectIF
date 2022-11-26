#pragma once
#include "User.h"

namespace ProjectIF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User ^user)
		{
			InitializeComponent();
			this->tbName->Text = user->name;
			this->tbUsername->Text = user->username;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tcMain;
	private: System::Windows::Forms::TabPage^ tabPage1;

	protected:

	protected:

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ btnProfile;
	private: System::Windows::Forms::Button^ btnExplore;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::Label^ lblUsername;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tcMain = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->btnProfile = (gcnew System::Windows::Forms::Button());
			this->btnExplore = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tcMain->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tcMain
			// 
			this->tcMain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tcMain->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tcMain->Controls->Add(this->tabPage1);
			this->tcMain->Controls->Add(this->tabPage2);
			this->tcMain->Location = System::Drawing::Point(40, 1);
			this->tcMain->Name = L"tcMain";
			this->tcMain->SelectedIndex = 0;
			this->tcMain->Size = System::Drawing::Size(565, 451);
			this->tcMain->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tcMain->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->tabPage1->Controls->Add(this->flowLayoutPanel1);
			this->tabPage1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(557, 422);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Explore";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->tabPage2->Controls->Add(this->lblUsername);
			this->tabPage2->Controls->Add(this->lblName);
			this->tabPage2->Controls->Add(this->tbUsername);
			this->tabPage2->Controls->Add(this->tbName);
			this->tabPage2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(557, 422);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Profile";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(6, 108);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(73, 16);
			this->lblUsername->TabIndex = 3;
			this->lblUsername->Text = L"Username:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(7, 37);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(47, 16);
			this->lblName->TabIndex = 2;
			this->lblName->Text = L"Name:";
			// 
			// tbUsername
			// 
			this->tbUsername->Enabled = false;
			this->tbUsername->Location = System::Drawing::Point(6, 124);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(100, 20);
			this->tbUsername->TabIndex = 1;
			// 
			// tbName
			// 
			this->tbName->Enabled = false;
			this->tbName->Location = System::Drawing::Point(6, 56);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(100, 20);
			this->tbName->TabIndex = 0;
			// 
			// btnProfile
			// 
			this->btnProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnProfile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnProfile.Image")));
			this->btnProfile->Location = System::Drawing::Point(4, 41);
			this->btnProfile->Name = L"btnProfile";
			this->btnProfile->Size = System::Drawing::Size(32, 32);
			this->btnProfile->TabIndex = 1;
			this->btnProfile->UseVisualStyleBackColor = false;
			this->btnProfile->Click += gcnew System::EventHandler(this, &MainForm::btnProfile_Click);
			// 
			// btnExplore
			// 
			this->btnExplore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnExplore->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExplore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExplore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExplore.Image")));
			this->btnExplore->Location = System::Drawing::Point(4, 5);
			this->btnExplore->Name = L"btnExplore";
			this->btnExplore->Size = System::Drawing::Size(32, 32);
			this->btnExplore->TabIndex = 2;
			this->btnExplore->UseVisualStyleBackColor = false;
			this->btnExplore->Click += gcnew System::EventHandler(this, &MainForm::btnExplore_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(6, 6);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(529, 543);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->ClientSize = System::Drawing::Size(607, 452);
			this->Controls->Add(this->btnExplore);
			this->Controls->Add(this->btnProfile);
			this->Controls->Add(this->tcMain);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tcMain->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Cyan = rgb(139, 233, 253)
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->tcMain->ItemSize = System::Drawing::Size(0, 1);
	}
	private: System::Void btnProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tcMain->SelectedIndex = 1;
		this->btnProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
		this->btnExplore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	}
	private: System::Void btnExplore_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tcMain->SelectedIndex = 0;
		this->btnExplore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
		this->btnProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	}
	
};
}
