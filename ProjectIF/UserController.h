#include "DbController.cpp"
#include "User.h"

using namespace System;
using namespace System::Data::SqlClient;

ref class UserController {
	public:
		SqlConnection^ sqlConn = DbController::getCon();

		UserController() { }

		User^ readUser(String^ username, String^ password) {
			try {
				sqlConn->Open();

				String^ sqlQuery = "SELECT * FROM users WHERE username=@username AND password=@pwd;";
				SqlCommand command(sqlQuery, sqlConn);

				command.Parameters->AddWithValue("@username", username);
				command.Parameters->AddWithValue("@pwd", password);

				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read()) {
					User^ user = gcnew User();

					user->id = reader->GetInt32(0);
					user->name = reader->GetString(1);
					user->username = reader->GetString(2);
					user->password = reader->GetString(3);

					sqlConn->Close();
					return user;
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

		bool createUser(User^ user) {
			try {
				sqlConn->Open();

				String^ sqlQuery = "INSERT INTO users " + "(name, username, password) VALUES " + "(@name, @username, @password);";

				SqlCommand command(sqlQuery, sqlConn);
				command.Parameters->AddWithValue("@name", user->name);
				command.Parameters->AddWithValue("@username", user->username);
				command.Parameters->AddWithValue("@password", user->password);
				//command.Parameters->AddWithValue("@idRestaurant", user->idRestaurant);

				command.ExecuteNonQuery();

				sqlConn->Close();

				return true;

				
			}
			catch (Exception^ e) {
				if (sqlConn->State.ToString()->Equals("Open")) {
					sqlConn->Close();
				}

				return false;
			}
			
		}
};
