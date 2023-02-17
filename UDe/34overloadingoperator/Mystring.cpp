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

Mystring &Mystring::operator=(Mystring &rhs){
    std::cout<<"move assignment"<<std::endl;
    if(this==&rhs){
        return *this;
    }
    delete[] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}
//EQUALITY
bool Mystring::operator==(const Mystring &rhs)const{
    return(std::strcmp(str,rhs.str)==0);
}

//LOWER ALL CASE
Mystring Mystring::operator-() const{
    char *buff= new char[std::strlen(str)+1];
    std::strcpy(buff,str); //copy the string in buff
    for(size_t i=0;i<std::strlen(buff); i++){
        buff[i]=std::tolower(buff[i]); //lowercase each char
    }
    Mystring temp{buff};
    delete [] buff;;
    return temp;
}

//CONCATONATE METHOD
Mystring Mystring::operator+(const Mystring &rhs)const{
    //length to concanenate
    char *buff = new char[std::strlen(str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
}

void Mystring::display()const{
    std::cout<<str<<" : "<<get_length()<<std::endl;
}

int Mystring::get_length()const{return strlen(str);}
const char *Mystring::get_str() const{
    return str;
}