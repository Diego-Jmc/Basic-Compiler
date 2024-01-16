//
// Created by Diego on 1/15/2024.
//

#include "CompliationError.h"

CompliationError::CompliationError(int errorCode, const std::string &errorMessage) : errorCode(errorCode),
                                                                                     errorMessage(errorMessage) {}
