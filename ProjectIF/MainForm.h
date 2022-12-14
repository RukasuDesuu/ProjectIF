#pragma once
#include "User.h"
#include "RestaurantController.h"
#include "Restaurant.h"
#include "RestaurantUC.h"
#include "Review.h"
#include "ReviewController.h"
#include "ReviewUC.h"

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
		int^ id = nullptr;
		int^ idRestaurant = nullptr;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ btnReload;


		   User^ userl = nullptr;
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			this->tbName->Text = user->name;
			this->tbUsername->Text = user->username;
			id = user->id;
			userl = user;
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
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ btnRestaurantCad;
	private: System::Windows::Forms::Label^ lblRestCadTitle;
	private: System::Windows::Forms::TextBox^ tbRestDesc;

	private: System::Windows::Forms::Label^ lblRestDesc;

	private: System::Windows::Forms::TextBox^ tbRestName;

	private: System::Windows::Forms::Label^ lblRestName;
	private: System::Windows::Forms::CheckBox^ chbIsDog;
	private: System::Windows::Forms::PictureBox^ picGatito;
	private: System::Windows::Forms::Button^ btnSignUpConfirm;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblTerms;

	private: System::Windows::Forms::Label^ lblIdUser;
	private: System::Windows::Forms::TabPage^ RestaurantPage;
	private: System::Windows::Forms::Label^ lblRate;
	private: System::Windows::Forms::Label^ lblReviews;
	private: System::Windows::Forms::FlowLayoutPanel^ layoutReviews;

	private: System::Windows::Forms::Label^ lblRestDescPage;
	private: System::Windows::Forms::Label^ lblRestNamePage;
	private: System::Windows::Forms::Label^ lblReviewRate;

	private:
	private: System::Windows::Forms::Button^ btnReviewSend;
	public protected:
	private: System::Windows::Forms::TextBox^ tbReviewAdd;
	private: System::Windows::Forms::Label^ lblRateValue;
	public protected: System::Windows::Forms::TrackBar^ trkRate;
	private:
























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->btnReload = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->lblIdUser = (gcnew System::Windows::Forms::Label());
			this->lblRestCadTitle = (gcnew System::Windows::Forms::Label());
			this->picGatito = (gcnew System::Windows::Forms::PictureBox());
			this->btnSignUpConfirm = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblTerms = (gcnew System::Windows::Forms::Label());
			this->chbIsDog = (gcnew System::Windows::Forms::CheckBox());
			this->tbRestDesc = (gcnew System::Windows::Forms::TextBox());
			this->lblRestDesc = (gcnew System::Windows::Forms::Label());
			this->tbRestName = (gcnew System::Windows::Forms::TextBox());
			this->lblRestName = (gcnew System::Windows::Forms::Label());
			this->RestaurantPage = (gcnew System::Windows::Forms::TabPage());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->lblRestNamePage = (gcnew System::Windows::Forms::Label());
			this->lblRate = (gcnew System::Windows::Forms::Label());
			this->lblRestDescPage = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbReviewAdd = (gcnew System::Windows::Forms::TextBox());
			this->lblReviews = (gcnew System::Windows::Forms::Label());
			this->trkRate = (gcnew System::Windows::Forms::TrackBar());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblReviewRate = (gcnew System::Windows::Forms::Label());
			this->lblRateValue = (gcnew System::Windows::Forms::Label());
			this->btnReviewSend = (gcnew System::Windows::Forms::Button());
			this->layoutReviews = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnProfile = (gcnew System::Windows::Forms::Button());
			this->btnExplore = (gcnew System::Windows::Forms::Button());
			this->btnRestaurantCad = (gcnew System::Windows::Forms::Button());
			this->tcMain->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picGatito))->BeginInit();
			this->RestaurantPage->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trkRate))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
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
			this->tcMain->Controls->Add(this->tabPage3);
			this->tcMain->Controls->Add(this->RestaurantPage);
			this->tcMain->Location = System::Drawing::Point(40, 1);
			this->tcMain->Name = L"tcMain";
			this->tcMain->SelectedIndex = 0;
			this->tcMain->Size = System::Drawing::Size(588, 475);
			this->tcMain->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tcMain->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->tabPage1->Controls->Add(this->btnReload);
			this->tabPage1->Controls->Add(this->flowLayoutPanel1);
			this->tabPage1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(580, 446);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Explore";
			// 
			// btnReload
			// 
			this->btnReload->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->btnReload->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReload.BackgroundImage")));
			this->btnReload->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnReload->FlatAppearance->BorderSize = 0;
			this->btnReload->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReload->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReload.Image")));
			this->btnReload->Location = System::Drawing::Point(6, 3);
			this->btnReload->Name = L"btnReload";
			this->btnReload->Size = System::Drawing::Size(32, 32);
			this->btnReload->TabIndex = 4;
			this->btnReload->UseVisualStyleBackColor = false;
			this->btnReload->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(6, 40);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(568, 247);
			this->flowLayoutPanel1->TabIndex = 0;
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
			this->tabPage2->Size = System::Drawing::Size(580, 446);
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
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->tabPage3->Controls->Add(this->lblIdUser);
			this->tabPage3->Controls->Add(this->lblRestCadTitle);
			this->tabPage3->Controls->Add(this->picGatito);
			this->tabPage3->Controls->Add(this->btnSignUpConfirm);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->lblTerms);
			this->tabPage3->Controls->Add(this->chbIsDog);
			this->tabPage3->Controls->Add(this->tbRestDesc);
			this->tabPage3->Controls->Add(this->lblRestDesc);
			this->tabPage3->Controls->Add(this->tbRestName);
			this->tabPage3->Controls->Add(this->lblRestName);
			this->tabPage3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(580, 446);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"RestaurantCadastro";
			// 
			// lblIdUser
			// 
			this->lblIdUser->AutoSize = true;
			this->lblIdUser->Location = System::Drawing::Point(16, 295);
			this->lblIdUser->Name = L"lblIdUser";
			this->lblIdUser->Size = System::Drawing::Size(0, 13);
			this->lblIdUser->TabIndex = 18;
			// 
			// lblRestCadTitle
			// 
			this->lblRestCadTitle->AutoSize = true;
			this->lblRestCadTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRestCadTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(121)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->lblRestCadTitle->Location = System::Drawing::Point(85, 3);
			this->lblRestCadTitle->Name = L"lblRestCadTitle";
			this->lblRestCadTitle->Size = System::Drawing::Size(423, 42);
			this->lblRestCadTitle->TabIndex = 0;
			this->lblRestCadTitle->Text = L"Restaurant Cadastration";
			this->lblRestCadTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// picGatito
			// 
			this->picGatito->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picGatito.Image")));
			this->picGatito->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picGatito.InitialImage")));
			this->picGatito->Location = System::Drawing::Point(311, 74);
			this->picGatito->Name = L"picGatito";
			this->picGatito->Size = System::Drawing::Size(251, 218);
			this->picGatito->TabIndex = 17;
			this->picGatito->TabStop = false;
			// 
			// btnSignUpConfirm
			// 
			this->btnSignUpConfirm->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->btnSignUpConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->btnSignUpConfirm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSignUpConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSignUpConfirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignUpConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignUpConfirm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->btnSignUpConfirm->Location = System::Drawing::Point(167, 376);
			this->btnSignUpConfirm->Name = L"btnSignUpConfirm";
			this->btnSignUpConfirm->Size = System::Drawing::Size(244, 32);
			this->btnSignUpConfirm->TabIndex = 16;
			this->btnSignUpConfirm->Text = L"CONFIRM";
			this->btnSignUpConfirm->UseVisualStyleBackColor = false;
			this->btnSignUpConfirm->Click += gcnew System::EventHandler(this, &MainForm::btnSignUpConfirm_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(444, 430);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Terms and Conditions.";
			// 
			// lblTerms
			// 
			this->lblTerms->AutoSize = true;
			this->lblTerms->Location = System::Drawing::Point(225, 430);
			this->lblTerms->Name = L"lblTerms";
			this->lblTerms->Size = System::Drawing::Size(222, 13);
			this->lblTerms->TabIndex = 14;
			this->lblTerms->Text = L"By clicking on confirm you are agreeing to our";
			// 
			// chbIsDog
			// 
			this->chbIsDog->AutoSize = true;
			this->chbIsDog->Location = System::Drawing::Point(16, 254);
			this->chbIsDog->Name = L"chbIsDog";
			this->chbIsDog->Size = System::Drawing::Size(92, 17);
			this->chbIsDog->TabIndex = 5;
			this->chbIsDog->Text = L"Accepts dog\?";
			this->chbIsDog->UseVisualStyleBackColor = true;
			// 
			// tbRestDesc
			// 
			this->tbRestDesc->Location = System::Drawing::Point(16, 148);
			this->tbRestDesc->Multiline = true;
			this->tbRestDesc->Name = L"tbRestDesc";
			this->tbRestDesc->Size = System::Drawing::Size(247, 80);
			this->tbRestDesc->TabIndex = 4;
			// 
			// lblRestDesc
			// 
			this->lblRestDesc->AutoSize = true;
			this->lblRestDesc->Location = System::Drawing::Point(16, 131);
			this->lblRestDesc->Name = L"lblRestDesc";
			this->lblRestDesc->Size = System::Drawing::Size(115, 13);
			this->lblRestDesc->TabIndex = 3;
			this->lblRestDesc->Text = L"Restaurant Description";
			// 
			// tbRestName
			// 
			this->tbRestName->Location = System::Drawing::Point(13, 91);
			this->tbRestName->Name = L"tbRestName";
			this->tbRestName->Size = System::Drawing::Size(250, 20);
			this->tbRestName->TabIndex = 2;
			// 
			// lblRestName
			// 
			this->lblRestName->AutoSize = true;
			this->lblRestName->Location = System::Drawing::Point(13, 74);
			this->lblRestName->Name = L"lblRestName";
			this->lblRestName->Size = System::Drawing::Size(90, 13);
			this->lblRestName->TabIndex = 1;
			this->lblRestName->Text = L"Restaurant Name";
			// 
			// RestaurantPage
			// 
			this->RestaurantPage->AutoScroll = true;
			this->RestaurantPage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->RestaurantPage->Controls->Add(this->flowLayoutPanel2);
			this->RestaurantPage->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->RestaurantPage->Location = System::Drawing::Point(4, 25);
			this->RestaurantPage->Name = L"RestaurantPage";
			this->RestaurantPage->Padding = System::Windows::Forms::Padding(3);
			this->RestaurantPage->Size = System::Drawing::Size(580, 446);
			this->RestaurantPage->TabIndex = 3;
			this->RestaurantPage->Text = L"RestaurantPage";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->AutoSize = true;
			this->flowLayoutPanel2->Controls->Add(this->lblRestNamePage);
			this->flowLayoutPanel2->Controls->Add(this->lblRate);
			this->flowLayoutPanel2->Controls->Add(this->lblRestDescPage);
			this->flowLayoutPanel2->Controls->Add(this->tableLayoutPanel1);
			this->flowLayoutPanel2->Controls->Add(this->btnReviewSend);
			this->flowLayoutPanel2->Controls->Add(this->layoutReviews);
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel2->Location = System::Drawing::Point(7, 15);
			this->flowLayoutPanel2->MinimumSize = System::Drawing::Size(10, 10);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(570, 1800);
			this->flowLayoutPanel2->TabIndex = 3;
			// 
			// lblRestNamePage
			// 
			this->lblRestNamePage->AutoSize = true;
			this->lblRestNamePage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRestNamePage->Location = System::Drawing::Point(3, 0);
			this->lblRestNamePage->Name = L"lblRestNamePage";
			this->lblRestNamePage->Size = System::Drawing::Size(183, 33);
			this->lblRestNamePage->TabIndex = 0;
			this->lblRestNamePage->Text = L"lblRestName";
			// 
			// lblRate
			// 
			this->lblRate->AutoSize = true;
			this->lblRate->Location = System::Drawing::Point(3, 33);
			this->lblRate->Name = L"lblRate";
			this->lblRate->Size = System::Drawing::Size(33, 13);
			this->lblRate->TabIndex = 4;
			this->lblRate->Text = L"Rate:";
			// 
			// lblRestDescPage
			// 
			this->lblRestDescPage->AutoSize = true;
			this->lblRestDescPage->Location = System::Drawing::Point(3, 46);
			this->lblRestDescPage->Name = L"lblRestDescPage";
			this->lblRestDescPage->Size = System::Drawing::Size(64, 13);
			this->lblRestDescPage->TabIndex = 1;
			this->lblRestDescPage->Text = L"lblRestDesc";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tbReviewAdd, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->lblReviews, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->trkRate, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 62);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(564, 121);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// tbReviewAdd
			// 
			this->tbReviewAdd->Location = System::Drawing::Point(3, 63);
			this->tbReviewAdd->Multiline = true;
			this->tbReviewAdd->Name = L"tbReviewAdd";
			this->tbReviewAdd->Size = System::Drawing::Size(276, 55);
			this->tbReviewAdd->TabIndex = 5;
			// 
			// lblReviews
			// 
			this->lblReviews->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lblReviews->AutoSize = true;
			this->lblReviews->Location = System::Drawing::Point(3, 47);
			this->lblReviews->Name = L"lblReviews";
			this->lblReviews->Size = System::Drawing::Size(48, 13);
			this->lblReviews->TabIndex = 3;
			this->lblReviews->Text = L"Reviews";
			// 
			// trkRate
			// 
			this->trkRate->LargeChange = 10;
			this->trkRate->Location = System::Drawing::Point(285, 63);
			this->trkRate->Name = L"trkRate";
			this->trkRate->Size = System::Drawing::Size(201, 45);
			this->trkRate->TabIndex = 7;
			this->trkRate->Value = 5;
			this->trkRate->Scroll += gcnew System::EventHandler(this, &MainForm::trkRate_Scroll);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				237)));
			this->tableLayoutPanel2->Controls->Add(this->lblReviewRate, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->lblRateValue, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(285, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(276, 54);
			this->tableLayoutPanel2->TabIndex = 8;
			// 
			// lblReviewRate
			// 
			this->lblReviewRate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lblReviewRate->AutoSize = true;
			this->lblReviewRate->Location = System::Drawing::Point(3, 41);
			this->lblReviewRate->Name = L"lblReviewRate";
			this->lblReviewRate->Size = System::Drawing::Size(33, 13);
			this->lblReviewRate->TabIndex = 8;
			this->lblReviewRate->Text = L"Rate:";
			// 
			// lblRateValue
			// 
			this->lblRateValue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lblRateValue->AutoSize = true;
			this->lblRateValue->Location = System::Drawing::Point(42, 41);
			this->lblRateValue->Name = L"lblRateValue";
			this->lblRateValue->Size = System::Drawing::Size(13, 13);
			this->lblRateValue->TabIndex = 9;
			this->lblRateValue->Text = L"5";
			// 
			// btnReviewSend
			// 
			this->btnReviewSend->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->btnReviewSend->Location = System::Drawing::Point(3, 189);
			this->btnReviewSend->Name = L"btnReviewSend";
			this->btnReviewSend->Size = System::Drawing::Size(65, 31);
			this->btnReviewSend->TabIndex = 6;
			this->btnReviewSend->Text = L"SEND";
			this->btnReviewSend->UseVisualStyleBackColor = true;
			this->btnReviewSend->Click += gcnew System::EventHandler(this, &MainForm::btnReviewSend_Click);
			// 
			// layoutReviews
			// 
			this->layoutReviews->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->layoutReviews->AutoSize = true;
			this->layoutReviews->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->layoutReviews->Location = System::Drawing::Point(3, 226);
			this->layoutReviews->MaximumSize = System::Drawing::Size(800, 0);
			this->layoutReviews->Name = L"layoutReviews";
			this->layoutReviews->Size = System::Drawing::Size(564, 0);
			this->layoutReviews->TabIndex = 2;
			// 
			// btnProfile
			// 
			this->btnProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnProfile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnProfile->FlatAppearance->BorderSize = 0;
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
			this->btnExplore->FlatAppearance->BorderSize = 0;
			this->btnExplore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExplore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExplore.Image")));
			this->btnExplore->Location = System::Drawing::Point(4, 5);
			this->btnExplore->Name = L"btnExplore";
			this->btnExplore->Size = System::Drawing::Size(32, 32);
			this->btnExplore->TabIndex = 2;
			this->btnExplore->UseVisualStyleBackColor = false;
			this->btnExplore->Click += gcnew System::EventHandler(this, &MainForm::btnExplore_Click);
			// 
			// btnRestaurantCad
			// 
			this->btnRestaurantCad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnRestaurantCad->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRestaurantCad.BackgroundImage")));
			this->btnRestaurantCad->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRestaurantCad->FlatAppearance->BorderSize = 0;
			this->btnRestaurantCad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRestaurantCad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRestaurantCad.Image")));
			this->btnRestaurantCad->Location = System::Drawing::Point(4, 78);
			this->btnRestaurantCad->Name = L"btnRestaurantCad";
			this->btnRestaurantCad->Size = System::Drawing::Size(32, 32);
			this->btnRestaurantCad->TabIndex = 3;
			this->btnRestaurantCad->UseVisualStyleBackColor = false;
			this->btnRestaurantCad->Click += gcnew System::EventHandler(this, &MainForm::btnRestaurantCad_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->ClientSize = System::Drawing::Size(630, 476);
			this->Controls->Add(this->btnRestaurantCad);
			this->Controls->Add(this->btnExplore);
			this->Controls->Add(this->btnProfile);
			this->Controls->Add(this->tcMain);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tcMain->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picGatito))->EndInit();
			this->RestaurantPage->ResumeLayout(false);
			this->RestaurantPage->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trkRate))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Cyan = rgb(139, 233, 253)

	public:
		
		ReviewController^ reviewController = gcnew ReviewController();
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->tcMain->ItemSize = System::Drawing::Size(0, 1);

		getRestaurants();
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->flowLayoutPanel1->Controls->Clear();
		getRestaurants();

	}

	void getRestaurants() {
		for each (Restaurant ^ i in restaurantController->getAllRestaurants()) {
			RestaurantUC^ restaurantuc = gcnew RestaurantUC(i);
			restaurantuc->changetab += gcnew System::EventHandler(this, &MainForm::changeTab);
			this->flowLayoutPanel1->Controls->Add(restaurantuc);

		}
	}
	protected: System::Void changeTab(System::Object^ sender, System::EventArgs^ e){
		this->tcMain->SelectedIndex = 3;
		this->lblRestNamePage->Text = dynamic_cast<Restaurant^>(sender)->name;
		this->lblRestDescPage->Text = "Description: " + dynamic_cast<Restaurant^>(sender)->descricao;
		idRestaurant = dynamic_cast<Restaurant^>(sender)->idRestaurant;
		getReviews();
		
	}
	private:
		int soma;
		float n = 0.00;
	void getReviews() {
		this->layoutReviews->Controls->Clear();
		for each (Review ^ v in reviewController->getReviewByRestaurant(idRestaurant)) {
			ReviewUC^ reviewuc = gcnew ReviewUC(v);
			this->layoutReviews->Controls->Add(reviewuc);
			soma += *v->Rate;
			n++;
		}
		if (n == 0.0) {
			this->lblRate->Text = "Rate: No Rates yet";
		}else{
			this->lblRate->Text = "Rate: " + (soma / n).ToString("#.##");
		}
		n = 0;
		soma = 0;
	}


	private: System::Void btnProfile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tcMain->SelectedIndex = 1;
		this->btnProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
		this->btnExplore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->btnRestaurantCad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	}
	private: System::Void btnExplore_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tcMain->SelectedIndex = 0;
		this->btnExplore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
		this->btnProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->btnRestaurantCad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
	
		this->layoutReviews->Controls->Clear();
	}
	public:
		RestaurantController^ restaurantController = gcnew RestaurantController();
		Restaurant^ restaurant = gcnew Restaurant();
	private: System::Void btnRestaurantCad_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tcMain->SelectedIndex = 2;
		this->btnRestaurantCad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
		this->btnExplore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		this->btnProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
		Restaurant^ restaura = restaurantController->getRestaurantByUser(id);
		if ( restaura != nullptr) {
			this->tbRestName->Enabled = false;
			this->tbRestDesc->Enabled = false;
			this->btnRestaurantCad->Enabled = false;
			this->tbRestName->Text = restaura -> name;
			this->tbRestDesc->Text = restaura -> descricao;
		}

	}
	
	private: System::Void btnSignUpConfirm_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ restName = this->tbRestName->Text;
		String^ restDesc = this->tbRestDesc->Text;
		bool^ isDog = this->chbIsDog->Checked;

		try {
			restaurant->name = restName;
			restaurant->descricao = restDesc;
			restaurant->isDog = isDog;
			restaurant->idUser = id;

			bool result = restaurantController->createRestaurant(restaurant);

			if (!result) {
				MessageBox::Show("Failed, try again", "Cadastration not Succesfull", MessageBoxButtons::OK);
				return;
			}

			MessageBox::Show("Signed Up!", "Signed Up Succesfully", MessageBoxButtons::OK);
			this->tbRestName->Text = "";
			this->tbRestDesc->Text = "";
			this->chbIsDog->Checked = false;
			this->tcMain->SelectedIndex = 0;
			this->btnExplore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnRestaurantCad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(242)));

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}

	}
	


	private: System::Void trkRate_Scroll(System::Object^ sender, System::EventArgs^ e) {
		int rateValue = trkRate->Value;
		this->lblRateValue->Text = rateValue.ToString();
	}
		   
	private: System::Void btnReviewSend_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ comment = tbReviewAdd->Text;
		int^ rating = trkRate->Value;
		Review^ review = gcnew Review();
		
		try {
			review->Comment = comment;
			review->Rate = rating;
			review->IdRestaurant = idRestaurant;
			review->user = userl;

			bool result = reviewController->createReview(review);

			if (!result) {
				MessageBox::Show("Failed, try again", "Review not Succesfull", MessageBoxButtons::OK);
				return;
			}

			MessageBox::Show("Review!", "Review Sent Succesfully", MessageBoxButtons::OK);

			this->tbReviewAdd->Text = "";
			getReviews();

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
		

	}


};
#pragma endregion
}