#include "DbController.cpp"
#include "Review.h"

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

ref class ReviewController {

	SqlConnection^ sqlConn = DbController::getCon();

	ReviewController() { }

	bool createReview(Review^ review) {
		try {
			sqlConn->Open();

			String^ sqlQuery = "INSERT INTO Reviews " + "(Comment, Rate, IdRestaurant, IdUser) VALUES " + "(@Comment, @Rate, @IdRestaurant, @IdUser);";

			SqlCommand command(sqlQuery, sqlConn);
			command.Parameters->AddWithValue("@Comment", review->Comment);
			command.Parameters->AddWithValue("@Rate", review->Rate);
			command.Parameters->AddWithValue("@IdRestaurant", review->IdRestaurant);
			command.Parameters->AddWithValue("@IdUser", review->IdUser);

			command.ExecuteNonQuery();

			return true;

			sqlConn->Close();
		}
		catch (Exception^ e) {
			if (sqlConn->State.ToString()->Equals("Open")) {
				sqlConn->Close();
			}

			return false;
		}

	}

	Review^ getReviewByUser(int IdUser) {
		try {
			sqlConn->Open();
			String^ sqlQuery = "SELECT * FROM Reviews WHERE IdUser=@IdUser";
			SqlCommand command(sqlQuery, sqlConn);
			command.Parameters->AddWithValue("@IdUser", IdUser);

			SqlDataReader^ reader = command.ExecuteReader();
			Review^ review = gcnew Review();

			if (reader->Read()) {

				review->IdRestaurant = reader->GetInt32(0);
				review->Comment = reader->GetString(1);
				review->Rate = reader->GetInt32(2);
				review->IdRestaurant = reader->GetInt32(3);
				review->IdUser = reader->GetInt32(4);

			}

			sqlConn->Close();

			return review;
		}
		catch (Exception^ e) {
			if (sqlConn->State.ToString()->Equals("Open")) {
				sqlConn->Close();
			}

			return nullptr;
		}

	List<Review^>^ getReviewByRestaurant(int IdRestaurant) {
		try {
			sqlConn->Open();
			String^ sqlQuery = "SELECT * FROM Reviews WHERE IdRestaurant=@IdRestaurant";
			SqlCommand command(sqlQuery, sqlConn);
			command.Parameters->AddWithValue("@IdRestaurant", IdRestaurant);

			SqlDataReader^ reader = command.ExecuteReader();

			List<Review^>^ reviews = gcnew List<Review^>();

			while (reader->Read()) {
				Review^ review = gcnew Review();

				review->IdRestaurant = reader->GetInt32(0);
				review->Comment = reader->GetString(1);
				review->Rate = reader->GetInt32(2);
				review->IdRestaurant = reader->GetInt32(3);
				review->IdUser = reader->GetInt32(4);

				reviews->Add(review);
			}

			sqlConn->Close();

			return reviews;
		}
		catch (Exception^ e) {
			if (sqlConn->State.ToString()->Equals("Open")) {
				sqlConn->Close();
			}

			return nullptr;
		}
}