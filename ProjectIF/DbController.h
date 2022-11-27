using namespace System;
using namespace System::Data::SqlClient;

class DbController
{
protected:
    DbController()
    {
    }

    static DbController* instance;

    public:
        DbController(DbController& other) = delete;

        void operator=(const DbController&) = delete;

        static DbController* GetInstance();

        static SqlConnection^ getSqlConnection() {
            String^ connectionString = "Data Source=localhost;Integrated Security=True";

            SqlConnection^ sqlConn = gcnew SqlConnection(connectionString);

            return sqlConn;
        }
};

DbController* DbController::instance = nullptr;;

DbController* DbController::GetInstance()
{
    if (instance == nullptr) {
        instance = new DbController();
    }
    return instance;
}
