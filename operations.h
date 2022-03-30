//
// Created by Caleb on 3/25/2022.
//

#ifndef REMEMBER_OPERATIONS_H
#define REMEMBER_OPERATIONS_H
#include "libraries.h"
#include <vector>
#include <fstream>
class operations {
public:
    int createFile();
    int modifyFile();
    int deleteFile();
    std::string fileName;
};


#endif //REMEMBER_OPERATIONS_H
