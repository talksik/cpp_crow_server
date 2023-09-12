
#include "include/user_service.h"
#include <iostream>

UserService::UserService()
{
    // ...
    User* user = new User();
    user->id = 2;
    user->name = "John";
    user->password = "password";
    user->email = "test@gmail.com";

    this->m_user = user;
}

UserService::~UserService()
{
}

void UserService::SetUser(const User& user)
{
    std::cout << "not implemented" << std::endl;
}

User* UserService::GetUser()
{
    return this->m_user;
}
