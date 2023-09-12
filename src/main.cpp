#include "include/crow_all.h"
#include <iostream>

int main() {
  std::cout << "Hello World!" << std::endl;

  crow::SimpleApp app;

  CROW_ROUTE(app, "/")([]() { return "Hello world"; });

  CROW_ROUTE(app, "/getuser")([]() {
      return "adfas";
  });

  app.port(3000).multithreaded().run();
}
