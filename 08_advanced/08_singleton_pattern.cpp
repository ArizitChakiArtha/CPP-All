#include <iostream>
using namespace std;

class Logger {
private:
    Logger() = default;

public:
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    static Logger& getInstance() {
        static Logger instance;
        return instance;
    }

    void log(const string& message) {
        cout << "[LOG] " << message << endl;
    }
};

int main() {
    Logger::getInstance().log("Application started.");
    Logger::getInstance().log("Singleton example running.");
    return 0;
}
