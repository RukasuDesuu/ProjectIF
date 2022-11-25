#pragma once
#include "User.h"

namespace ProjectIF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:


	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::TableLayoutPanel^ table;
	private: System::Windows::Forms::TextBox^ tbUser;
	private: System::Windows::Forms::TextBox^ tbPW;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnSignUp;
	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::Label^ lblPw;
	private: System::Windows::Forms::CheckBox^ chbShowPassword;
	private: System::Windows::Forms::TabControl^ tcLogin;



	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ lblUserSign;
	private: System::Windows::Forms::TextBox^ tbPasswordSign2;

	private: System::Windows::Forms::Label^ lblPasswordSign2;
	private: System::Windows::Forms::TextBox^ tbPasswordSign1;

	private: System::Windows::Forms::Label^ lblPasswordSign1;
	private: System::Windows::Forms::TextBox^ tbNameSign;


	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::TextBox^ tbUsernameSign;
	private: System::Windows::Forms::Panel^ panelDivider;
	private: System::Windows::Forms::Label^ lblSignUpTitle;
	private: System::Windows::Forms::CheckBox^ chbIsRestaurant;
	private: System::Windows::Forms::Label^ lblTerms;
	private: System::Windows::Forms::Button^ btnSignUpConfirm;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ lblLoginTab;










	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->table = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbPW = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnSignUp = (gcnew System::Windows::Forms::Button());
			this->tbUser = (gcnew System::Windows::Forms::TextBox());
			this->lblPw = (gcnew System::Windows::Forms::Label());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->chbShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->tcLogin = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->lblLoginTab = (gcnew System::Windows::Forms::LinkLabel());
			this->btnSignUpConfirm = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblTerms = (gcnew System::Windows::Forms::Label());
			this->chbIsRestaurant = (gcnew System::Windows::Forms::CheckBox());
			this->tbPasswordSign2 = (gcnew System::Windows::Forms::TextBox());
			this->lblPasswordSign2 = (gcnew System::Windows::Forms::Label());
			this->tbPasswordSign1 = (gcnew System::Windows::Forms::TextBox());
			this->lblPasswordSign1 = (gcnew System::Windows::Forms::Label());
			this->tbNameSign = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->tbUsernameSign = (gcnew System::Windows::Forms::TextBox());
			this->panelDivider = (gcnew System::Windows::Forms::Panel());
			this->lblSignUpTitle = (gcnew System::Windows::Forms::Label());
			this->lblUserSign = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			this->table->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tcLogin->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// logo
			// 
			this->logo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.Image")));
			this->logo->Location = System::Drawing::Point(6, 6);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(992, 83);
			this->logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logo->TabIndex = 1;
			this->logo->TabStop = false;
			// 
			// table
			// 
			this->table->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->table->ColumnCount = 3;
			this->table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 65.30278F)));
			this->table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 34.69722F)));
			this->table->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 381)));
			this->table->Controls->Add(this->tbPW, 1, 3);
			this->table->Controls->Add(this->tableLayoutPanel1, 1, 4);
			this->table->Controls->Add(this->tbUser, 1, 1);
			this->table->Controls->Add(this->lblPw, 1, 2);
			this->table->Controls->Add(this->lblUser, 1, 0);
			this->table->Controls->Add(this->chbShowPassword, 2, 3);
			this->table->Location = System::Drawing::Point(6, 105);
			this->table->Name = L"table";
			this->table->RowCount = 5;
			this->table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 51)));
			this->table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 54)));
			this->table->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 137)));
			this->table->Size = System::Drawing::Size(992, 337);
			this->table->TabIndex = 3;
			// 
			// tbPW
			// 
			this->tbPW->Location = System::Drawing::Point(402, 149);
			this->tbPW->Name = L"tbPW";
			this->tbPW->Size = System::Drawing::Size(200, 20);
			this->tbPW->TabIndex = 1;
			this->tbPW->UseSystemPasswordChar = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnLogin, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnSignUp, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(402, 203);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(200, 35);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(3, 3);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(94, 23);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// btnSignUp
			// 
			this->btnSignUp->Location = System::Drawing::Point(103, 3);
			this->btnSignUp->Name = L"btnSignUp";
			this->btnSignUp->Size = System::Drawing::Size(94, 23);
			this->btnSignUp->TabIndex = 1;
			this->btnSignUp->Text = L"Sign Up";
			this->btnSignUp->UseVisualStyleBackColor = true;
			this->btnSignUp->Click += gcnew System::EventHandler(this, &LoginForm::btnSignUp_Click);
			// 
			// tbUser
			// 
			this->tbUser->Location = System::Drawing::Point(402, 54);
			this->tbUser->Name = L"tbUser";
			this->tbUser->Size = System::Drawing::Size(197, 20);
			this->tbUser->TabIndex = 0;
			// 
			// lblPw
			// 
			this->lblPw->AutoSize = true;
			this->lblPw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPw->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->lblPw->Location = System::Drawing::Point(402, 100);
			this->lblPw->Name = L"lblPw";
			this->lblPw->Size = System::Drawing::Size(134, 31);
			this->lblPw->TabIndex = 4;
			this->lblPw->Text = L"Password";
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->lblUser->Location = System::Drawing::Point(402, 0);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(72, 31);
			this->lblUser->TabIndex = 3;
			this->lblUser->Text = L"User";
			// 
			// chbShowPassword
			// 
			this->chbShowPassword->AutoSize = true;
			this->chbShowPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->chbShowPassword->Location = System::Drawing::Point(614, 149);
			this->chbShowPassword->Name = L"chbShowPassword";
			this->chbShowPassword->Size = System::Drawing::Size(102, 17);
			this->chbShowPassword->TabIndex = 5;
			this->chbShowPassword->Text = L"Show Password";
			this->chbShowPassword->UseVisualStyleBackColor = true;
			this->chbShowPassword->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::chbShowPassword_CheckedChanged);
			// 
			// tcLogin
			// 
			this->tcLogin->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tcLogin->Controls->Add(this->tabPage1);
			this->tcLogin->Controls->Add(this->tabPage2);
			this->tcLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tcLogin->Location = System::Drawing::Point(11, 19);
			this->tcLogin->Multiline = true;
			this->tcLogin->Name = L"tcLogin";
			this->tcLogin->SelectedIndex = 0;
			this->tcLogin->Size = System::Drawing::Size(1012, 631);
			this->tcLogin->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tcLogin->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage1->Controls->Add(this->table);
			this->tabPage1->Controls->Add(this->logo);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1004, 602);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->tabPage2->Controls->Add(this->lblLoginTab);
			this->tabPage2->Controls->Add(this->btnSignUpConfirm);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->lblTerms);
			this->tabPage2->Controls->Add(this->chbIsRestaurant);
			this->tabPage2->Controls->Add(this->tbPasswordSign2);
			this->tabPage2->Controls->Add(this->lblPasswordSign2);
			this->tabPage2->Controls->Add(this->tbPasswordSign1);
			this->tabPage2->Controls->Add(this->lblPasswordSign1);
			this->tabPage2->Controls->Add(this->tbNameSign);
			this->tabPage2->Controls->Add(this->lblName);
			this->tabPage2->Controls->Add(this->tbUsernameSign);
			this->tabPage2->Controls->Add(this->panelDivider);
			this->tabPage2->Controls->Add(this->lblSignUpTitle);
			this->tabPage2->Controls->Add(this->lblUserSign);
			this->tabPage2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1004, 602);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			// 
			// lblLoginTab
			// 
			this->lblLoginTab->AutoSize = true;
			this->lblLoginTab->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->lblLoginTab->Location = System::Drawing::Point(25, 473);
			this->lblLoginTab->Name = L"lblLoginTab";
			this->lblLoginTab->Size = System::Drawing::Size(110, 13);
			this->lblLoginTab->TabIndex = 14;
			this->lblLoginTab->TabStop = true;
			this->lblLoginTab->Text = L"Back to Login Screen";
			this->lblLoginTab->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::lblLoginTab_LinkClicked);
			// 
			// btnSignUpConfirm
			// 
			this->btnSignUpConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignUpConfirm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnSignUpConfirm->Location = System::Drawing::Point(22, 434);
			this->btnSignUpConfirm->Name = L"btnSignUpConfirm";
			this->btnSignUpConfirm->Size = System::Drawing::Size(244, 32);
			this->btnSignUpConfirm->TabIndex = 13;
			this->btnSignUpConfirm->Text = L"CONFIRM";
			this->btnSignUpConfirm->UseVisualStyleBackColor = true;
			this->btnSignUpConfirm->Click += gcnew System::EventHandler(this, &LoginForm::btnSignUpConfirm_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(241, 418);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Terms and Conditions.";
			// 
			// lblTerms
			// 
			this->lblTerms->AutoSize = true;
			this->lblTerms->Location = System::Drawing::Point(22, 418);
			this->lblTerms->Name = L"lblTerms";
			this->lblTerms->Size = System::Drawing::Size(222, 13);
			this->lblTerms->TabIndex = 11;
			this->lblTerms->Text = L"By clicking on confirm you are agreeing to our";
			// 
			// chbIsRestaurant
			// 
			this->chbIsRestaurant->AutoSize = true;
			this->chbIsRestaurant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chbIsRestaurant->Location = System::Drawing::Point(22, 111);
			this->chbIsRestaurant->Name = L"chbIsRestaurant";
			this->chbIsRestaurant->Size = System::Drawing::Size(220, 29);
			this->chbIsRestaurant->TabIndex = 10;
			this->chbIsRestaurant->Text = L"Restaurant Account";
			this->chbIsRestaurant->UseVisualStyleBackColor = true;
			this->chbIsRestaurant->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::chbIsRestaurant_CheckedChanged);
			// 
			// tbPasswordSign2
			// 
			this->tbPasswordSign2->Location = System::Drawing::Point(22, 391);
			this->tbPasswordSign2->Name = L"tbPasswordSign2";
			this->tbPasswordSign2->Size = System::Drawing::Size(221, 20);
			this->tbPasswordSign2->TabIndex = 9;
			this->tbPasswordSign2->UseSystemPasswordChar = true;
			// 
			// lblPasswordSign2
			// 
			this->lblPasswordSign2->AutoSize = true;
			this->lblPasswordSign2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblPasswordSign2->Location = System::Drawing::Point(16, 356);
			this->lblPasswordSign2->Name = L"lblPasswordSign2";
			this->lblPasswordSign2->Size = System::Drawing::Size(236, 31);
			this->lblPasswordSign2->TabIndex = 8;
			this->lblPasswordSign2->Text = L"Confirm Password";
			this->lblPasswordSign2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbPasswordSign1
			// 
			this->tbPasswordSign1->Location = System::Drawing::Point(22, 324);
			this->tbPasswordSign1->Name = L"tbPasswordSign1";
			this->tbPasswordSign1->Size = System::Drawing::Size(221, 20);
			this->tbPasswordSign1->TabIndex = 7;
			this->tbPasswordSign1->UseSystemPasswordChar = true;
			// 
			// lblPasswordSign1
			// 
			this->lblPasswordSign1->AutoSize = true;
			this->lblPasswordSign1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblPasswordSign1->Location = System::Drawing::Point(16, 289);
			this->lblPasswordSign1->Name = L"lblPasswordSign1";
			this->lblPasswordSign1->Size = System::Drawing::Size(134, 31);
			this->lblPasswordSign1->TabIndex = 6;
			this->lblPasswordSign1->Text = L"Password";
			this->lblPasswordSign1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbNameSign
			// 
			this->tbNameSign->Location = System::Drawing::Point(22, 185);
			this->tbNameSign->Name = L"tbNameSign";
			this->tbNameSign->Size = System::Drawing::Size(394, 20);
			this->tbNameSign->TabIndex = 5;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(16, 150);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(137, 31);
			this->lblName->TabIndex = 4;
			this->lblName->Text = L"Full Name";
			this->lblName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbUsernameSign
			// 
			this->tbUsernameSign->Location = System::Drawing::Point(22, 255);
			this->tbUsernameSign->Name = L"tbUsernameSign";
			this->tbUsernameSign->Size = System::Drawing::Size(221, 20);
			this->tbUsernameSign->TabIndex = 3;
			// 
			// panelDivider
			// 
			this->panelDivider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->panelDivider->Location = System::Drawing::Point(9, 84);
			this->panelDivider->Name = L"panelDivider";
			this->panelDivider->Size = System::Drawing::Size(365, 1);
			this->panelDivider->TabIndex = 2;
			// 
			// lblSignUpTitle
			// 
			this->lblSignUpTitle->AutoSize = true;
			this->lblSignUpTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSignUpTitle->Location = System::Drawing::Point(9, 8);
			this->lblSignUpTitle->Name = L"lblSignUpTitle";
			this->lblSignUpTitle->Size = System::Drawing::Size(260, 73);
			this->lblSignUpTitle->TabIndex = 1;
			this->lblSignUpTitle->Text = L"Sign Up";
			// 
			// lblUserSign
			// 
			this->lblUserSign->AutoSize = true;
			this->lblUserSign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUserSign->Location = System::Drawing::Point(16, 220);
			this->lblUserSign->Name = L"lblUserSign";
			this->lblUserSign->Size = System::Drawing::Size(139, 31);
			this->lblUserSign->TabIndex = 0;
			this->lblUserSign->Text = L"Username";
			this->lblUserSign->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->ClientSize = System::Drawing::Size(1036, 693);
			this->Controls->Add(this->tcLogin);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			this->table->ResumeLayout(false);
			this->table->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tcLogin->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	public: User^ user = nullptr;
	public: bool^ isAuth = false;

	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->tbUser->Text;
		String^ password = this->tbPW->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter username and password", "username or Password Empty", MessageBoxButtons::OK);
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE username=@username AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->username = reader->GetString(2);
				user->password = reader->GetString(3);
				user->isRestaurant = reader->GetBoolean(4);

				this->Close();
			}
			else {
				MessageBox::Show("Username or password is incorrect",
					"Username or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}

	}
	private: System::Void btnSignUp_Click(System::Object^ sender, System::EventArgs^ e) {
		 this -> tcLogin -> SelectedIndex=1;

	}

	private: System::Void chbShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->tbPW->UseSystemPasswordChar = !(this->chbShowPassword->Checked);
		
		/*if (this->chbShowPassword->Checked) {
			this->tbPW->UseSystemPasswordChar = false;
		}
		else {
			this->tbPW->UseSystemPasswordChar = true;
		}*/
	}

	private: System::Void chbIsRestaurant_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->chbIsRestaurant->Checked) {
			this->lblName->Text = "Restaurant Name";
		}
		else {
			this->lblName->Text = "Full Name";
		}
	}

	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->tcLogin->ItemSize = System::Drawing::Size(0, 1);
	}

	private: System::Void btnSignUpConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->tbUsernameSign->Text;
		String^ password = this->tbPasswordSign1->Text;
		String^ passwordConfirm = this->tbPasswordSign2->Text;
		String^ name = this->tbNameSign->Text;
		bool^ isRestaurant = chbIsRestaurant->Checked;

		if (username->Length == 0 || password->Length == 0 || name->Length == 0) {
			MessageBox::Show("Please enter username, name and password", "username, name or Password Empty", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(passwordConfirm, password) != 0) {
			MessageBox::Show("Password and Confirm Password do not match", "Password Error", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			
			String^ sqlQuery = "INSERT INTO users " + "(name, username, password, isRestaurant) VALUES " + "(@name, @username, @password, @isRestaurant);";
			
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@isRestaurant", isRestaurant);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->username = username;
			user->password = password;
			user->isRestaurant = isRestaurant;

			this->tcLogin->SelectedIndex = 0;
			sqlConn.Close();
			this->tbUsernameSign->Clear();
			this->tbNameSign->Clear();
			this->tbPasswordSign1->Clear();
			this->tbPasswordSign2->Clear();
			MessageBox::Show("Signed Up!", "Signed Up Succesfully", MessageBoxButtons::OK);
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
	private: System::Void lblLoginTab_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->tcLogin->SelectedIndex = 0;
	}
};
}
