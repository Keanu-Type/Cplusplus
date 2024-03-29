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

Mystring::~Mystring(){
    delete [] str;
}

Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout<<"Copy assignment"<<std::endl;
    if(this==&rhs){
        return *this;
    }
    delete[] this->str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(this->str,rhs.str);
    return *this;
}

void Mystring::display()const{
    std::cout<<str<<" : "<<get_length()<<std::endl;
}

int Mystring::get_length()const{return strlen(str);}
const char *Mystring::get_str() const{
    return str;
}