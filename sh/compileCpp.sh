#!/bin/sh
emcc cppFn/getTime.cpp -s WASM=1 -s EXPORTED_FUNCTIONS='["_getCurrentTime"]' -s EXPORTED_RUNTIME_METHODS='["ccall","cwrap"]' -o public/build/getTime.js
emcc cppFn/add.cpp -s WASM=1 -s EXPORTED_FUNCTIONS='["_add"]' -s EXPORTED_RUNTIME_METHODS='["ccall","cwrap"]' -o public/build/add.js
