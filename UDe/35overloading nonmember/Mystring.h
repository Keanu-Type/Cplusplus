#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <ostream>
class Mystring
{

    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
        //this is not const because it is base on input
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    
    private:
        char *str;
    public:
        Mystring();                         //No-args 
        Mystring(const char *s);            //overloaded
        Mystring(const Mystring &source);   //copy
        Mystring(Mystring &&source);        //move
        ~Mystring();                        //destructor

        Mystring &operator=(const Mystring &rhs); //copy assignment
        Mystring &operator=(Mystring &&rhs); //move assigment

        void display() const;

        int get_length() const;          //getter
        const char *get_str() const;
};

#endif