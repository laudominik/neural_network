#pragma once

#include <exception>
#include <sstream>

class SizeMismatchException : public std::exception {
private:
    std::string message;
public:
    explicit SizeMismatchException(const std::string& message): message(message) {};

    const char* what() const noexcept override {
        return message.c_str();
    }
};
