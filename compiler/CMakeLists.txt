cmake_minimum_required(VERSION 3.27)
project(simple_scanner)

set(CMAKE_CXX_STANDARD 17)

add_executable(simple_scanner main.cpp
        Token.cpp
        Token.h
        Tokenizer.cpp
        Tokenizer.h)
