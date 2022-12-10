#pragma once
#include "Review.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectIF {

	/// <summary>
	/// Summary for ReviewUC
	/// </summary>
	public ref class ReviewUC : public System::Windows::Forms::UserControl
	{
	public:
		ReviewUC(Review^ review)
		{
			InitializeComponent();
			this->lblNameReview->Text = review->user->name;
			this->lblRating->Text = review->Rate->ToString();
			this->lblComment->Text = review->Comment;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReviewUC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblNameReview;
	private: System::Windows::Forms::Label^ lblRating;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lblComment;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReviewUC::typeid));
			this->lblNameReview = (gcnew System::Windows::Forms::Label());
			this->lblRating = (gcnew System::Windows::Forms::Label());
			this->lblComment = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblNameReview
			// 
			this->lblNameReview->AutoSize = true;
			this->lblNameReview->Location = System::Drawing::Point(46, 4);
			this->lblNameReview->Name = L"lblNameReview";
			this->lblNameReview->Size = System::Drawing::Size(35, 13);
			this->lblNameReview->TabIndex = 0;
			this->lblNameReview->Text = L"Name";
			// 
			// lblRating
			// 
			this->lblRating->AutoSize = true;
			this->lblRating->Location = System::Drawing::Point(266, 5);
			this->lblRating->Name = L"lblRating";
			this->lblRating->Size = System::Drawing::Size(30, 13);
			this->lblRating->TabIndex = 1;
			this->lblRating->Text = L"Rate";
			// 
			// lblComment
			// 
			this->lblComment->AutoSize = true;
			this->lblComment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->lblComment->Location = System::Drawing::Point(46, 30);
			this->lblComment->MaximumSize = System::Drawing::Size(250, 0);
			this->lblComment->MinimumSize = System::Drawing::Size(0, 20);
			this->lblComment->Name = L"lblComment";
			this->lblComment->Size = System::Drawing::Size(250, 117);
			this->lblComment->TabIndex = 2;
			this->lblComment->Text = resources->GetString(L"lblComment.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 32);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// ReviewUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblComment);
			this->Controls->Add(this->lblRating);
			this->Controls->Add(this->lblNameReview);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->Name = L"ReviewUC";
			this->Size = System::Drawing::Size(310, 162);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	


};
}
