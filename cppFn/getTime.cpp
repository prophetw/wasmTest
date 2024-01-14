#include <iostream>
#include <ctime>
#include <emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    const char* getCurrentTime() {
        time_t now = time(0);
        char* dt = ctime(&now);
        return dt;
    }
}
