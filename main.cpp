#include "crow.h"
#include "iostream"

int main() {

    std::cout << std::system("pwd")<<std::endl;
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
       return "Hello CROW";
    });

    CROW_ROUTE(app,"/test_page")([](){
        auto page = crow::mustache::load_text("test.html");
        return page;
    });

    app.port(18080).multithreaded().run();
}
