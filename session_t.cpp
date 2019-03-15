/*
    session_t.cpp

    Test the class Session
*/

#include <cassert>
#include <unistd.h>
#include <chrono>

class Session {
public:
    Session() : start(std::chrono::system_clock::now()) {}
    int elapsed() { return std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - start).count(); }
private:
    std::chrono::system_clock::time_point start;
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
