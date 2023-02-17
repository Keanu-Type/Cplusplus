#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring():str(nullptr){
    str = new char[1];
    *str ='\0';
}

//overloading constructor

Mystring::Mystring(const char *s):str(nullptr){
    if(s==nullptr){
        str==new char[1];
        *str = '\0';
    }else{
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
}

Mystring::Mystring(Mystring &&source):str(source.str){
    source.str=nullptr;
    std::cout<<"Move Constructor used"<<std::endl;
}

Mystring::~Mystring(){
    delete [] str;
}

Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout<<"Using copy assignment"<<std::endl;

    if(this==&rhs){
        return *this;
    }
    delete [] str;
    str = new char[strlen(rhs.str)+1];
    strcpy(str, rhs.str);
    return *this;
}
//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<<"Using Move"<<std::endl;
        if(this==&rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

void Mystring::display()const{
    std::cout<<str<<" : "<<get_length()<<std::endl;
}

//getter
int Mystring::get_length()const{return strlen(str);}
const char *Mystring::get_str() const{return str;}

//overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os << rhs.str;
    return os;
}

//overloaded extraction
std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char[1000];
    in >>buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}