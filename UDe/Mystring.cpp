#include <cstring>
#include <iostream>
#include "Mystring.h"

//no args constructor
Mystring::Mystring()
    :str{nullptr}{
        str=new char[1];
        *str ='\0'; //it will display nothing
    }


//OVERLOADED CONSTRUCTOR
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
        str=new char[1];
        *str ='\0';
    }else{
        str= new char[std::strlen(s)+1]; //allocate memory to heap. the size/ength of "s" + 1. 
        std::strcpy(str,s);               ///
    }
}

//COPY CONSTRUCOTR
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str,source.str);
    }
