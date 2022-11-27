#include "DbController.cpp"
#include "Restaurant.h"

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

ref class RestaurantController {
public:
	SqlConnection^ sqlConn = DbController::getCon();

	RestaurantController() { }

	List<Restaurant^>^ getAllRestaurants() {
		try {
			sqlConn->Open();
			String^ sqlQuery = "SELECT * FROM Restaurants";
			SqlCommand command(sqlQuery, sqlConn);
			command.Parameters->AddWithValue("@IdRestaurant", 5);

			SqlDataReader^ reader = command.ExecuteReader();

			List<Restaurant^>^ restaurants = gcnew List<Restaurant^>();

			while (reader->Read()) {
				Restaurant^ restaurant = gcnew Restaurant();

				restaurant->idRestaurant = reader->GetInt32(0);
				restaurant->name = reader->GetString(1);
				restaurant->descricao = reader->GetString(2);
				restaurant->isDog = reader->GetBoolean(3);

				restaurants->Add(restaurant);
			}

			sqlConn->Close();

			return restaurants;
		}
		catch (Exception^ e) {
			if (sqlConn->State.ToString()->Equals("Open")) {
				sqlConn->Close();
			}

			return nullptr;
		}
	}

	Restaurant^ getRestaurantById(int idRestaurant) {
		try {
			sqlConn->Open();

			String^ sqlQuery = "SELECT * FROM Restaurants WHERE IdRestaurant=@IdRestaurant;";
			SqlCommand command(sqlQuery, sqlConn);

			command.Parameters->AddWithValue("@IdRestaurant", idRestaurant);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				Restaurant^ restaurant = gcnew Restaurant();

				restaurant->idRestaurant = reader->GetInt32(0);
				restaurant->name = reader->GetString(1);
				restaurant->descricao = reader->GetString(2);
				restaurant->isDog = reader->GetBoolean(3);

				sqlConn->Close();
				return restaurant;
			}
			else {
				sqlConn->Close();
				return nullptr;
			}
		}
		catch (Exception^ e) {
			if (sqlConn->State.ToString()->Equals("Open")) {
				sqlConn->Close();
			}
		}
	}

	bool createRestaurant(Restaurant^ restaurant) {
		try {
			sqlConn->Open();

			String^ sqlQuery = "INSERT INTO Restaurants " + "VALUES (@name, @descricao, @isDog);";

			SqlCommand command(sqlQuery, sqlConn);
			command.Parameters->AddWithValue("@name", restaurant->name);
			command.Parameters->AddWithValue("@descricao", restaurant->descricao);
			command.Parameters->AddWithValue("@isDog", restaurant->isDog);

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
};
