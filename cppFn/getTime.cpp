#include <iostream>
#include <ctime>
#include <emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    const time_t getCurrentTime() {
        time_t now = time(0);
        return now;
    }
}
