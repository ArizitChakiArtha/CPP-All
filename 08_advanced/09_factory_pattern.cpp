#include <iostream>
#include <memory>
using namespace std;

class Notification {
public:
    virtual void send(const string& message) = 0;
    virtual ~Notification() = default;
};

class EmailNotification : public Notification {
public:
    void send(const string& message) override {
        cout << "Email: " << message << endl;
    }
};

class SmsNotification : public Notification {
public:
    void send(const string& message) override {
        cout << "SMS: " << message << endl;
    }
};

unique_ptr<Notification> createNotification(const string& type) {
    if (type == "email") return make_unique<EmailNotification>();
    if (type == "sms") return make_unique<SmsNotification>();
    return nullptr;
}

int main() {
    auto notification = createNotification("email");
    if (notification) {
        notification->send("Factory pattern example.");
    }
    return 0;
}
