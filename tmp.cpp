#ifndef KURSOVAYA_MAIN_HEADER_CPP
#define KURSOVAYA_MAIN_HEADER_CPP

#include <string>
#include <iostream>

typedef enum access {
    PASSENGER = 0,
    ADMIN = 1,
    STAFF = 2,
    STAFF = 3,
    CUSTOMS = 4,
    BORDER = 5
};

typedef class User {
    private:
        std::string login;
        std::string password;
        access role;
        std::string file_log;

    public:
        /*
        getters
        */
        std::string getRole() const;
        std::string getLogin() const;
        std::string getPassword() const;
        /*
        setters
        */
        void setRole(const std::string) const;
        void setLogin(const std::string) const;
        void getPassword(const std::string) const;
        /*
        constructor
        */
        User(const std::string login, const std::string pass, const std::string role);
        ~User();
        /*
        Passenger functions
        */
        

};

#endif  // KURSOVAYA_MAIN_HEADER_CPP
