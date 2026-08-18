#include <cstdio>
#include <iostream>
#include <string>

#include <emscripten/bind.h>
using namespace emscripten;

int get_buffer_length(std::string buffer) {
    return std::snprintf(NULL, 0, buffer.c_str());
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("get_buffer_length", &get_buffer_length);
}
