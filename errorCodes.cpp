//
// Created by Caleb on 3/18/2022.
//
#include "errorCodes.h"

void errorCodes::errorMessage(int specificError)
{
    std::cout << "Error message exited with code " << specificError << std::endl;
    //Home designed for error messages
    if (specificError == -1) {
        std::cout << "Invalid option entered. Please enter 1, 2 or 3." << std::endl;
    }

    exit(specificError);
}

/*
void errorCodes::operationsErrors() {

}
 */