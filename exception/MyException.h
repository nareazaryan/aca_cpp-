#pragma once

#include <exception>
#include <string>

class MyException : public std::exception {
private:
    std::string errorMessage;

public:
    MyException(const std::string& message) : errorMessage(message) {}

    const char* what() const noexcept override {
        return errorMessage.c_str();
    }
};


