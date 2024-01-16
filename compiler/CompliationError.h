//
// Created by Diego on 1/15/2024.
//

#ifndef SIMPLE_SCANNER_COMPLIATIONERROR_H
#define SIMPLE_SCANNER_COMPLIATIONERROR_H
#include <iostream>
#include <sstream>

class CompliationError : public std::exception {
private:
    int errorCode;
    std::string errorMessage;
public:

    // Sobrecarga de la función what()
    const char* what() const noexcept override {
        std::ostringstream errorMsg;
        errorMsg << "CompilationError (Code " << errorCode << "): " << errorMessage;
        return errorMsg.str().c_str();
    }

    int getErrorCode() const {
        return errorCode;
    }
};


#endif //SIMPLE_SCANNER_COMPLIATIONERROR_H
