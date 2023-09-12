
#ifndef USER_SERVICE_H_
#define USER_SERVICE_H_

#include <string>

enum UserAge
{
  Young,
  Adult,
  Old
};

struct User
{
  int id;
  std::string name;
  std::string email;
  std::string password;
  UserAge age;
};

class UserService
{

private:
  // todo: database dependency
  User* m_user = nullptr;

public:
  UserService();
  ~UserService();

  User* GetUser();
  void SetUser(const User& newUser);
};

#endif // USER_SERVICE_H_
