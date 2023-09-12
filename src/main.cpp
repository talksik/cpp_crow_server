#include "include/crow_all.h"
#include "include/user_service.h"
#include <iostream>

int main() {
  std::cout << "Hello World!" << std::endl;

  crow::SimpleApp app;

  UserService *userService = new UserService();

  CROW_ROUTE(app, "/")([]() { return "Hello world"; });

  CROW_ROUTE(app, "/getuser")
  ([&]() {
    User *user = userService->GetUser();
    crow::json::wvalue x({{"age", user->age},
                          {"email", user->email},
                          {"id", user->id},
                          {"name", user->name}});
    return x;
  });

  app.port(3000).multithreaded().run();
}
