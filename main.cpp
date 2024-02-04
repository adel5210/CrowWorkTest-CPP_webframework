#include "crow.h"

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
       return "Hellow CROW";
    });
    app.port(18080).multithreaded().run();
}
