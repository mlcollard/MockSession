/*
    session_t.cpp

    Implement and test the class Session
*/

#include <ctime>
#include <cassert>
#include <unistd.h>

class Session {
public:
    Session() : start_time(std::time(nullptr)) {}
    int elapsed() { return std::time(nullptr) - start_time; }
private:
    std::time_t start_time;
};

int main() {

    // 2-second session
    {
        Session s;
        sleep(2);
        assert(s.elapsed() == 2);
    }

    return 0;
}
