//
// Created by Caleb on 3/18/2022.
//

#ifndef REMEMBER_REMEMBER_H
#define REMEMBER_REMEMBER_H
#include "libraries.h"


class remember {
    public:
        int menu();
        void choose() const;
    private:
        std::string option = "Welcome to Remember. Please select an option:\n 1. Read a text file\n 2. Write to a new file\n 3. Delete a file";
        unsigned int choice;
};

#endif //REMEMBER_REMEMBER_H
