#pragma once
using System::String;
using namespace System::Data::SqlClient;

ref class DbController {

public:
    private: 
        static SqlConnection^ connection;

        DbController() {
            String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";

            connection = gcnew SqlConnection(connectionString);
        }

    public:
        static SqlConnection^ getCon() {
            if (connection == nullptr) {
                DbController();
            }
            return connection;
        }
};