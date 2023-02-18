#include "Printable.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const Printable &obj){
    obj.print(os);
    return os;
}